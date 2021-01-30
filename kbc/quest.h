#include<bits/stdc++.h>
#include"cla.h"
using namespace std;
bool vis[10];
bool ff = true;
int cnt,pr[10];
void ini()
{
	for(int i=0;i<10;i++) vis[i] = 1;
	cnt = 0;
	for(int i=0;i<10;i++) pr[i] = 1000*(i+1);
	quest1();
}
void random_quest()
{
	
	if(ff){
	ff = false;
	ini();
	}
	char ch;
	while(cnt<11)
	{
		int i = rand()%10;
		if(vis[i]==1)
		{
			vis[i] = false;
			cout<<"For quiting press q"<<endl<<"-------------XXXXXXXXX-----------------"<<endl<<endl;
			cout<<"["<<cnt+1<<"]"<<q[i].Q<<endl;
			cout<<"[a]"<<q[i].a<<"          "<<"[b]"<<q[i].b<<endl;
			cout<<"[c]"<<q[i].c<<"          "<<"[d]"<<q[i].d<<endl;
			cin>>ch;
			if(ch=='q') 
			{
				cout<<"You have won "<<cash<<endl;
				exit(0);
			}
			else if(ch==q[i].ans)
			{
				cash = cash+pr[cnt];
				cout<<"Correct Answer "<<endl<<"Total cash now "<<cash<<endl;
			}
			else 
			{
				cout<<"No "<<ch<<" is not the correct answer !! You lose!! correct answer is "<<q[i].ans<<endl;
				exit(0);
			}
			cnt++;
		}
		
	}
}
