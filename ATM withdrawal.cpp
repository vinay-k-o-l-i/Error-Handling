#include <iostream>
using namespace std;

class ATM {
    float balance;

public:
    ATM(float initialBalance = 0) {
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount <= 0) {
            throw "Invalid deposit amount!";
        }
        balance += amount;
        cout << "Deposit Successful. Current Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount <= 0) {
            throw "Invalid withdrawal amount!";
        }
        if (amount > balance) {
            throw "Insufficient Balance!";
        }
        balance -= amount;
        cout << "Withdrawal Successful. Current Balance: " << balance << endl;
    }

    void checkBalance() {
        cout << "Available Balance: " << balance << endl;
    }
};

int main() {
    ATM userATM(5000);
    int choice;
    float amount;

    cout << "===== ATM TRANSACTION SYSTEM =====" << endl;

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:
                    userATM.checkBalance();
                    break;
                case 2:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    userATM.deposit(amount);
                    break;
                case 3:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    userATM.withdraw(amount);
                    break;
                case 4:
                    cout << "Thank you for using our ATM!" << endl;
                    break;
                default:
                    cout << "Invalid Choice! Try again." << endl;
            }
        }
        catch (const char* msg) {
            cout << "Error: " << msg << endl;
        }

    } while (choice != 4);

    return 0;
}
