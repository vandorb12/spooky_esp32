# spooky_wifi
 A silly Halloween themed ESP32 project in an effort to learn stuff

This is a small project that implements the ESP32's features, mainly the built-in LED and WiFi to do some simple, but fun things.

The intended goal is to hand these out during Halloween 2024 to spark a little fun in making and hacking within my neighborhood.

There are still functions I still intend to implement post-Halloween, but I figure this is enough of a finished product for now.

Built in the Arduino IDE, because I was lazy and was already comfortable writing in it, and heck... it's intended for kids to hack!

PARENTS! Thanks for reading. I'll eventually flesh this out for you to follow, but I'm an overworked and undermotivated 30-something that barely has their head on straight. I hope you can understand.

Here's what this does when powered on:
1. It blinks a message in Morse Code on the built-in LED. Use the decoder provided in the package to get the message!
2. It creates a series of WiFi beacons (that cannot access the internet or serves any webpages) that are "spooky" and halloween themed.
    Tell your kids that the WiFi is "haunted" to minimize their screen time! I jest, tell them whatever you want.
3. The serial interface running at 115200 baud gives out hints. Use the serial monitor to snoop on it.

What this does NOT do
1. Haunt your WiFi, or Hack it
2. Bring loved ones back from the dead
3. Creates fields of malace to turn your young ones in to miscreants and deviants
4. Put a virus on your computer

To start hacking, download and install the Arduino IDE from your computer's app store or from https://www.arduino.cc/en/software
PC, MacBook, Chromebook, they got it all.

If you have real young youngsters, I encourage you and your budding hacker to explore Scratch and PictoBlox which is a graphical, drag-n-drop code editor: https://docs.sunfounder.com/projects/esp32-starter-kit/en/latest/scratch/play_with_scratch.html

You can clone the Git repository (plenty of tutorials out there, but I'll give one eventually) or just copy the code from your browser to the IDE.

There are TONS of great child friendly tutorials on Arduino and ESP32 to get them started, even code examples built into the Arduino IDE. Start with blinking (or even fading in and out) the LED on the board!

It's totally expandable! Get them into DC electronics! Seeedstudio, Adafruit, and Arduino are all great resources for projects.
https://www.seeedstudio.com/blog/2021/02/02/fun-esp32-projects-you-need-to-try/


I personally am exploring the ESP32 platform to help me automate tasks within my home, like turning lights on and off, enviromental sensors, etc.

I have no way to gauge if this is a decent hit or not based on who comes at the door. You and your young ones are more than welcome to create a Github account (within their account guidelines) and post comments, make requests, and provide code optimizations, or even fork the project and make it your own!
WELCOME TO THE WORLD OF OPEN SOURCE :DC

Happy hacking! :)