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
int fs,zs,jgz,lys,tybj=1;
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
void EGG()
{
	int gj1=5+2*gj,gj2=10+gj;
	int sj;
	srand(time(0));
	int xz,dx=50+sm,zdx=50+sm;
	system("cls");
	printf("��BOSS��顿\n"
			"��֮���ף����Ǹ�ʲô�񵰶�������\n"
			"����û�ص㡿\n"
			"����\n"
			"�����ܽ��ܡ�\n"
			"���ɵ����ٻ�һ��ѵ����������������ɾ޴��˺�\n"
			"�����������ӳ�һö�������γɸ�ʴ������2�غϣ�\n"
			"��������������ʱ��50%�ļ�����Ѫ����\n"
			"��������Ʒ��\n"
			"��ĩ����*5\n");
	while(dx>0&&sm>0)
	{
	    FH:system("pause");
	    system("cls");
	    cout<<"\t\t\t��������\n";
	    if(zs>0)
	    {
	        cout<<"��֮�����ܵ�"<<gj*tybj<<"�������˺�\n",dx-=gj*tybj;
	        zs--;
	    }
	    if(!jgz&&gj1<5+2*gj)gj1=5+2*gj,gj2=10+gj;
        if(jgz)
        {
        	if(gj1==5+2*gj)gj1/=2,gj2/=2;
        	jgz--;
		}
		if(fs)
		{
			fs--;
			cout<<"���ܵ�"<<gj2<<"�㸯ʴ�˺�\n";sm-=(gj2-fy>0?gj2-fy:1);
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
	        sj=rand()%2+1;
	        switch(sj)
	        {
	            case 1:{cout<<"��֮����ʹ���˼��ɵ���,���ܵ�"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);break;}
	            case 2:{cout<<"��֮����ʹ���˳�������\n";fs=2;break;}
	        }
	    }
	    SB:if(lmf)lmf=false;
	    mf+=5;
	    if(sm<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"��֮���׽�������!\n";fout<<"0"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    if(dx<1)
	    {
	    	int sjj=rand()%2;
			if(sjj==0)
	    	{
	    		dx=zdx;
	    		cout<<"��֮����ʹ���˽�����\n";
	    		continue;
			}
	    	ofstream fout("����--������.txt");
	        cout<<"�㽫��֮���״����!\n";fout<<"1"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    JX:getgreen;
        	if(dx<=zdx/2)getyellow;
        	if(dx<=zdx/4)getred;
			cout<<"��֮��������:"<<dx;
			getgreen;
			if(sm<=zsm/2)getyellow;
  			if(sm<=zsm/4)getred;
			cout<<"\t"<<name<<"����:"<<sm<<"\t";
			getblue;
			cout<<name<<"ħ��:"<<mf<<endl;
			getwhite;
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
				cout<<"��Ե�֮�������"<<tybj*gj<<"���˺�\n",dx-=tybj*gj;
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
				dx-=sh;
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
		int sjj=rand()%2;
		if(sjj==0)
	    {
	    	dx=zdx;
	    	cout<<"��֮����ʹ���˽�����\n";
	    	goto FH;
		}
	    cout<<"��սʤ�˵�֮����!\n";
	    fout<<"1"<<endl;
	}
	else cout<<"��֮���׽�������!\n",fout<<"0"<<endl;
	system("pause");
	fout.close();
	return;
}
void HomeWork()
{
	int gj1=10+gj;
	int sj;
	srand(time(0));
	int xz,dx=60+sm,zdx=60+sm;
	system("cls");
	printf("��BOSS��顿\n"
			"��ҵ���ף����ѵ�������ʦ��\n"
			"����û�ص㡿\n"
			"�칫��\n"
			"�����ܽ��ܡ�\n"
			"�̱޻��裺�������̱ޣ���ɾ޴��˺�\n"
			"���۽�(��������)���������۱��\n"
			"�콻��ҵ��ʹ��Ĺ�����Ϊԭ����90%\n"
			"��������Ʒ��\n"
			"��ĩ����*5\n");
	while(dx>0&&sm>0)
	{
	    FH:system("pause");
	    system("cls");
	    cout<<"\t\t\t���칫�ҡ�\n";
	    tybj=1; 
	    if(zs>0)
	    {
	        cout<<"��ҵ�����ܵ�"<<gj*tybj<<"�������˺�\n",dx-=gj*tybj;
	        zs--;
	    }
	    if(!jgz&&gj1<=10+gj)gj1=10+gj;
        if(jgz)
        {
        	if(gj1==10+gj)gj1/=2;
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
	        sj=rand()%2+1;
	        switch(sj)
	        {
	            case 1:{cout<<"��ҵ����ʹ���˽̱޻���,���ܵ�"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);break;}
	            case 2:{cout<<"��ҵ����ʹ���˿콻��ҵ\n";gj=gj*0.9;break;}
	        }
	    }
	    SB:if(lmf)lmf=false;
	    mf+=5;
	    if(sm<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"��ҵ���׽�������!\n";fout<<"0"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    if(dx<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"�㽫��ҵ���״����!\n";fout<<"1"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    JX:getgreen;
        	if(dx<=zdx/2)getyellow;
        	if(dx<=zdx/4)getred;
			cout<<"��ҵ��������:"<<dx;
			getgreen;
			if(sm<=zsm/2)getyellow;
  			if(sm<=zsm/4)getred;
			cout<<"\t"<<name<<"����:"<<sm<<"\t";
			getblue;
			cout<<name<<"ħ��:"<<mf<<endl;
			getwhite;
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
				cout<<"�����ҵ�������"<<tybj*gj<<"���˺�\n",dx-=tybj*gj;
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
				dx-=sh;
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
	    cout<<"��սʤ����ҵ����!\n";
	    fout<<"1"<<endl;
	}
	else cout<<"��ҵ���׽�������!\n",fout<<"0"<<endl;
	system("pause");
	fout.close();
	return;
}
int main()
{
	getwhite;
	ifstream fin("���븱��.txt");
    fin>>name>>zsm>>sm>>gj>>fy>>mf;
    fin.close();
	srand(time(0));
	int sj=rand()%2+1;
	if(sj==1)EGG();
	else HomeWork();
	return 0;
}
