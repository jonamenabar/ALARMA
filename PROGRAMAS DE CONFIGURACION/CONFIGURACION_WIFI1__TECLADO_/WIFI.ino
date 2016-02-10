void WIFI (){
  
String B= "." ;
     if (WIFI_1.available())
         { char c = WIFI_1.read() ;
           Serial.print(c);
         }
     if (Serial.available())
         {  char c = Serial.read();
            WIFI_1.print(c);
         }
   }


