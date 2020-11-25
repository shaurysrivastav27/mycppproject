#include<iostream>

using namespace std;
class mystack
{
	//class node n;
	long long data;
	mystack* next;
	public:
	void posh(long long);
	void display();
	void popback();
}*heads,*lasts;
//node::display();
//node::posh(int,string);
void mystack::posh(long long d)
{
	if(heads==nullptr)
	{
		heads=new mystack;
		heads->data = d;
		heads->next=nullptr;
		lasts  = heads;
	}
	else
	{
		class mystack *p;
		p=new mystack;
		p->data=d;
		p->next=lasts;
		lasts=p;
	}
}
void mystack:: popback()
{
	if(heads==nullptr)
	cout<<"stack underflow"<<endl;
	else if(heads==lasts)
	{
		free(heads);
		free(lasts);
	}
	else
	{
		class mystack *p;
		p = lasts->next;
		free(lasts);
		lasts=new mystack;
		lasts=p;
	}
}
void mystack::display()
{
	mystack *p;
	p  =lasts;
	while(p!=nullptr)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
