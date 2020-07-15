

#include <iostream>
#include "subject.h"
#include "teacher.h"
#include "TAco.h"
#include"school.h"
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
    school school;
    while (true)
    {
    int option = getOption();

        switch (option)
        {
        case 1:
           school.Addsubject(); 
            break;
        case 2 :
            school.change();
            break;
        case 3:
            school.print();
            break;
        case 4:
            return 0;

        default:
            break;
        }

    }

      
}


