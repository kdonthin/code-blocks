#include <iostream>
#include <string>

using namespace std;

template <typename T>
void display(T item[], int size)
{
  for( int iCounter = 0 ; iCounter < size ; ++iCounter )
  {
    cout << item[iCounter] << " " ;
  }
}

void test1()
{
  int ai[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  string ais[] = { "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"} ;

  display(ai, 10) ;
  cout << endl ;
  display(ais, 10) ;
}

int main()
{
  test1() ;

  return 0;
}
