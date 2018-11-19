#include <iostream>
using namespace std;

int main()
{
   int counter = 0;
   int number;
   int largest;
   int theSecondLargest;

   cout << "Enter the first number: ";
   cin >> largest;

   cout << "Enter next number: ";

   if ( number > largest )
   {
      theSecondLargest = largest;
      largest = number;
   }
   else
      theSecondLargest = number;
      counter = 2;

   while ( counter < 11 )
   {
      cout << "Enter next number: ";
      cin >> number;

      if ( number > largest )
      {
         theSecondLargest = largest;
         largest = number;
      }
      else if ( number > theSecondLargest )
         theSecondLargest = number;
      counter++;
   }
   cout << "\nLargest is " <<  largest
      << "\nThe second largest is " << theSecondLargest << endl;
}
