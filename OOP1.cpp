
#include <iostream>
#include "Rectangel.h"
#include "Company.h"

using namespace std;


int getoption()
{
        while (true)
        {
            cout << "cheese 1 to add department";
            cout << "cheese 2 to add employee";
            cout << "cheese 3 to change department of employee";
            cout << "cheese 4 to print";
            cout << "cheese 5 to close programm";
            int option;
            cin >> option;
            return option;
        }
}

int main()
{
   Company company;
   while (true)
   {
       int option = getoption();
       switch (option)
       {
       case 1:
           company.addDepartment();
           break;
       case 2:
           break;
       case 3:
           break;
       case 4:
           break;
       case 5:
           return;
       default:
           cout << "please choose correct number";
           break;
       }
   }
    
}


