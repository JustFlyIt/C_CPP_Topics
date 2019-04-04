/*
	File:  CPPThreads.cpp

	Author: Don Snyder

	Function: CPP program to demonstrate multithreading using three different callables.

		  The primary demonstration is the calling a thread operation...providing
		  three different examples on how to call the thread.

		  NOTE THE LAMBDA EXPRESSION USE AS THE THIRD EXAMPLE FOR STARTING A THREAD

	Credit:  The foundation of this example is found here -
			https://www.geeksforgeeks.org/multithreading-in-cpp/
 
*/

#include <iostream> 
#include <thread> 
using namespace std; 

// A straight C/C++ function 
void foo(int Z) { 
	for (int i = 0; i < Z; i++) { 
		cout << "Thread using function pointer as callable\n"; 
	} 
} 

// A callable object as defined within a C++ class
class threadObj { 
public: 
	void operator()(int x) 
	{ 
		for (int i = 0; i < x; i++) 
			cout << "Thread using function object as callable\n"; 
	} 
}; 

int main() { 
	cout << "Threads 1 and 2 and 3 operating independently" << endl; 

	// This thread is launched by using function pointer as callable 
	thread th1(foo, 3); 

	// This thread is launched by using function object as callable 
	thread th2(threadObj(), 3); 

	// Define a Lambda Expression 
	auto f = [](int x) { 
		for (int i = 0; i < x; i++) 
			cout << "Thread using lambda expression as callable\n"; 
	}; 

	// This thread is launched by using lamda expression as callable 
	thread th3(f, 3); 

	// Wait for the threads to finish: t1, t2, t3 
	th1.join(); 
	th2.join(); 
	th3.join(); 

	return 0; 
} 

