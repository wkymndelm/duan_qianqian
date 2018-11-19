#include <iostream>
using namespace std;

int main()
{
   int x = 0;

   cout << "N\t10*N\t100*N\t1000*N\n\n";

   while ( ++x <= 5 )
   {
      cout << x << '\t' << 10 * x << '\t' << 100 * x
         << '\t' << 1000 * x << '\n'<<endl;
   }

   cout << endl;
}
