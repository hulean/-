#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
struct Node{
    int hm;
    string name;
}jin[1001];
int jjn[5];
int zsm,lmf,zs,hsm,jgz,lys,tybj,sh,mf,gj;
inline void chushihua()
{
    jin[1].name="����һ��";jin[1].hm=15;jin[2].name="������";jin[2].hm=15;jin[3].name="����籩";jin[3].hm=20;
    jin[4].name="�콵��¶";jin[4].hm=25;jin[5].name="������";jin[5].hm=25;jin[6].name="������";jin[6].hm=30;
    jin[7].name="���۱��";jin[7].hm=30;jin[8].name="��ħ����ն";jin[8].hm=40;jin[9].name="��Գ����";jin[9].hm=45;
    jin[10].name="�������";jin[10].hm=60;
}
int read()
{
	int tot=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9')
	{
		if(c=='-')f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9')
	{
		tot=tot*10+c-'0';
		c=getchar();
	}
	return tot*f;
}
int main()
{
    chushihua();
    ifstream finn("����.txt");
    for(int i=1;i<=4;i++)finn>>jjn[i];
    finn.close();
    
	ifstream fin("���ܴ���.txt");
    fin>>zsm>>lmf>>zs>>hsm>>jgz>>lys>>tybj>>sh>>mf>>gj;
    fin.close();
    CX:system("cls");
	cout<<"\t\t\t�����ܡ�\n";
    cout<<"���ħ��:"<<mf<<endl;
    for(int i=1;i<=4;i++)
    {
        cout<<i<<"��"<<jin[jjn[i]].name<<"   ��ħ:"<<jin[jjn[i]].hm<<endl;
    }
    cout<<"5����ͨ����   ��ħ:0\n";
	cout<<"��ѡ��(ǧ��Ҫ����Ŷ!):\n";
	int xz;
	xz=read();
	if(xz==5)
	{
		cout<<"��Ե��������"<<gj*tybj<<"���˺�\n";
		sh=gj*tybj;
		tybj=1;
		ofstream fout("���ܴ���.txt");
		fout<<zsm<<" "<<lmf<<" "<<zs<<" "<<hsm<<" "<<jgz<<" "<<lys<<" "<<tybj<<" "<<sh<<" "<<mf<<" "<<gj<<endl;
		fout.close();
		return 0;
	}
	if(mf<jin[jjn[xz]].hm){cout<<"��ħ������!\n";goto CX;}
	cout<<"��ʹ����"<<jin[jjn[xz]].name<<endl;mf-=jin[jjn[xz]].hm;
	switch(jjn[xz])
	{
		case 1:{cout<<"�Ե������"<<2*gj*tybj<<"���˺�\n";sh=2*gj*tybj;tybj=1;break;}
		case 2:{cout<<"�Ե������"<<gj*tybj<<"���˺�,���γ�������\n";sh=gj*tybj;lmf=true;tybj=1;break;}
		case 3:{cout<<"�Ե������"<<2*gj*tybj<<"���˺�,���γ�����\n";sh=2*gj*tybj;zs=3;tybj=1;break;}
		case 4:{cout<<"�ظ���"<<zsm*0.45<<"��Ѫ��\n";hsm=zsm*0.40;tybj=1;break;}
		case 5:{cout<<"ʹ�����ں�2�غϹ�����Ϊԭ����50%\n";jgz=2;tybj=1;break;}
		case 6:{cout<<"ʹ���ں�3�غ������ʱ�Ϊ50%\n";lys=3;tybj=1;break;}
		case 7:{cout<<"�γ����۱��\n";tybj=3;break;}
		case 8:{cout<<"�Ե������"<<3*gj*tybj<<"���˺������γ�����\n";sh=3*gj*tybj;zs=3;tybj=1;break;}
		case 9:{cout<<"�Ե������"<<4*gj*tybj<<"���˺������γ�������\n";sh=4*gj*tybj;lmf=true;tybj=1;break;}
		case 10:{cout<<"�Ե������"<<5*gj*tybj<<"���˺������γ����۱��\n";sh=5*gj*tybj;tybj=3;int ssj=rand()%100+1;if(ssj==1)sh=0x3f3f3f3f;break;}
	}
	ofstream fout("���ܴ���.txt");
	fout<<zsm<<" "<<lmf<<" "<<zs<<" "<<hsm<<" "<<jgz<<" "<<lys<<" "<<tybj<<" "<<sh<<" "<<mf<<" "<<gj<<endl;
	fout.close();
	return 0;
}
