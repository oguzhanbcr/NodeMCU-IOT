#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "********"//TEMPLE ID NUMARANIZ
#define BLYNK_DEVICE_NAME "********"//TEMPLATE ISMINIZ
#define BLYNK_AUTH_TOKEN "*********"//TOKEN GİRİNİZ
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "*****";//Token giriniz.
char ssid[] = "*****";//Wifi ismi giriniz.
char pass[] = "*****";//Wifi Şifresini giriniz.


const int redLED =0; //D3
const int greenLED =4; //D2
const int blueLED =5; //D1

BLYNK_WRITE(V0){
  int red = param.asInt();
  analogWrite(redLED, red);
}

BLYNK_WRITE(V1){
  int green = param.asInt();
  analogWrite(greenLED, green);
}

BLYNK_WRITE(V2){
  int blue = param.asInt();
  analogWrite(blueLED, blue);
}

void setup(){
  pinMode (D1, OUTPUT);
  pinMode (D2, OUTPUT);
  pinMode (D3, OUTPUT);
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
