
/*Name:Mwangi Brian
Reg No.:BBIT-05-0019/2024
Campus:Thika Road Campus
Git Username:99mwas*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    // Getters
    std::string getAccountHolder() const {
        return accountHolder;
    }

    double getBalance() const {
        return balance;
    }

    // Setters
    void setAccountHolder(const std::string& holder) {
        accountHolder = holder;
    }

    void setBalance(double newBalance) {
        balance = newBalance;
    }
};

int main() {
    // Creating an object of BankAccount
    BankAccount obj;
    
    // Setting values using setters
    obj.setAccountHolder("mwaas");
    obj.setBalance(1000.0);

    // Displaying values using getters
   
    std::cout << "Account Holder: " << obj.getAccountHolder() <<  "\n";
    std::cout << "Balance: $" << obj.getBalance() << "\n";

    return 0;
}
