#include <iostream>
using namespace std;
double bill;
// percent that they will be tipping
const double five = .15,
        eight= .18,
                two = .20;
//selection for switch case
        const int five_choice = 1,
                eight_choice = 2,
                        two_choice = 3;
        int choice;
double total;
        double amount;

int main() {
    cout<< "this program will calculate how much you should tip your server! \n";
    cout<< "please tell me how much your bill is \n";
    cin>> bill;
       cout<< "what percent do you want to tip? \n";
    cout<< "please select one of the three choices below for the percent you want to tip! \n";
    cout<< "please type the number one (1) if you want to tip 15% \n"
           << "please type the number two (2) if you want to tip 18% \n"
              << "please type the number three (3) if you want to tip 20% \n";
    cin>> choice;
       switch (choice)
       {
           case five_choice:
               amount= bill * five;
                       total= amount + bill;
                               cout<< "The total of your bill including tip will be $"<< total<< endl;
               break;
           case eight_choice:
            amount= bill * eight;
             total= amount + bill;
           cout<< "the total of your bill including tip will be $"<< total<< endl;
           break;
           case two_choice:
               amount= bill * two;
                       total= amount + bill;
                       cout<< "the total of your bill including tip will be $"<< total<< endl;
                       break;
           default:
               cout<< "the choice you selected was invalid. Please select a number 1-3 only \n";

       }
    return 0;
}