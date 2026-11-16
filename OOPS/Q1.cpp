#include <iostream>
using namespace std;
class Account{
	private :
	string holder_name;
	int acc_no;
	string acc_type;
	int balance;
	public :
		 void setAccount(string name, int no, string type, int bal);
		    void displayAccount();
			 int getBalance();
			 int calculateBalanceAfterDeposit(int deposit);	
};
void Account::setAccount(string name, int no, string type, int bal) {
    holder_name = name;
    acc_no = no;
    acc_type = type;
    balance = bal;
}
void Account::displayAccount() {
    cout << "Holder Name: " << holder_name << endl;
    cout << "Account No : " << acc_no << endl;
    cout << "Account Type: " << acc_type << endl;
    cout << "Balance    : " << balance << endl;
}
int Account::getBalance() {
    return balance;
}
int Account::calculateBalanceAfterDeposit(int deposit) {
    return balance + deposit;
}
int main() {
    Account acc1, acc2;
    acc1.setAccount("AbdulRehman", 101, "Savings", 5000);
    acc2.setAccount("ALI", 102, "Current", 12000);
    acc1.displayAccount();
    cout << endl;
    acc2.displayAccount();
    cout << "\nAcc1 Current Balance: " << acc1.getBalance() << endl;
    cout << "Acc2 Current Balance: " << acc2.getBalance() << endl;
    cout << "\nAcc1 after 2000 deposit: " << acc1.calculateBalanceAfterDeposit(2000) << endl;
    cout << "Acc2 after 3500 deposit: " << acc2.calculateBalanceAfterDeposit(3500) << endl;
    return 0;
}


