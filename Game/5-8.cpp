#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#define getdarkblue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
#define getdarkgreen SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
#define getblue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
#define getred SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
#define getdarkpink SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
#define getyellow SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
#define getwhite SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
#define getgreen SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
#define getpink SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
using namespace std;
string name;
bool lmf;
int zs,jgz,lys,tybj=1;
int sm,gj,fy,mf,jy,jb;//������������������ħ�������飬���
int zsm;
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
void MLHF()
{
	int tjht=0;
	int gj1=35,gj2=60;
	int sj;
	srand(time(0));
	int xz,dx=300;
	system("cls");
	printf("��BOSS��顿\n"
			"�ز������������ϻ���������ӵ������Ի󣬲������ھŻ�ɽ´�ѹأ�����ΪŰ��\n"
			"����û�ص㡿\n"
			"�Ż�ɽ´\n"
			"�����ܽ��ܡ�\n"
			"�ټ׻��壺���50%�˺���������50%�˺�������2�غϡ�\n"
			"������а�����������������������һ������֮������һ��ܵ��˺���\n"
			"����һ��������ȫ����ǰˮƽͱ��һ����������һ������֮��������󱩻���(��Ѫ������50%��ʹ��)\n"
			"��������Ʒ��\n"
			"����:90\n���:5\n");
	while(dx>0&&sm>0)
	{
	    system("pause");
	    system("cls");
	    cout<<"\t\t\t���Ż�ɽ´��\n";
		tjht--;
	    if(zs>0)
	    {
	        if(tjht>0)cout<<"���ϻ����ܵ�"<<gj*tybj*0.5<<"�������˺�\n",cout<<"ͬʱ��Ҳ�ܵ�"<<tybj*gj*0.5<<"���˺�\n",sm-=gj*tybj*0.5,dx-=0.5*gj*tybj;
	        else cout<<"���ϻ����ܵ�"<<gj*tybj<<"�������˺�\n",dx-=gj*tybj;
	        zs--;
	    }
	    if(!jgz&&gj2==30)gj1=35,gj2=60;
        if(jgz)
        {
        	if(gj2==60)gj1/=2,gj2/=2;
        	jgz--;
		}
	    if(!lmf)
	    {
	    	int ssssj;
        	if(lys)
        	{
        		ssssj=rand()%2;
        		if(ssssj==0)
				{
					cout<<"���ܳɹ�\n\n";
					goto SB;
				}
				lys--;
			}
	        if(dx<150)sj=rand()%3+1;
	        else sj=rand()%2+1;
	        switch(sj)
	        {
	            case 1:{cout<<"���ϻ���ʹ�����ټ׻���\n";tjht=2;break;}
	            case 2:{cout<<"���ϻ���ʹ���˵�����а,���ܵ�"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);break;}
	            case 3:{cout<<"���ϻ���ʹ��������һ��,���ܵ�"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n";sm-=(gj2-fy>0?gj2-fy:1);break;}
	        }
	    }
	    SB:if(lmf)lmf=false;
	    mf+=5;
	    if(sm<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"���ϻ�����������!\n";fout<<"0"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    if(dx<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"�㽫���ϻ��������!\n";fout<<"1"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    JX:getgreen;
        	if(dx<=150)getyellow;
        	if(dx<=75)getred;
			cout<<"���ϻ�������:"<<dx;
			getgreen;
			if(sm<=zsm/2)getyellow;
  			if(sm<=zsm/4)getred;
			cout<<"\t"<<name<<"����:"<<sm<<"\t";
			getblue;
			cout<<name<<"ħ��:"<<mf<<endl;
			getwhite;
	    cout<<"�ټ׻��塾";
	    if(tjht>0)cout<<"�ǡ�\n";
		else cout<<"��\n";
	    cout<<"1����ͨ����\n";
	    cout<<"2��ʹ�ü���\n";
	    cout<<"3������\n";
	    cout<<"\t\n\t\t��ѡ��:";
	    xz=read();
	    int xxz;
	    switch(xz)
	    {
	        case 1:
			{
				if(tjht>0)cout<<"������ϻ������"<<tybj*gj/2<<"���˺�\n������Ҳ�ܵ�"<<tybj*gj/2<<"���˺�\n",dx-=tybj*gj/2,sm-=tybj*gj/2;
				else cout<<"������ϻ������"<<tybj*gj<<"���˺�\n",dx-=tybj*gj;
				break;
			}
	        case 2:
	        {
	            int hsm=0,sh=0;
            	ofstream fout("���ܴ���.txt");
            	fout<<zsm<<" "<<lmf<<" "<<zs<<" "<<hsm<<" "<<jgz<<" "<<lys<<" "<<tybj<<" "<<sh<<" "<<mf<<" "<<gj<<endl;
            	fout.close();
            	system("ѡ����");
            	ifstream fin("���ܴ���.txt");
    			fin>>zsm>>lmf>>zs>>hsm>>jgz>>lys>>tybj>>sh>>mf>>gj;
    			fin.close();
    			if(sh>0)if(tjht>0)cout<<"�������ټ׻��壬����ֻ�ܵ���"<<sh/2<<"���˺�\n������Ҳ�ܵ�"<<sh/2<<"���˺�\n",dx-=sh/2,sm-=sh/2;
				else dx-=sh;
    			sm+=hsm;
	            break;
	        }
	        case 3:
	        {
	        	ofstream foutt("����--������.txt");
	            foutt<<"0"<<endl;
	            foutt.close();
	            return;
	        }
	    }
	}
	ofstream fout("����--������.txt");
	if(dx<1)
	{
	    cout<<"��սʤ�����ϻ���!\n";
	    fout<<"1"<<endl;
	}
	else cout<<"���ϻ�����������!\n",fout<<"0"<<endl;
	system("pause");
	fout.close();
	return;
}
int main()
{
	int d;
    ifstream fin("���븱��.txt");
    fin>>d>>name>>zsm>>sm>>gj>>fy>>mf;
    fin.close();
    switch(d)
    {
    	case 1:{MLHF();break;}
	}
	return 0;
}
