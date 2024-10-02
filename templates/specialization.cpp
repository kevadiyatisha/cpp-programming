
#include<iostream>
using namespace std;

void show(int,int);
void show(double,double);
void show(char,char);

main()
{
	show(2,5);
	show(2.6,7.6);
	return 0;
}

void show(int a,int b)
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}

void show(double a,double b)
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
