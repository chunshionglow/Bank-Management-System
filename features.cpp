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

	cout << "Enter Date of Birth in a DD/MM/YYYY Format" << endl;
	cin >> DOB;

	cout << "Enter Street Name" << endl;
	cin >> street_name;

	cout << "Enter Property Lot" << endl;
	cin >> lot;
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
