#ifndef __SERIAL_H_
#define __SERIAL_H_
#include "Arduino.h"
#include "Stream.h"

class HardwareSerial : public Stream {
public:	
	virtual void begin(uint32_t /*inBaudrate*/) {}
    size_t write (uint8_t /*inValue*/) override {return 1u;}
};

extern HardwareSerial Serial; 
extern HardwareSerial Serial1; 

#endif// __SERIAL_H_
