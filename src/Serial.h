#ifndef __SERIAL_H_
#define __SERIAL_H_
#include "Arduino.h"
#include "Stream.h"

class HardwareSerial : public Stream {
public:	
	void begin(uint32_t) {}
    void write (uint8_t inValue) override {
    }
};

struct Serial_ : public HardwareSerial {};

extern Serial_ Serial; 
extern HardwareSerial Serial1; 

#endif// __SERIAL_H_
