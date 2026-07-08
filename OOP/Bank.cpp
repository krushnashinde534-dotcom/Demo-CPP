#include <iostream>
using namespace std;

class Bank {
public:
    int balance = 1000;

    void deposit(int amount) {
        balance += amount;
    }

    void showBalance() {
        cout << "Balance = " << balance;
    }
};

int main() {
    Bank b;

    b.deposit(500);
    b.showBalance();

    return 0;
}