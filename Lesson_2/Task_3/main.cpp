#include <iostream>

using namespace std;

int main()
{
    int Size;
    cout << "Size: "; cin >> Size;
    for(int hight = 0; hight < Size; hight++){
        for(int weight = 0; weight < Size; weight++){
            if(hight > 0 && hight < Size - 1 && weight > 0 && weight < Size - 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
