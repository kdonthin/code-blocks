#include <iostream>
#include "CheckingAccount.h"

using namespace std;

int main()
{
    Account testAccount(500) ;

    testAccount.credit(100) ;
    cout << "Account Balance : " << testAccount.getBalance() << endl;

    testAccount.debit(50) ;
    cout << "Account Balance : " << testAccount.getBalance() << endl;

    CheckingAccount testChecking(500, .5) ;

    testChecking.credit(100) ;
    cout << "Checking Balance : " << testChecking.getBalance() << endl;
    testChecking.debit(50) ;
    cout << "Checking Balance : " << testChecking.getBalance() << endl;

    return 0;
}
