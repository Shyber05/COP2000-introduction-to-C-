// Brandon Scheiber
// COP2000 
// Techi Gadgets Account program
// This program reads a file and then it asks for the
// users and password displaying them at the end
 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


void showAll(string theAccounts[5][7]);
void sortInput(string theAccounts[5][7]);
bool validateUser(string theAccounts[5][7], string username, string password, int&saveRow);
bool readFile(string theAccounts[5][7]);

int main(){

    string accountData[5][7] = {" "};






    return 0;
}


// stores all the account data and prints all the account data of passed array
void showAll(string theAccounts[5][7]){




}

// passed the array which stores all the account data and sorts the account data by last name.
void sortInput(string theAccounts[5][7]){





}

// function checks to see if the user name entered and the 
// password matches, then returns true or false. 
// It also saves the row where it found the user information in saveRow
bool validateUser(string theAccounts[5][7], string username, string password, int&saveRow){

    bool passed = false;
    int count = 0;

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    

    return passed;
}

//  This function will open the input file and read in the data from the input file. 
bool readFile(string theAccounts[5][7]){
    
    



}


