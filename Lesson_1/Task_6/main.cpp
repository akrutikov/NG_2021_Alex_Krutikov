#include <iostream>

using namespace std;

int main()
{
    int star;
    cout<<"enter the mask: "; cin>>star;
    cout<<"number of adress: ";
    switch (star)
    {
        case (255): cout<<"1"<<endl; break;
        case (254): cout<<"2"<<endl; break;
        case (252): cout<<"4"<<endl; break;
        case (248): cout<<"8"<<endl; break;
        case (240): cout<<"16"<<endl; break;
        case (224): cout<<"32"<<endl; break;
        case (192): cout<<"64"<<endl; break;
        case (128): cout<<"128"<<endl; break;
        default: cout<<"unknown"<<endl;
    }
}
