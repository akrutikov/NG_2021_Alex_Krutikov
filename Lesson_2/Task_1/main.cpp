#include <iostream>


using namespace std;

int main()
{
    int number, sum;

    cout<<"Enter the number: "; cin>>number;

    for(int a=number; a>0; a/=10){
        sum+=a%10;
        }

    cout<<"sum = "<<sum<<endl;

    return 0;
}
