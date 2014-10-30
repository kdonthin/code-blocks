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

template <typename T>
T max(T &a, T &b)
{
  if ( a > b)
  {
    return a ;
  }
  else
  {
    return b ;
  }
}

void test2()
{
  int a1 = 10, a2 = 20 ;
  double d1 = 100.1, d2 = 10.1 ;
  string s1 = "One", s2 = "Two" ;

  cout << "Compare : " << a1 << " and " << a2 << ", Max is : " << max(a1, a2) << endl ;
  cout << "Compare : " << d1 << " and " << d2 << ", Max is : " << max(d1, d2) << endl ;
  cout << "Compare : " << s1 << " and " << s2 << ", Max is : " << max(s1, s2) << endl ;
}

int main()
{
  test1() ;

  cout << "--------------------------------------------" << endl ;

  test2() ;

  return 0;
}
