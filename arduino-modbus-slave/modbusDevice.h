#ifndef _MODBUSDEVICE
#define _MODBUSDEVICE

#include <modbusRegBank.h>
#include <modbus.h>
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class modbusDevice:public modbusRegBank
{
	public:
		modbusDevice(void);
		void setId(byte id);
		byte getId(void);
		
	private:
		byte _id;
};
#endif
