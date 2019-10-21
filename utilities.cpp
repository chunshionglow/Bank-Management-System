#include "utilities.h"

features feat;

void utilities::main_menu(){
	clrscr();
	header();
	cout << "Selection" << endl << "1. New Account" << endl;
	cout << "2. View Full List of Accounts" << endl;
	cout << "3. View Account Details" << endl;
	cout << "4. Edit Account Details" << endl;
	cout << "5. Transactions " << endl << "5. Delete Account" << endl;
	cout << "6. EXIT " << endl << "Enter Selection (1-6)" << endl;
	footer();
	int selection;
	cin >> selection;
	
	clear_buffer();

	switch (selection) {
	case 1:
		feat.new_acc();
		break;
	case 2:
		feat.view_full_list();
		break;
	case 3:
		feat.view_acc_details();
		break;
	case 4:
		feat.edit_acc_details();
		break;
	case 5:
		feat.transact();
		break;
	case 6:
		cout << "Thank You For Using Bank Management System" << endl;
		cout << "Press any key to exit" << endl;
		exit(0);
		break;
	default:
		cout << "Invalid Entry, Please Try Again" << endl;
		break;
	}

}

void utilities::header(){
	cout << "Bank Management System" << endl;
	cout << "-----------------------" << endl;
}

void utilities::footer(){
	cout << "-----------------------" << endl;
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
