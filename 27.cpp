#include <iostream>
using namespace std;
int power(int i)
{
    int l;
    int sum = 0;
    for(l = 0; l<i; l++)
    {
        if(sum == 0)
        {
            sum = 2 ;
        }
        else
            sum = sum * 2;
    }
    if(i == 0)
        {
            sum = 1;
        }
    return sum;
}
int main()
{
    int num;
    int i;
    cin>>num;
    int sum = 0;
    for(i = 0; num / 10!=0; i++)
    {
        sum = sum + num%10*power(i);
        num = num/10;
    }
    if(num>0)
    {
     sum = sum + power(i);
    }
    cout<<"The number is :"<<sum<<std::endl;
    return 0;
}




