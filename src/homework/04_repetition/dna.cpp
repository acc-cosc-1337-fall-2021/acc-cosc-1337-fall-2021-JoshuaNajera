
//find factorial

int factorial(int num) {
  
   
   int fact = 1; //intially factorial 
  
   for (int i=1; i<=num; i++) { //from 1 to num 
      
       fact =fact*i; //find factorial
   }

   return fact; //return factorial of a number 
}