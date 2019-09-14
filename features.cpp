#include "features.h"

void features::new_acc(){
	// File pointer 
	fstream fin, fout;

	// Open an existing file 
	fin.open("Account_Details.csv", ios::in);

	// Open an existing file for updating records
	fout.open("Account_Details.csv", ios::out);

	//attributes for CSV
	string name, DOB, street_name, lot, postcode, region, state,
		country, account_type;
	double citizen_number, phone_number, amount_deposited;

	cout << "Enter Full Name of customer" << endl;
	cin >> name;
	set_name(name);

	cout << "Enter Date of Birth in a DD/MM/YYYY Format" << endl;
	cin >> DOB;
	set_DOB(DOB);

	cout << "Enter Citizen Number" << endl;
	cin >> citizen_number;
	set_citizen_number(citizen_number);

	cout << "Enter Street Name" << endl;
	cin >> street_name;
	set_street_name(street_name);

	cout << "Enter Property Lot" << endl;
	cin >> lot;
	set_lot(lot);

	cout << "Enter Postcode" << endl;
	cin >> postcode;
	set_postcode(postcode);

	cout << "Enter Region" << endl;
	cin >> region;
	set_region(region);

	cout << "Enter State" << endl;
	cin >> state;
	set_state(state);

	cout << "Enter Country" << endl;
	cin >> country;
	set_country(country);

	cout << "Enter Phone Number" << endl;
	cin >> phone_number;
	set_phone_number(phone_number);

	cout << "Enter Amount Deposited" << endl;
	cin >> amount_deposited;
	set_amount_deposited(amount_deposited);

	cout << "Enter Account Type" << endl;
	cin >> account_type;
	set_account_type(account_type);
}

void features::view_full_list(){
	// File pointer 
	fstream fin;

	// Open an existing file 
	fin.open("Account_Details.csv", ios::in);
}

void features::view_acc_details(){
	// File pointer 
	fstream fin;

	// Open an existing file 
	fin.open("Account_Details.csv", ios::in);
}

void features::edit_acc_details(){
	// File pointer 
	fstream fin;

	// Open an existing file 
	fin.open("Account_Details.csv", ios::in);
}

void features::transact(){
	// File pointer 
	fstream fin;

	// Open an existing file 
	fin.open("Account_Details.csv", ios::in);
}

void features::delete_acc(){
	// File pointer 
	fstream fin;

	// Open an existing file 
	fin.open("Account_Details.csv", ios::in);
}
