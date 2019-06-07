/*
Brandon Scheiber COP2000
HW 4: Race Results Program
Purpose:
This Program will allow you to enter three racing times and names to determine
who is the winner as well as the average racing time. It will also determine if there
was a tie.
*/
#include <iostream>
#include <string>

using namespace std;

//Functions that will be used in this program
void welcome();
void getRaceTimes(string &, double &);
void findWinner(string, string, string, double, double, double);
double raceAverage(double, double, double);

int main(){


string racer1, racer2, racer3, racerName;

double racer1_time, racer2_time, racer3_time, racerTime, raceAverage;

    welcome();

    getRaceTimes(racer1, racer1_time);
    getRaceTimes(racer2, racer2_time);
    getRaceTimes(racer3, racer3_time);

    findWinner(racer1, racer2, racer3, racer1_time, racer2_time, racer3_time);



  return 0;
}

//This will be a welcoming script for the user
void welcome()
{
    cout << "*********************************************************************\n"
         << "   Welcome To Race Results Program\n"
         << "   You were Asked to Enter the Three Racers Names\n"
         << "   and Their Associated Race Time.\n\n"
         << "   Please enter a real number for Race Time <The Race Time Must be> 0>\n"
         << "   Program Developed by : Brandon Scheiber\n"
         << "**********************************************************************\n";
}


// This function will ask the user for racer's name and their time
void getRaceTimes(string &racerName, double &racerTime)
{

    cout << "Please enter the racer's first name: >\n";
    cin >> racerName;

    cout << "Please enter their race time: >\n";
    cin >> racerTime;

    while(racerTime <= 0)
    {
    cout << "Invalid Time entered....Please enter a valid race time >0\n";
        cin >> racerTime;

    }

}

//This function will determine the races winner and their
//winning time
void findWinner(string racer1, string racer2, string racer3, double racer1_time, double racer2_time, double racer3_time)
{

    if(racer1_time < racer2_time && racer1_time < racer3_time)                  //Racer 1 is the winner
    {
        cout << "\nCongragulations!!! The winner is " << racer1 << "!!!!\n";
        cout << "*** The winning time is: *** " << racer1_time << " ***\n\n";

    }
    else if(racer2_time < racer1_time && racer2_time < racer3_time)             //Racer 2 is the winner
    {
        cout << "\nCongragulations!!! The winner is " << racer2 << "!!!!\n";
        cout << "*** The winning time is: *** " << racer2_time << " ***\n\n";

    }
    else if(racer3_time < racer2_time && racer3_time < racer1_time)             //Racer 3 is the winner
    {
        cout << "\nCongragulations!!! The winner is " << racer3 << "!!!!\n";
        cout << "*** The winning time is: *** " << racer3_time << " ***\n\n";

    }
    else if(racer1_time < racer3_time && racer1_time == racer2_time)            //Racer 1 and 2 are tied
    {
        cout << "\nWe have a tie!! Between ";
        cout << racer1 << " and " << racer2 << "\n";
        cout << "*** The winning time is *** " << racer1_time << " ***\n\n";


    }
    else if(racer1_time < racer2_time &&  racer1_time == racer3_time)           //Racer 1 and 3 are tied
    {
        cout << "\nWe have a tie!! Between ";
        cout << racer1 << " and " << racer3 << "\n";
        cout << "*** The winning time is *** " << racer1_time << " ***\n\n";

    }
    else if(racer2_time < racer1_time &&  racer2_time == racer3_time)            //Racer 2 and 3 are tied
    {
        cout << "\nWe have a tie!! Between ";
        cout << racer2 << " and " << racer3 << "\n";
        cout << "*** The winning time is *** " << racer2_time << " ***\n\n";

    }
    else if(racer1_time == racer2_time && racer1_time == racer3_time)           //Three way tie
    {
        cout << "\nWe have a 3 way Tie!!!!\n";
        cout << "There is no winner for this race....\n\n";

    }
    raceAverage(racer1_time, racer2_time, racer3_time);

}

//This function will calculate the average and display it.
double raceAverage(double racer1_time , double racer2_time, double racer3_time)
{


double raceAverage = (racer1_time + racer2_time + racer3_time) / 3;

    cout << "Overall race time average is: " << raceAverage << "\n\n";

return raceAverage;
}