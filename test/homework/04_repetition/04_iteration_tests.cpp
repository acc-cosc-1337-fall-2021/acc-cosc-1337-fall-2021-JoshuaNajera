#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

int gcd(int a, int b);

int main()
{
  int num1, num2;

  printf("Enter two numbers : ");
  scanf("%d %d",&num1, &num2);

  int result = gcd(num1, num2);
  printf("The GCD of %d and %d = %d", num1, num2, result);

  return 0;
}

// User-defined function to find gcd of two numbers
int gcd(int a, int b)
{
  int hcf;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf = i;
    }
  }
  return hcf;
}