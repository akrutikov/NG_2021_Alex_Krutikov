#include <iostream>

using namespace std;

int main()
{
    int bank[10] = {0}, pin[10] = {1111,2222,3333,4444,5555,6666,7777,8888,9999,1234}, account, pass, choos, money;
    while(true){
        cout << "Bank account: ";
        cin >> account;
        cout << "Enter password for " << account-- << " account: ";
        cin >> pass;
        if(pin[account] == pass){
            cout << "Your money: " << bank[account] << " $";
                 << "What l can do?" << endl;
                 << "1-add money" << endl;
                 << "2-withdraw money"<< endl;
            cin >> choos;
            switch (choos){
            case 1:
                cout << "How much money do you want to add?: ";
                cin >> money;
                bank[account] += money;
                break;
            case 2:
                cout << "How much money do you want to withdraw?: ";
                cin >> money;
                if(bank[account] < money){
                    cout << "You have less money on your balance, try again" << endl;
                }
                if(bank[account] >= money){
                    bank[account] -= money;
                }
                break;
            }
        }
    }
}
