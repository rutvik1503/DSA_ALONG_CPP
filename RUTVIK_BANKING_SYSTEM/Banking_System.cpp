#include <iostream>
using namespace std;

// Base class: BankAccount (Encapsulation)
class BankAccount {
protected:
    string owner;
    double balance;
public:
    BankAccount(string owner, double balance) : owner(owner), balance(balance) {}
    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " into " << owner << "'s account." << endl;
    }
    virtual bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
            return false;
        }
        balance -= amount;
        cout << "Withdrew " << amount << " from " << owner << "'s account." << endl;
        return true;
    }
    virtual void display() const {
        cout << "Account Owner: " << owner << " | Balance: " << balance << endl;
    }
    virtual ~BankAccount() {}
};

// Derived class: SavingsAccount (Inheritance & Polymorphism)
class SavingsAccount : public BankAccount {
    double interestRate;
public:
    SavingsAccount(string owner, double balance, double interestRate)
        : BankAccount(owner, balance), interestRate(interestRate) {}

    void addInterest() {
        balance += (balance * interestRate / 100);
        cout << "Interest added! New balance: " << balance << endl;
    }
    void display() const override {
        cout << "[Savings Account] ";
        BankAccount::display();
    }
};

// Derived class: CheckingAccount
class CheckingAccount : public BankAccount {
    double overdraftLimit;
public:
    CheckingAccount(string owner, double balance, double overdraftLimit)
        : BankAccount(owner, balance), overdraftLimit(overdraftLimit) {}

    bool withdraw(double amount) override {
        if (amount > balance + overdraftLimit) {
            cout << "Overdraft limit exceeded!" << endl;
            return false;
        }
        balance -= amount;
        cout << "Withdrew " << amount << " from " << owner << "'s checking account." << endl;
        return true;
    }
    void display() const override {
        cout << "[Checking Account] ";
        BankAccount::display();
    }
};

int main() {
    SavingsAccount savings("Alice", 1000, 5);
    CheckingAccount checking("Bob", 500, 200);
    
    savings.display();
    checking.display();
    
    savings.deposit(200);
    checking.withdraw(600);
    
    savings.display();
    checking.display();
    
    return 0;
}
