#include <iostream>

using namespace std;

int main()
{
    int value;
    int count=0;
    int number;
    int total=0;

    cout<<"Enter integers (9999 to end):";
    cin>>value;

    while (value != 9999)
    {
        total+=value ;
        cout++;

        cin>>value;
}
     if (count !=0 )
        cout<<"The average is:"<<static_cast<double>(total)/count<<endl;
     else
        cout<<"\nNo values were entered"<<endl;
     }
