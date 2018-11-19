#include <iostream>
using namespace std;

int main()
{
   float gallons;
   float miles;
   float totalGallons = 0;
   float totalMiles = 0;

   float milesPerGallon;
   float totalMilesPerGallon;

   cout << "Enter miles driven (-1 to quit): ";
   cin >> miles;
   cout << fixed;

   while ( miles != -1 )
   {
      cout << "Enter gallons used: ";
      cin >> gallons;

      totalMiles += miles;
      totalGallons += gallons;

      {if ( gallons != 0 )

         {milesPerGallon =  miles / gallons;
         cout << "MPG this tankful: " << milesPerGallon;}
      else

         totalMilesPerGallon = totalMiles / totalGallons;
         cout << "\nTotal MPG: " << totalMilesPerGallon;
         }

      cout << "\n\nEnter miles driven (-1 to quit): ";
      cin >> miles;
   }
}
