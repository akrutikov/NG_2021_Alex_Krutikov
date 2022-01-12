#include <iostream>

using namespace std;

int main()
{
    int arr[10], value;
    for(int i = 0; i < 10; i++){
        cout << "Enter value " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter the number that we will add to the rest of the numbers: ";
    cin >> value;
    for(int j = 0; j < 10; j++){
        arr[j] += value;
        cout << "Value " << j << ": " << arr[j] << endl;
    }
    return 0;
}
