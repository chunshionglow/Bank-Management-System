#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

#ifndef _FEATURES_
#define _FEATURES_

class features {
private:
	string name;
	string DOB;
	double citizen_number;
	string street_name;
	string lot;
	string postcode;
	string region;
	string state;
	string country;
	double phone_number;
	double amount_deposited;
	string account_type;

public:
	void new_acc();
	void view_full_list();
	void view_acc_details();
	void edit_acc_details();
	void transact();
	void delete_acc();
	
};

#endif 
