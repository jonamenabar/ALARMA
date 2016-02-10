
#include <SoftwareSerial.h>
SoftwareSerial WIFI_1(53, 52); // RX | TX

void setup()
  {  Serial.begin(19200);
     WIFI_1.begin(19200);
  }

void loop()
  {  String B= "." ;
     if (WIFI_1.available())
         { char c = WIFI_1.read() ;
           Serial.print(c);
         }
     if (Serial.available())
         {  char c = Serial.read();
            WIFI_1.print(c);
         }
   }
