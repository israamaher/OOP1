

#include <iostream>
#include "subject.h"
using namespace std;


int getOption()
{
    
    cout << "please Enter 1 to add Subject" << endl;
         
    cout << "please Enter 2 to change Subject" << endl;

    cout << "please Enter 3 to print " << endl;

    cout << "please Enter 4 to close programm" << endl;
    int option;
    cin >> option;
    return option;
}
int main()
{
    subject sub;
    subject subjectArr[100];
    while (true)
    {
    int option = getOption();

        switch (option)
        {
        case 1:
           sub.Addsubject(); 
            break;
        case 2 :
            break;
        case 3:
            break;
        case 4:
            return;

        default:
            break;
        }

    }

      
}


