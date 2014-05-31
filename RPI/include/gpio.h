/*
 * Author: KK <thumbd03803@gmail.com>
 *
 * File: gpio.h
 */

#ifndef GPIO_H
#define GPIO_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

class GPIO
{
	public:
		GPIO(string pinNumber);
		~GPIO();

		int ExportPin();
		int UnexportPin();
		int SetPinDirection(string direction);
		int SetPinValue(string value);
		int GetPinValue(string& value);

	private:
		string pinNumber;
};

#endif
