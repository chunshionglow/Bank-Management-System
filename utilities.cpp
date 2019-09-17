#include "utilities.h"

void utilities::main_menu(){
	clrscr();
	cout << "Bank Management System" << endl;
	cout << "Selection" << endl << "1. New Account" << endl;
	cout << "2. View Full List of Accounts" << endl;
	cout << "3. View Account Details" << endl;
	cout << "4. Edit Account Details" << endl;
	cout << "5. Transactions " << endl << "5. Delete Account" << endl;
	int selection;
	cin >> selection;
	
	clear_buffer();

	switch (selection) {
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	default:
		cout << "Invalid Entry, Please Try Again" << endl;
		break;
	}

}

void utilities::header(){

}

void utilities::clrscr() {
	system("cls");
}

void utilities::clear_buffer(){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

double utilities::is_valid_double(){

	return 0.0;
}

double utilities::larger_than_zero(){

	return 0.0;
}
