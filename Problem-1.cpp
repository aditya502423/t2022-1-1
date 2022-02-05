#include<iostream>
using namespace std;
class Calc{
	int a,b,ch,c;
	public: void calculator()
		{
			cout<<"Enter two number"<<endl;
			cin>>a;
			cin>>b;
			cout<<"Enter choice";
			cin>>ch;
			if(ch==1)
			{
				c=a+b;
				cout<<"Addition"<<c<<endl;
			}
			if(ch==2)
			{
				c=a-b;
				cout<<"Subtraction"<<c<<endl;
			}
			if(ch==3)
			{
				c=a*b;
				cout<<"Multiplication"<<c<<endl;
			}
			
			if(ch==4)
			{
				c=a/b;
				cout<<"Division"<<c<<endl;
			}
		}
	
};


int main()
{
	
	Calc c;
	c.calculator();
	
	
}
