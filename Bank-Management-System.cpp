#include "utilities.h"

using namespace std;

//features feat;
utilities util;

int main()
{
	try {
		util.header();
		util.main_menu();
		util.footer();
	}
	catch (int e) {
		cout << "An Exception has Occured" << endl
			<< "Please Try Again" << endl;
	}
	system("pause");
	return 0;
}