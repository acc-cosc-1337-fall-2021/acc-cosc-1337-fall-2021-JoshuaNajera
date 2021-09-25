#include <iostream>
#include "data_types.h"
using namespace std;
  
int main()
{
//a)
   int num;

   //b)
cout << "Enter a number!\n" ;
cin >> num;
  
//c)
int result = multiply_numbers(num);
cout<< "Result ="<<result <<endl;
  
//d)
int num1 = 4;
  
//e)
   result = multiply_numbers(num1);
   cout << "Result =" + result<<endl;
  
return 0;
}