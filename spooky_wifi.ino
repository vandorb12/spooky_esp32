#include "morse_code_setup.h"
#include "wifi_setup.h"
#include "web_server.h"

void setup() {
  // put your setup code here, to run once:

  // initialize digital pin 13 as an output. (Same pin used in Blink)
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  webServerSetup(); //Calls function to start webserver
  
  
  Serial.println("Wait for it...");
  message = "HAPPY HALLOWEEN";
}

void loop() {
  // put your main code here, to run repeatedly:
  if ( currSignal == '\0' )
  {
    currMsgIdx = 0;
  }
  else
  {
    currMsgIdx++;

    if (message[currMsgIdx] == '\0')
    {
      currMsgIdx = 0;
    }
  }

  sendMorseChar(message[currMsgIdx]);
  Serial.println(message[currMsgIdx]);
  currSignal = message[currMsgIdx];

  static unsigned long last_update_time = 0;
    if (millis() - last_update_time > update_interval) {
        static int current_line = 0;
        current_line = (current_line + 1) % (sizeof(wifi_names) / sizeof(String));
        Serial.print("Updating SSID to ");
        Serial.println(wifi_names[current_line]);
        WiFi.softAP(wifi_names[current_line].c_str());
        dnsServer.start(); // (re)starts the DNS server
        last_update_time = millis();
    }
}
