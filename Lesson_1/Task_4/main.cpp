#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double Discriminat;
    double x1;
    double x2;

    cout<<"enter value a ";
    cin>>a;
    cout<<"enter value b ";
    cin>>b;
    cout<<"enter value c ";;
    cin>>c;

    Discriminat=b*b-4*a*c;
    if (Discriminat>0)
    {
        x1=((-b)+sqrt(Discriminat))/((2*a));
        x2=((-b)-sqrt (Discriminat))/((2*a));
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    if (Discriminat==0)
    {
        x1=(-b)/((2*a));
        x2=(-b)/((2*a));
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    else if (Discriminat<0)
    {
    cout<<"Discriminat<0 no answer";
    }
    return 0;
}
