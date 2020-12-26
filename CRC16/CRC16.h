#ifndef CRC16_h
#define CRC16_h

#include "Arduino.h"

class CRC16
{
  public:
    CRC16();
    uint16_t crc16_Calc(uint16_t i_seed, uint8_t *buffer, uint16_t len);  
};

#endif