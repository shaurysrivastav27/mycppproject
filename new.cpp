#include<bits/stdc++.h>
#include"myque.h"
#include"mystack.h"
using namespace std;

int main()
{
	mystack ms;
	myqueue mq;
	int  n =5;
	int x;//string s;
	while(n--)
	{
		cin>>x;
		ms.posh(x);
	}
	ms.display();
	ms.popback();
	ms.display();
	n=5;
	while(n--)
	{
		cin>>x;
		mq.posh(x);
	}
	mq.display();
	mq.popfront();
	mq.display();
	return 0;
}
