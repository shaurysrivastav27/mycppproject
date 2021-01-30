#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull usigned long long 
#define vec vector<ll>
#define vec1 vector<vector <ll>>
#define set set<ll>
#define pb push_back
#define ld long double 
#define show(a) for(ll i : a) cout<<i<<" "
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0) 
#define ff first
#define ss second
#define pair pair<ll,ll>
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 

void inline solve() 
{
	string temp;char qr;
	for (int i = 0; i < 10; i += 1)
	{
		cin.ignore();
		getline(cin, temp, '\n');
		cout<<"strcpy(q["<<i<<"].Q,"<<temp<<");"<<endl;
		getline(cin, temp, '\n');
		cout<<"strcpy(q["<<i<<"].a,"<<temp<<");"<<endl;
		getline(cin, temp, '\n');
		cout<<"strcpy(q["<<i<<"].b,"<<temp<<");"<<endl;
		getline(cin, temp, '\n');
		cout<<"strcpy(q["<<i<<"].c,"<<temp<<");"<<endl;
		getline(cin, temp, '\n');
		cout<<"strcpy(q["<<i<<"].d,"<<temp<<");"<<endl;
		cin>>qr;
		cout<<"q["<<i<<"].ans='"<<qr<<"';"<<endl;
	}
}

int main()
{
 freopen("/home/shaury/chor_project/input.txt","r",stdin);
 freopen("output.txt","w",stdout);

	fastio;
	//int t;cin>>t;while(t--)
    solve();
}
