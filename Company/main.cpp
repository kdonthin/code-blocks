#include <iostream>
#include "Manager.h"

using namespace std;

int main()
{
    Employee emp1( "Edna Krabapel", 15 ) ;
    Manager mgr1( "Seymore Skinner", 3000, true) ;

    cout << emp1.toString() << endl ;
    cout << mgr1.toString() << endl ;

    return 0;
}
