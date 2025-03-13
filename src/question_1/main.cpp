#include <iostream>
#include "question1.h"

using std::cout;
using std::cin;

int main() {
    char selection;
	string str;
	/*--------------------------------------------------------------------------
	Main Menu Loop
	--------------------------------------------------------------------------*/
	do {
		cout << "-----------------------------------\n";
		cout << "Main Menu\n";
		cout << "\t1) Is Palindrome?\n";
		cout << "\t2) Exit Program\n";
		cout << "-----------------------------------\n";
		cout << "Enter Selection: ";
		cin >> selection;
		switch (selection) {
			/*------------------------------------------------------------------
			1) Is Palindrome?
			------------------------------------------------------------------*/
			case '1':
				cout << "Enter String: ";
				cin >> str;
                cout << "Is Palindrome: " 
                << (is_palindrome(str) ? "true" : "false") << "\n";
				break;
			/*------------------------------------------------------------------
			2) Exit Program
			------------------------------------------------------------------*/
			case '2':
				break;
			/*------------------------------------------------------------------
			Invalid selection
			------------------------------------------------------------------*/
			default:
				cout << "Invalid selection!\n";
		}
	} while (selection != '2');
    return 0;
}