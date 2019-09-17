#pragma once
#include "features.h"
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

#ifndef _UTILITIES_
#define _UTILITIES_

class utilities {
private:

public:
	void main_menu();
	void header();
	void clrscr();
	void clear_buffer();
	double is_valid_double();
	double larger_than_zero();
};

#endif 