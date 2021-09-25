//write include statements


//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
#include <iostream> 
using namespace std;
#include "hwexpressions.h"
int main()
{
//Declaring variables
double mealAmount,tiprate,total=0;
  
//Getting the input entered by the user
cout<<"Enter Meal Amount :$";
cin>>mealAmount;
  
cout<<"Enter Tiprate :%";
cin>>tiprate;
  
//Calculating tax amount
double taxAmount=get_sales_tax_amount(mealAmount);
  
//Calculating tip amount
double tipAmount=get_tip_amount(mealAmount,tiprate);
  
total=mealAmount+taxAmount+tipAmount;
  
// Displaying the output
cout<<"Meal Amount :$"<<mealAmount<<endl;
cout<<"Tax Amount :$"<<taxAmount<<endl;
cout<<"Tip Amount :$"<<tipAmount<<endl;
cout<<"Total Amount :$"<<total<<endl;
  
return 0;
}