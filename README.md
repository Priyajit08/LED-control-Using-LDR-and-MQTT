# LED-control-Using-LDR-and-MQTT
switch ON and OFF an LED depending on LDR data (Brightness) using MQTT ON Adafruit IO

Go to https://io.adafruit.com/ and create an account or sign in Go to View AIO Keys and use your Username and Keys to edit Config.h file. In adafruit IO create new feed (under actions). Your feed name must match with the feed name in line 27 of the main code (AdafruitIO_Feed*digital = io.feed("digital")) . Create a new Dashboard in Adafruit IO. Open the dashboard and add new block by clicking on the "+" sign, choose an appropriate block according to your use. Link the block with your Feed.

Connect The LDR with Pin A0. and an LED to Output Pin 5.

The digital feed and the analog data feed needs to be linked using a Trigger in Adafruit IO.
(eg- If analog value < 50 --> Digital "1")

Now the LED can be controlled using the brightness data from LDR.
