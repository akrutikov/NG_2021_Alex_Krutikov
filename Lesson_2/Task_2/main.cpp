#include <iostream>

using namespace std;

int main()
{
    int number, sum;

    cout << "Enter the number: "; cin >> number;
    for(int a = number; a > 0; a /= 10){
        if(a % 10 == a / 10 % 10 || number % 10 == a)
            sum += a % 10;
        }
        cout << "Hash: " << sum;
}
