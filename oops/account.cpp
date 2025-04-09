#include<iostream>
using namespace std;

class AccountHolder{
    int accountNo;
    string name;
    int balance=0;
    // AccountHolder() : balance(0){}
    public:
        void setNumber(int num){
            this->accountNo = num;
        }
        void setName(string nam){
            this->name = nam;
        }

        int getNumber(){
            return this->accountNo;
        }
        string getName(){
            return this->name;
        }

        void setBalance(int amt){
            this->balance = amt;
        }

        int getBalance(){
            return this->balance;
        }

        friend class Transaction;
        friend class Bank;
};


class Transaction{
    public:
        void deposit(AccountHolder& acc, int amt){
            acc.setBalance(acc.getBalance()+amt);
        }

        void withdraw(AccountHolder& acc, int amt){
            if(amt<=acc.getBalance()){
                acc.setBalance(acc.getBalance()-amt);
                cout<<"withdrawn "<<amt<<endl;
            }
            else{
                cout<<"insufficient balance"<<endl;
            }
        }
};


class Bank{
    public:
     void display(AccountHolder& acc){
        cout<<"Name "<<acc.getName()<<endl;
        cout<<"Accout number " <<acc.getNumber()<<endl;
        cout<<"Balance "<<acc.getBalance()<<endl;
    }
};


int main(){
    AccountHolder acc;
    acc.setBalance(0);
    acc.setName("Checking");
    acc.setNumber(2434897);
    Transaction trans;
    trans.deposit(acc,2000);
    Bank bank;
    bank.display(acc);
    trans.withdraw(acc,500);
    bank.display(acc);
    return 0;
}