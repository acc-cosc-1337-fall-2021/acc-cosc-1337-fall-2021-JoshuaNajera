#include <iostream>
#include "dna.h"
#include "dna.ccp"
using namespace std;
int main() 
{   
do 
{
    cout << "\nHello, welcome to my program\n";
    cout << "\nMenu\n" << endl;
    cout << "1:Factorial" << 1 << endl;
    cout << "2:Greatest Common Divisor" << 2 << endl;
    cout << "3:Exit" << 3 << endl;
}
    
    {
    cin >> choice;
         if (choice == '1' || choice == '1')
        cout << "Enter a number from 1 to 20: ";
       int num;
       cin >> num;
      
       while(!(num >=1 && num <= 20)) { //Using a while loop validate input for minimum number 1 and a max value of 20.
          
           cout << "Invalid Number" << endl;
          
           cout << "Enter a number from 1 to 20: ";
           cin >> num; //until user provides a number from 1 to 20
       }
      //display the number's factorial. 
       cout << "Factorial of " << num << " is " << factorial(num) << endl; // call the factorial function
      
       cout << "\nDo you want to continue (1/0): "; // Finally, the program continues as long as user wants to.
        if (choice == '2' || choice == '2')
        cout << "Enter Two Numbers"



    }
       
  
       int choice;
       cin >> choice;
    if(choice==0)    
           break;
       cout << endl;
   }while(true); 
	return 0;
}