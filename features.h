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
	
	//getter
	string get_name() {
		return this->name;
	}

	string get_DOB() {
		return this->DOB;
	}

	double get_citizen_number() {
		return this->citizen_number;
	}
	
	string get_street_name() {
		return this->street_name;
	}

	string get_lot() {
		return this->lot;
	}

	string get_postcode() {
		return this->postcode;
	}

	string get_region() {
		return this->region;
	}

	string get_state() {
		return this->state;
	}

	string get_country() {
		return this->country;
	}

	double get_phone_number() {
		return this->phone_number;
	}

	double get_amount_deposited() {
		return this->amount_deposited;
	}

	string get_account_type() {
		return this->account_type;
	}

	//setter
	void set_name(string n) {
		this->name = n;
	}

	void set_DOB(string dob) {
		this->DOB = dob;
	}

	void set_citizen_number(double cn) {
		this->citizen_number = cn;
	}

	void set_street_name(string sn) {
		this->street_name = sn;
	}

	void set_lot(string l) {
		this->lot = l;
	}

	void set_postcode(string p) {
		this->postcode = p;
	}

	void set_region(string r) {
		this->region = r;
	}

	void set_state(string s) {
		this->state = s;
	}

	void set_country(string c) {
		this->country = c;
	}

	void set_phone_number(double pn) {
		this->phone_number = pn;
	}

	void set_amount_deposited(double ad) {
		this->amount_deposited = ad;
	}

	void set_account_type(string at) {
		this->account_type = at;
	}
};

#endif 
