#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include "Font_Data.h"
#include <SPI.h>
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 8
#define MAX_ZONES 2
#define ZONE_SIZE (MAX_DEVICES/MAX_ZONES)
#define CLK_PIN   2
#define DATA_PIN  5
#define CS_PIN    3
MD_Parola P = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);
int counter = 0;
int espEnt = 0;
void setup(void){
  Serial.begin(115200); //MUDAR PARA 9600
  pinMode(6, INPUT);
  P.begin(MAX_ZONES);
  P.setInvert(false);
  P.setIntensity(0);
  P.setZone(0, 0, ZONE_SIZE-1);
  P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);}
void loop(void){
    if (digitalRead(6) == 1){
      if(espEnt==1){
    counter ++;
 espEnt=0;
    }
} else{
      espEnt=1;
    } switch(counter) {
          case 0:
          Serial.println();
          P.setZone(0, 0, ZONE_SIZE-1);
          P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
          P.setFont(0, BigFontBottom);
          P.setFont(1, BigFontUp);
          P.displayZoneText(0, "000", PA_CENTER, 30, 0, PA_NO_EFFECT);
          P.displayZoneText(1, "000", PA_CENTER, 30, 0, PA_NO_EFFECT);
          P.synchZoneStart();
          break;
          case 1:
          Serial.println();
          P.setZone(0, 0, ZONE_SIZE-1);
          P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
          P.setFont(0, BigFontBottom);
          P.setFont(1, BigFontUp);
          P.displayZoneText(0, "001", PA_CENTER, 30, 0, PA_NO_EFFECT);
          P.displayZoneText(1, "001", PA_CENTER, 30, 0, PA_NO_EFFECT);
          P.synchZoneStart();
          break;
          case 2:
          Serial.println();
          P.setZone(0, 0, ZONE_SIZE-1);
          P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
          P.setFont(0, BigFontBottom);
          P.setFont(1, BigFontUp);
          P.displayZoneText(0, "002", PA_CENTER, 30, 0, PA_NO_EFFECT);
          P.displayZoneText(1, "002", PA_CENTER, 30, 0, PA_NO_EFFECT);
          P.synchZoneStart();
          break;
          case 3:
          Serial.println();
          P.setZone(0, 0, ZONE_SIZE-1);
          P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
          P.setFont(0, BigFontBottom);
          P.setFont(1, BigFontUp);
          P.displayZoneText(0, "003", PA_CENTER, 30, 0, PA_NO_EFFECT);
          P.displayZoneText(1, "003", PA_CENTER, 30, 0, PA_NO_EFFECT);
          P.synchZoneStart();
          break;
case 4:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "004", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "004", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 5:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "005", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "005", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 6:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "006", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "006", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 7:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "007", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "007", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 8:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "008", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "008", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 9:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "009", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "009", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 10:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "010", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "010", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 11:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "011", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "011", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 12:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "012", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "012", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 13:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "013", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "013", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
for (int i = 0; i < 99 ; i++)
case 14:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "014", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "014", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 15:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "015", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "015", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 16:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "016", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "016", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 17:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "017", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "017", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 18:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "018", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "018", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 19:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "019", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "019", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 20:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "020", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "020", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 21:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "021", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "021", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 22:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "022", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "022", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 23:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "023", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "023", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 24:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "024", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "024", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 25:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "025", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "025", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 26:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "026", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "026", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 27:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "027", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "027", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 28:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "028", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "028", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 29:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "029", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "029", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 30:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "030", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "030", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 31:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "031", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "031", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 32:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "032", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "032", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 33:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "033", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "033", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 34:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "034", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "034", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 35:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "035", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "035", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 36:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "036", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "036", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 37:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "037", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "037", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 38:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "038", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "038", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 39:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "039", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "039", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 40:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "040", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "040", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 41:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "041", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "041", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 42:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "042", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "042", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 43:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "043", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "043", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 44:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "044", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "044", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 45:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "045", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "045", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 46:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "046", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "046", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 47:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "047", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "047", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 48:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "048", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "048", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
   break;
case 49:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "049", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "049", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 50:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "050", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "050", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 51:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "051", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "051", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 52:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "052", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "052", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 53:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "053", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "053", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 54:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "054", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "054", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
case 55:
    Serial.println();
    P.setZone(0, 0, ZONE_SIZE-1);
    P.setZone(1, ZONE_SIZE, MAX_DEVICES-1);
    P.setFont(0, BigFontBottom);
    P.setFont(1, BigFontUp);
    P.displayZoneText(0, "055", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.displayZoneText(1, "055", PA_CENTER, 30, 0, PA_NO_EFFECT);
    P.synchZoneStart();
    break;
default:
delay(2000);
Serial.println();
P.setFont(0, NULL);
P.setFont(1, NULL);
P.displayZoneText(0, "ERROR", PA_CENTER, 30, 2000, PA_SCROLL_UP, PA_SCROLL_DOWN);
P.displayZoneText(1, ">:(", PA_CENTER, 30, 2000, PA_SCROLL_DOWN, PA_SCROLL_UP);
      }
      while (!P.getZoneStatus(0) || !P.getZoneStatus(1))
      P.displayAnimate();
   }
