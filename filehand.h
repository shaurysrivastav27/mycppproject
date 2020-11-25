#include<iostream>
#include<stdio.h>

using namespace std;

class node
{
	int data;
	//string name;
	node *prev;
	node *next ;
	public:
	void posh(int);
	void popback();
	void popfront();
	void display();
}*head,*last;

void node::posh(int d)
{
	if(head==nullptr)
	{
		head=new node;
		head->data=d;
		last = head;
		head->next =nullptr;	
	}
	else
	{
		struct node *p;
		p=new node;
		p->data=d;
		p->next=nullptr;
		p->prev=last;
		last->next=p;
		p=last;
		/*q = head;
		while(q->next!=nullptr)
		{
			q = q->next;
		}
		q->next=p;
		p->next = nullptr;
		*/
	}
}

void node::display()
{
	struct node *p;
	p  =head;
	while(p!=nullptr)
	{
		cout<<p->name<<" "<<p->data<<endl;
		p=p->next;
	}
}
