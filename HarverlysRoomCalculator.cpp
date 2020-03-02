/*
Brandon COP2000
Haverly's Room Calculator
This Program will calculate the area of a
room depending on the shape of the room
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	const int SQUARE_ROOM = 1;						// This will be one of the Menu choices       
	const int RECTANGULAR_ROOM = 2;					// This will be one of the Menu choices
	const int ROUND_ROOM = 3;						// This will be one of the Menu choices
	const int QUIT_CHOICE = 4;						// This will be one of the Menu choices
	const double PI = 3.14;							// Used to find area of round room

	double length_of_room;
	double width_of_room;
	double radius_of_room;
	double area;
	double users_choice = 0;

	
	
	while (users_choice != 4) {
		cout << ("Haverly's Room Calculator\n")			// Display menu and get room type
			<< ("************************* \n")
			<< ("1. Square Room \n")
			<< ("2. Rectangular Room \n")
			<< ("3. Round Room \n")
			<< ("4. Quit \n")
			<< ("\nPlease enter a menu item <1-4> > ");
		cin >> users_choice;





		if (users_choice == SQUARE_ROOM) {				// If Square Room Selected
			cout << "Square Room\n"
				 << "Please enter the Length ";
			cin >> length_of_room;

			// Input Validation
			if (length_of_room <= 0) {
				cout << "\nError! That is not a valid entry.\n"
					 << "Please restart program\n" << endl;
			}
			else 
				cout << "Please enter the Width ";
			    cin >> width_of_room;

			// Input Validation
			if (width_of_room <= 0) {
				cout << "\nError! That is not a valid entry.\n"
					 << "Please restart program\n" << endl;
			}
			else 
				area = (length_of_room * width_of_room);
			    cout << "Area of the room = " 
				<< setprecision(2) << fixed
				<< area << " Sq/Ft\n\n";
		}
		else if (users_choice == RECTANGULAR_ROOM) {		// If Rectangular room Selected
			cout << "Rectangular Room\n"
				 << "Please enter the Length ";
			cin >> length_of_room;

			// Input Validation
			if (length_of_room <= 0) {
				cout << "\nError! That is not a valid entry.\n"
					 << "Please restart program\n" << endl;
			}
			else
				cout << "Please enter the Width ";
			    cin >> width_of_room;

			// Input Validation
			if (width_of_room <= 0) {
				cout << "\nError! That is not a valid entry.\n"
					 << "Please restart program\n" << endl;
			}
			else 
				area = (length_of_room * width_of_room);
			cout << "Area of the room = "
				<< setprecision(2) << fixed
				<< area << " Sq/Ft\n\n";
		}
		else if (users_choice == ROUND_ROOM) {			// If Round Room Selected
			cout << "Round Room\n"
				 << "Please enter the Radius ";
			cin >> radius_of_room;

			// Input Validation
			if (radius_of_room <= 0) {
				cout << "\nError! That is not a valid entry.\n"
					 << "Please restart Program\n" << endl;
			}
			else 
				area = (PI * radius_of_room);
			    cout << "Area of the room = " 
				<< setprecision(2) << fixed
				<< area << " Sq/Ft\n\n";
		}
		else if (users_choice == QUIT_CHOICE) {			// If they wish to exit program
			cout << "\nThank you for using Haverly's"
				 << " room Calculator.\n"
				 << "Have a nice day\n";
		}

		else if(users_choice >= 5 || users_choice <= 0) {
			cout << "\nInvalid menu number entered......Try again.\n" << endl;
		}
		
	}
	
	system("pause");



	return 0;
}
