#include <iostream>

using namespace std;

#include "外部變數_Extern.cpp"

int x; //全域變數 
int main()
{
	foo();
	
	cout<<"x ="<<x<<endl;	
	 
	
	return 0; 
}

