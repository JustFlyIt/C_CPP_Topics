/*
	File:  basicPTR.cpp

	Author: Don Snyder

	Function: C++ program to demonstrate basic memory pointer operation.

		  The primary demonstration is the calling a std::thread operation...providing
		  three different examples on how to call the std::thread.

	Credit:  The foundation of this example is found here -
			http://www.cplusplus.com/doc/tutorial/pointers/
*/
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer;

  mypointer = &firstvalue;
  *mypointer = 10;
  mypointer = &secondvalue;
  *mypointer = 20;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
