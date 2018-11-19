#include <iostream>
using namespace std;

int main()
{
   double radius;
   double x  = 3.14159;

   cout << "Enter the radius: ";
   cin >> radius;

   cout << "The diameter is " << radius * 2.0;

   cout << "\nThe circumference is " << 2.0 * x * radius;

   cout << "\nThe area is " << x * radius * x << endl;
}
