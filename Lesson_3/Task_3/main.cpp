#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int a[4], b[4], one = 0, two = 0;

    for(int i = 0; i < 4; i++){
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        b[i] = rand() % 10 ;
        cout << b[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        one *= 10;
        one += a[i];
        two *= 10;
        two += b[i];
    }
    cout << "Got: " << one << " + " << two << endl
         << "Result: " << one + two;
    return 0;
}
