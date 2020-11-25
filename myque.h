#include<iostream>


using namespace std;
class myqueue
{
	//class node n;
	long long data;
	myqueue* next1;
	public:
	void posh(long long);
	void display();
	void popfront();
}*headq,*last;
//node::display();
//node::posh(int,string);
void myqueue::posh(long long d)
{
	if(headq==nullptr)
	{
		headq=new myqueue;
		headq->data = d;
		headq->next1=nullptr;
		last  = headq;
	}
	else
	{
		class myqueue *p;
		p=new myqueue;
		p->data=d;
		last->next1=p;
		p->next1=nullptr;
		last=p;
	}
}
void myqueue:: popfront()
{
	if(headq==nullptr)
	cout<<"queue underflow"<<endl;
	else if(headq->next1==nullptr)
	{
		free(headq);
		free(last);
	}
	else
	{
		class myqueue *p;
		p = headq->next1;
		free(headq);
		headq=new myqueue;
		headq=p;
	}
}
void myqueue::display()
{
	myqueue *p;
	p  =headq;
	while(p!=nullptr)
	{
		cout<<p->data<<endl;
		p=p->next1;
	}
}
