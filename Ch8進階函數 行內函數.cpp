#include <iostream>

using namespace std;


inline int funl(int a,int b,int c)//行內函數定義 
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"輸入三個字:";
	cin>>a>>b>>c;
	
	if(funl(a,b,c)%2==0)
		
		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"為偶數"<<endl;
	
	else
	
		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"為奇數"<<endl;
		
		
	return 0; 
		
}
