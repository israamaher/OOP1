
#include <iostream>
#include "Rectangel.h"
#include "Company.h"

using namespace std;


int getoption()
{
        while (true)
        {
            cout << "cheese 1 to add department"<<endl;
            cout << "cheese 2 to add employee"<<endl;
            cout << "cheese 3 to change department of employee"<<endl;
            cout << "cheese 4 to print"<<endl;
            cout << "cheese 5 to close programm"<<endl;
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
           company.addEmpployee();
           break;
       case 3:
           company.change();
           break;
       case 4:
           company.print();
           break;
       case 5:
           return 0;
       default:
           cout << "please choose correct number";
           break;
       }
   }
    
}


