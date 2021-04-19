
//Include Circus of Things library
#include <CircusESP32Lib.h>  // LIbrary Circus of Things.

 

char ssid[] = "M";                                           // Router username.
char password[] = "e";                                       // Router password.
char server[] = "www.circusofthings.com";                    // The server.
char key_cpu_temp_tresh[] = "5";                             //The Signal Key

char token[] = "ey"; // Your user-identity (token).

CircusESP32Lib circusESP32(server,ssid,password);// The library fixes the things for you



void setup() { 
    circusESP32.begin();  // Initialise the communication to CoT
}
 
void loop() {
  // Write ESP32 "CPU temp to CoT
  
  circusESP32.writeEX(key_cpu_temp_tresh, 100000000, 300.891011, 300.891011, 300.891011, token); // 1000000000 is the Value of the signal, 10 is Latitude, 4 is Longitude and 100 Altitude  
  //circusESP32.writePOS(key_cpu_temp_tresh, 102.123456, 300.891011, 14.111111, token);          // Ignores Value and just sends position
  //circusESP32.write(key_cpu_temp_tresh, 2,token);                                              //The old write function
  delay(1000);                                                                                   //Send every second        
 
}
