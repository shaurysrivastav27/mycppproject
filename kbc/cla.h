#include<bits/stdc++.h>
using namespace std;
int cash = 0;
struct cl{
	//public:
		char Q[100000];
		char a[100000];
		char b[100000];
		char c[100000];
		char d[100000];
		char ans;
};

struct cl q[10];
void quest1()
{
	strcpy(q[0].Q,"Nail polish remover is something that us girls just can't do without. But what exactly is it in nail polish remover that does the polish removing?");
strcpy(q[0].a,"Methanol");
strcpy(q[0].b,"Ethanol");
strcpy(q[0].c,"Acetone");
strcpy(q[0].d,"Limonene");
q[0].ans='c';
strcpy(q[1].Q,"Materials through which light cannot pass are said to be.....?");
strcpy(q[1].a,"Transparent");
strcpy(q[1].b,"Opaque");
strcpy(q[1].c,"Translucent");
strcpy(q[1].d,"Obstructor");
q[1].ans='b';
strcpy(q[2].Q,"If you wanted to lighten your hair at home, what is the active ingredient in the dye preparation that will lighten your hair?");
strcpy(q[2].a,"Hydrogen peroxide");
strcpy(q[2].b,"Acetic acid");
strcpy(q[2].c,"Sodium Hydroxide");
strcpy(q[2].d,"Phenol");
q[2].ans='a';
strcpy(q[3].Q,"Mosses and ferns produce fertilized eggs that form ..... These are simplified seeds that have a limited food supply and no seed coat.");
strcpy(q[3].a,"Seeds");
strcpy(q[3].b,"Pistil");
strcpy(q[3].c,"Spores");
strcpy(q[3].d,"Cones");
q[3].ans='c';
strcpy(q[4].Q,"Much of our body heat escapes through the head. What percent is this?");
strcpy(q[4].a,"90%");
strcpy(q[4].b,"60%");
strcpy(q[4].c,"70%");
strcpy(q[4].d,"80%");
q[4].ans='d';
strcpy(q[5].Q,"At room temperature, which element conducts electricity better than any other element?");
strcpy(q[5].a,"Pb");
strcpy(q[5].b,"Au");
strcpy(q[5].c,"Ag");
strcpy(q[5].d,"Cu");
q[5].ans='c';
strcpy(q[6].Q,"Ampere is the unit of.....?");
strcpy(q[6].a,"Electric Energy");
strcpy(q[6].b,"Electric Charge");
strcpy(q[6].c,"Electrical Current");
strcpy(q[6].d,"Electrical Motive force");
q[6].ans='c';
strcpy(q[7].Q,"Pollen is produced by the which of flowering plants?");
strcpy(q[7].a,"Stamen");
strcpy(q[7].b,"Anther");
strcpy(q[7].c,"Ovary");
strcpy(q[7].d,"Pistil");
q[7].ans='b';
strcpy(q[8].Q,"Lux is the unit of.....?");
strcpy(q[8].a,"Luminios intensity");
strcpy(q[8].b,"Focus");
strcpy(q[8].c,"Luminios box");
strcpy(q[8].d,"Illumiation");
q[8].ans='d';
strcpy(q[9].Q,"Which is NOT the name of an atomic model?");
strcpy(q[9].a,"Thomson");
strcpy(q[9].b,"Newton");
strcpy(q[9].c,"Bohr");
strcpy(q[9].d,"Electron cloud");
q[9].ans='b';
}
/*void quest1()
{
	FILE *fp;
	fp = freopen("/home/shaury/chor_project/input.txt","r",stdin);
	int j=0;
	for(j=0;j<10;j++)
	{
		string temp;
		cin.ignore();
		char qr;
				getline(cin, temp, '\n');
		for(int i=0;i<temp.size();i++) q[j].Q[i]=temp[i];
				getline(cin, temp, '\n');
		for(int i=0;i<temp.size();i++) q[j].a[i]=temp[i];
				getline(cin, temp, '\n');
		for(int i=0;i<temp.size();i++) q[j].b[i]=temp[i];
				getline(cin, temp, '\n');
		for(int i=0;i<temp.size();i++) q[j].c[i]=temp[i];
				getline(cin, temp, '\n');
		for(int i=0;i<temp.size();i++) q[j].d[i]=temp[i];
			cin>>qr;
		q[j].ans=qr;
	}
	fclose(fp);
	//freopen("CON","r",stdin);
}*/
