/*1.	Build class Wallet (private balance)
 and class WalletAuditor as a friend class.
Wallet exposes deposit/withdraw with validation.
WalletAuditor::report(const Wallet&) reads internals.
Show friendship is not transitive: a third class 
cannot access Wallet despite WalletAuditor friendship.
*/

#include <iostream>
using namespace std;
class Wallet{
    private:
        int balance=0;
    public:
        void deposit(int amount){
            balance+=amount;
            cout<<amount<<" deposited"<<endl;
        }
        void withdraw(int amount){
            if (amount<=balance){
                balance-=amount;
                cout<<"withdraw amount: "<<amount<<endl;
            }else{
                cout<<"insufficiet balance"<<endl;
            }
        }
        friend class WalletAuditor;
};
class WalletAuditor{
    public:
        void report(const Wallet& w){
            cout<<"Balance: "<<w.balance<<endl;
        }
};
class thrid{
    public:
        void report(const Wallet &w)
        {
            //cout << "Balance: " << w.balance << endl;
            cout << "member ' Wallet::balance ' (declared at line 13) is inaccessible "<<endl;
        }
};

int main(){
    Wallet w;
    w.deposit(1500);
    w.withdraw(200);
    WalletAuditor wa;
    wa.report(w);

    thrid t;
    t.report(w);
}