/* Brandon 
COP2000 
Techi Gadgets Account program
This program reads a file and then it asks for the
users and password displaying them at the end
*/
 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


void showAll(string theAccounts[5][7]);
void sortInput(string theAccounts[5][7]);
bool validateUser(string theAccounts[5][7], string, string, int* );
bool readFile(string theAccounts[5][7]);

int main()
{

    bool userGood, fileGood;
    string accountData[5][7] = {" "},  password, username;
    int saveRow;

// Call the readFile function and capture the returned value.

    fileGood = readFile(accountData);

// Test if file was successfully read if so continue with program else exit with error message.
    if(fileGood == true)
    {
        cout<<"The file was read successfully...\n";

    }
    else
    {
        cout<<" The file could not be read...Exiting program\n";
        return 0;
    }


    sortInput(accountData); //This function sorts array

    // do while
    do
    {
     
        username = "";
        password = "";



        cout << "Please enter the following information, or press 0 to Exit anytime..."<< endl;
        cout << "Please enter your User Name :";
        cin >> username;

    if(username == "0")
    {
        cout << "\nThank you, have a nice day.\n\n";
        return 0;
    }

    cout << "Please Enter your User Password";
    cin >> password;

    if (password == "0")
    {
        cout << "\nThank you, have a nice day.\n\n";
        return 0;
    }

    userGood = validateUser(accountData, username, password, &saveRow);









    }while (password != "0" || username != "0");
    
    return 0;
}


// stores all the account data and prints all the account data of passed array
void showAll(string theAccounts[5][7])
{
    
        
    int row = 5;
    int count;
    ofstream outputFile;
    outputFile.open("sortedBackup.txt");

    cout << endl;

    for(count = 0; count < row; count++)
    {
    cout << setw(20)  << right << theAccounts[count][0]; 
    cout << setw(8)   << right << theAccounts[count][1];
    cout << setw(8)   << right << theAccounts[count][2];
    cout << setw(10)  << right << theAccounts[count][3];
    cout << setw(6)   << right << theAccounts[count][4];
    cout << setw(4)   << right << theAccounts[count][5];
    cout << setw(15)  << right << theAccounts[count][6];
    cout << endl;

    outputFile << setw(20) <<right << theAccounts[count][0]; 
    outputFile << setw(8)  <<right << theAccounts[count][1];
    outputFile << setw(8)  <<right << theAccounts[count][2]; 
    outputFile << setw(10) <<right << theAccounts[count][3]; 
    outputFile << setw(6)  <<right << theAccounts[count][4]; 
    outputFile << setw(4)  <<right << theAccounts[count][5]; 
    outputFile << setw(15) <<right << theAccounts[count][6];
    outputFile << endl; 
    }

    cout << "Backup file created ....\n" << endl;

    outputFile.close();
}



// passed the array which stores all the account data and sorts the account data by last name.
// It will use the bubble sort algorithm
void sortInput(string theAccounts[5][7])
{

    bool sorted = false;
    string temp;

        while(sorted == false)
        {
            sorted = true;
            for (int count = 0; count < 4; ++count)
            {
                if(theAccounts[count][2] > theAccounts[count +1][2])
                {
                    sorted = false;
                    for(int last = 0; last < 7; ++last)
                    {
                        temp = theAccounts[count][last];
                        theAccounts[count][last] = theAccounts[count + 1][last];
                        theAccounts[count + 1][last] = temp;
                    }
                }

            }
        }
}

// function checks to see if the user name entered and the 
// password matches, then returns true or false. 
// It also saves the row where it found the user information in saveRow
bool validateUser(string theAccounts[5][7], string username, string password, int *saveRow){

    bool passed = false;
    int count = 0, row = 0, user = 0, pass = 0;

    for (row = 0; row <= 4; row++)
    {
         	if ((username == theAccounts[row][user]) && (password == theAccounts[row][pass]))
		{
			passed = true;
			*saveRow = row;
		}
    }
    

    return passed;
}

//  This function will open the input file and read in the data from the input file. 
bool readFile(string theAccounts[5][7])
{
    int row = 5, column =7;
    bool fileRead = false;    
    ifstream inputFile;
    inputFile.open("AccountData.txt");


    // This will validate if the file was opened
    if(inputFile.fail())
    {
        cout<< "Error opening the file.\n";
    }
    else
    {
        fileRead = true;
    }
    if(inputFile)
    {
        
        for (int count = 0; count < row; count++)
        for (int count_2 = 0; count_2 < column; count_2++)
            inputFile >> theAccounts[count][count_2];
        
        
    

    }    

    inputFile.close();
    return fileRead;
}


