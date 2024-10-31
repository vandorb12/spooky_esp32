#include <AsyncTCP.h> //https://github.com/me-no-dev/AsyncTCP Can be installed in Arduino IDE Library Explorer
#include "ESPAsyncWebServer.h" //Can also be installed in the Arduino IDE Library https://github.com/me-no-dev/ESPAsyncWebServer
#include "DNSServer.h"

AsyncWebServer server(80);
DNSServer dnsServer;

void webServerSetup(){
  
  //This is a super simple page that will be served up any time the root location is requested.  Get here intentionally by typing in the IP address.
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/html", "<!DOCTYPE html><html><head><title>Success</title></head><body><p>Hooray</p></body>");
    Serial.println("requested /");
  });


  //This is an example of triggering for a known location.  This one seems to be common for android devices
  server.on("/generate_204", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/plain", "You were sent here by a captive portal after requesting generate_204");
    Serial.println("requested /generate_204");
  });

  //This is an example of a redirect type response.  onNotFound acts as a catch-all for any request not defined above
  server.onNotFound([](AsyncWebServerRequest *request){
    request->redirect("/");
    Serial.print("server.notfound triggered: ");
    Serial.println(request->url());       //This gives some insight into whatever was being requested
  });

  server.begin();                         //Starts the server process
  Serial.println("Web server started");
}
