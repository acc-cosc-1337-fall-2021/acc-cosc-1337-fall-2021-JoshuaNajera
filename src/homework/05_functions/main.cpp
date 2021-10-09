#include"func.h"
#include<iostream>
//Main Program
int main()
{
   string dna;
   int choice;
   char again;
   cout << "1 for Get GC Content" << endl;
   cout << "2 for Get DNA Complement" << endl;
// Menu for DNA
   do
   {
       cout << "Enter you choice: ";
       cin >> choice;
       cout << "Enter DNA: ";
       cin >> dna;
       switch (choice)
       {
       case 1:
           cout << "GC Content: "<<get_gc_content(dna)<<endl;
           break;
       case 2:
           cout << "DNA Complement: " << get_dna_complement(dna) << endl;
           break;
       default:
           cout << "Invalid choice" << endl;
           break;
       }
       cout << "\nDo you want to Continue (y/Y or n/N): ";
       cin >> again;
   } while (again=='y' || again=='Y');
   system("pause");
   return 1;
}