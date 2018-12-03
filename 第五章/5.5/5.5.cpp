#include <iostream>

using namespace std;

int main()
{
  int total =0;
  int number;
  int value;

  cout<<"Enter the number of the value to be summed\n"
      <<"Follow by the values:";
  cin>>number;

  for(int i=1;i<=number;i++)

  {
      cin>> value;
      total+=value;
}
  cout<<"Sum of the numbers:"<<total<<endl;

}
