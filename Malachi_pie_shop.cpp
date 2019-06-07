/* Brandon Scheiber
COP2000- HW #1
Malachi's Pie shop Program
This program's purpose is to ouput the recipe for a given number of pies.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double FLOUR_RECIPE = 15;					//This is the amount of flour for 6 pies
	const double SUGAR_RECIPE = 8;					//This is the amount of sugar for 6 pies
	const double SALT_RECIPE = 3;					//This is the amount of salt for 6 pies
	const double BUTTER_RECIPE = 5.25;				//This is the amount of butter for 6 pies
	const double EGGS_RECIPE = 6;					//This is the amount of eggs for 6 pies
	const double PIE_CRUSTS = 6;					//This is the amount of pies for this recipe

	double flour, sugar, salt, butter, eggs;		//This will be the amount per one pie crust
	double totalFlour, totalSugar, totalSalt,      //Total value of ingredient for given # of pies    
		   totalButter, totalEggs;
	double pies;									//This is the input of the pies wished to be made


	flour = FLOUR_RECIPE / PIE_CRUSTS;			//These are the calculated values for one pie crust
	sugar = SUGAR_RECIPE / PIE_CRUSTS;
	salt = SALT_RECIPE / PIE_CRUSTS;
	butter = BUTTER_RECIPE / PIE_CRUSTS;
	eggs = EGGS_RECIPE / PIE_CRUSTS;

	//The User is greeted followed by a prompt asking for number of pies

	cout << "Greetings,\n";
	cout << "How many Pies do you wish to make today?" << endl;
	cin >> pies;

	//The program will now caculate the recipe for one pie

	totalFlour = flour * pies;
	totalSugar = sugar * pies;
	totalSalt = salt * pies;
	totalButter = butter * pies;
	totalEggs = eggs * pies;

	//The program will now output the recipe for the # of pies given

    cout << setprecision(2) << fixed << endl;
	cout << "Malachi's Pie shop - Pie crust Recipe" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "This is the recipe for " << pies << " pies \n" << endl;
	cout << " Flour " << totalFlour << " cups\n";
	cout << " Sugar " << totalSugar << " tablespoons\n";
	cout << " Salt " << totalSalt << " tablespoons\n";
	cout << " Butter " << totalButter << " cups\n";
	cout << " Eggs " << totalEggs << " large eggs\n";
	cout << endl;

	system("pause");									

	return 0;
}
