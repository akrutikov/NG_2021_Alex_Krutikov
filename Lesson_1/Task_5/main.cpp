#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double mass;
    double years=300;
    double petrol;

    cout<<"Enter the mass of the ship  ";
    cin>>mass;

    mass=mass/3-2;

    petrol=mass*years;
    cout<<"need "<<petrol<<" liters of petrol";

    return 0;
}
