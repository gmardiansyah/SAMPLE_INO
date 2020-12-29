#include <CRC16.h>

CRC16 crc16;


void setup() 
{
  // put your setup code here, to run once:
   Serial.begin(9600); 
}


void loop() 
{
  uint16_t data = crc16.crc16_Calc(0xFFFF, data, 3);
  Serial.print(data);
}
