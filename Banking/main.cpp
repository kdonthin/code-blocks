#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account testAccount(500) ;

    testAccount.credit(100) ;
    cout << "Balance : " << testAccount.getBalance() << endl;

    testAccount.debit(50) ;
    cout << "Balance : " << testAccount.getBalance() << endl;

    return 0;
}
