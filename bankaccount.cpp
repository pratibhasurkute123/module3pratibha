#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    // Constructor with correct parameter names
    BankAccount(const std::string &accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Deposit method
    void deposit(double amount) {
        balance += amount; // Add the deposited amount to the current balance
        std::cout << "Deposit successful. Current balance: " << balance << std::endl;
    }

    // Withdraw method
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. Current balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient balance. Cannot withdraw." << std::endl;
        }
    }
};

int main() {
    std::string sacno = "SB-123"; // Define the account number
    double Opening_balance = 1000.0; // Define and initialize the opening balance
    double deposit_amt, withdrawal_amt; // Define variables for deposit amount and withdrawal amount

    std::cout << "A/c. No. " << sacno << " Balance: " << Opening_balance << std::endl; // Output the account details

    // Create the bank account object
    BankAccount account(sacno, Opening_balance);

    deposit_amt = 1500.0; // Define the deposit amount
    std::cout << "Deposit Amount: " << deposit_amt << std::endl; // Output the deposit amount
    account.deposit(deposit_amt);

    withdrawal_amt = 750.0; // Define the withdrawal amount
    std::cout << "Withdrawal Amount: " << withdrawal_amt << std::endl;
    account.withdraw(withdrawal_amt);

    withdrawal_amt = 1800.0; // Define an amount greater than the balance
    std::cout << "Attempt to withdraw Amount: " << withdrawal_amt << std::endl;
    account.withdraw(withdrawal_amt);

    return 0;
}
