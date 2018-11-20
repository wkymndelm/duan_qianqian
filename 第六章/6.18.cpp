#include <iostream>
using namespace std;

int integerPower( int, int );

int main()
{
   int exponent;
   int base;

   cout << "Enter base and exponent: ";
   cin >> base >> exponent;
   cout << base << " to the power " << exponent << " is: "
      << integerPower( base, exponent ) << endl;
}
int integerPower( int b, int e )
{
   int product = 1;
   for ( int i = 1; i <= e; i++ )
      product *= b;

   return product;
}
