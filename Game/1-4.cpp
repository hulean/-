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
void YJJ()
{
	getwhite;
	int gj1=20,gj2=10,gj3=15;
    int sj;
    srand(time(0));
    int xz,dx=150;
    system("cls");
    printf("��BOSS��顿\n"
			"����һֻ������Ͷ����֮���ף���ڼ������������ȸ�ִ�Ϊ����Ϊ�������¥����������\n"
			"����û�ص㡿\n"
			"������\n"
			"�����ܽ��ܡ�\n"
			"��צ���ģ���˫צ���й�������ǰ����Χ�ڵ������ɾ޴��˺���\n"
			"�ͻ���ɽ����ǰ�Ϸ�Ծ��󣬶��·��ĵ��˽�������,������غ��ٴ���ɳ���˺���\n"
			"��Хɽ�֣������޴��ŭ�𣬶���Χ�������ɶ���˺���\n"
			"��������Ʒ��\n"
			"����:30\n���:2\n");
    while(dx>0&&sm>0)
    {
        system("pause");
        system("cls");
        cout<<"\t\t\t�������š�\n";
        if(zs>0)
        {
            cout<<"�������ܵ�"<<gj*tybj<<"�������˺�\n";
            zs--;
            dx-=gj*tybj;
        }
		if(!jgz&&gj1==10)gj1=20,gj2=10,gj3=15;
        if(jgz)
        {
        	if(gj1==20)gj1/=2,gj2/=2,gj3/=2;
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
            sj=rand()%3+1;
            switch(sj)
            {
                case 1:{cout<<"������ʹ���˻�צ���ģ����������"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=gj1-fy>0?gj1-fy:1;break;}
                case 2:
                {
                    cout<<"������ʹ�����ͻ���ɽ�����������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n";sm-=gj2-fy>0?gj2-fy:1;
                    cout<<"�ֶ�������˳���˺�"<<(gj3-fy>0?gj3-fy:1)<<"��\n";sm-=gj3-fy>0?gj3-fy:1;
                    break;
                }
                case 3:
                {
                    int a;
                    a=rand()%5+1;
                    cout<<"������ʹ���˻�Хɽ�֣����������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n",sm-=gj2-fy>0?gj2-fy:1;
                    for(int i=1;i<=a;i++)cout<<"�ನ�ֶ��������3���˺�\n",sm-=3;
                }
            }
        }
        SB:if(lmf)lmf=false;
        mf+=5;
        if(sm<1)
        {
        	ofstream fout("����--������.txt");
            cout<<"��������������!\n";fout<<"0"<<endl;
            fout.close();
            system("pause");
            return;
        }
        if(dx<1)
        {
        	ofstream fout("����--������.txt");
            cout<<"�㽫�����������!\n";fout<<"1"<<endl;
            system("pause");
            fout.close();
            return;
        }
        JX:
        	getgreen;
        	if(dx<=75)getyellow;
        	if(dx<=30)getred;
			cout<<"����������:"<<dx;
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
            case 1:{cout<<"��Ե��������"<<gj*tybj<<"���˺�\n";dx-=gj*tybj;tybj=1;break;}
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
        cout<<"��սʤ��������!\n";
        fout<<"1"<<endl;
    }
    else cout<<"��������������!\n",fout<<"0"<<endl;
    system("pause");
	fout.close();
    return;
}
void TCS()
{
	bool xy=false;
	int gj1=24,gj2=12,gj3=18;
	int sj;
	srand(time(0));
	int xz,dx=170;
	system("cls");
	printf("��BOSS��顿\n"
			"ţ��һͷ�����������ֵܣ�ͬΪ��֮�������£������ǽ���ɱ���ӣ����տ಻���ԡ�\n"
			"����û�ص㡿\n"
			"��ȸ��\n"
			"�����ܽ��ܡ�\n"
			"����������������������й������Է�Χ�ڵ��������˺���\n"
			"��ţ��ײ����ǰ����ײ������ײ���������ɶ���˺�\n"
			"�ض�ɽҡ���Ͳȵ��棬����һ���޴���𲨣�����50%������ѣ���\n"
			"��������Ʒ��\n"
			"����:50\n���:3\n");
	while(dx>0&&sm>0)
	{
		system("pause");
		system("cls");
		cout<<"\t\t\t����ȸ�֡�\n";
		if(zs>0)
		{
		    cout<<"�ش�ʿ�ܵ�"<<gj*tybj<<"�������˺�\n";
		    zs--;
		    dx-=gj*tybj;
		}
		if(!jgz&&gj1==12)gj1=24,gj2=12,gj3=18;
        if(jgz)
        {
        	if(gj1==24)gj1/=2,gj2/=2,gj3/=2;
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
		    sj=rand()%3+1;
		    switch(sj)
		    {
		        case 1:{cout<<"�ش�ʿʹ����������������������"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);break;}
		        case 2:
		        {
		            int a;
		            a=rand()%4+1;
		            for(int i=1;i<=a;i++)cout<<"�ش�ʿʹ������ţ��ײ�����������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n",sm-=(gj2-fy>0?gj2-fy:1);
		            break;
		        }
		        case 3:
		        {
		            int sj2;
		            sj2=rand()%100+1;
		            cout<<"�ش�ʿʹ���˵ض�ɽҡ�����������"<<(gj3-fy>0?gj3-fy:1)<<"���˺�\n",sm-=(gj3-fy>0?gj3-fy:1);
		            if(sj2<50)cout<<"��ʹ����ѣ1�غ�\n",xy=true;
		            break;
		        }
		    }
		}
		SB:if(lmf)lmf=false;
		mf+=5;
		if(sm<1)
		{
			ofstream fout("����--������.txt");
		    cout<<"�ش�ʿ��������!\n";fout<<"0"<<endl;
		    system("pause");
		    fout.close();
		    return;
		}
		if(dx<1)
		{
			ofstream fout("����--������.txt");
		    cout<<"�㽫�ش�ʿ�����!\n";fout<<"1"<<endl;
		    system("pause");
		    fout.close();
		    return;
		}
		JX:getgreen;
        	if(dx<=85)getyellow;
        	if(dx<=42)getred;
			cout<<"�ش�ʿ����:"<<dx;
			getgreen;
			if(sm<=zsm/2)getyellow;
  			if(sm<=zsm/4)getred;
			cout<<"\t"<<name<<"����:"<<sm<<"\t";
			getblue;
			cout<<name<<"ħ��:"<<mf<<endl;
			getwhite;
		if(xy)
		{
		    cout<<"�㴦��ѣ��״̬���޷�����!\n";
		    xy=false;
		}
		else
		{
		    cout<<"1����ͨ����\n";
		    cout<<"2��ʹ�ü���\n";
		    cout<<"3������\n";
		    cout<<"\t\n\t\t��ѡ��:";
		    xz=read();
		    int xxz;
		    switch(xz)
		    {
		        case 1:{cout<<"��Ե��������"<<gj*tybj<<"���˺�\n";dx-=gj*tybj;tybj=1;break;}
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
	}
	ofstream fout("����--������.txt");
	if(dx<1)
	{
		cout<<"��սʤ���ش�ʿ!\n";
		fout<<"1"<<endl;
	}
	else cout<<"�ش�ʿ��������!\n",fout<<"0"<<endl;
	system("pause");
	fout.close();
	return;
}
void XZF()
{
	int gj1=31,gj2=28;
	int sj;
	srand(time(0));
	int xz,dx=200;
	system("cls");
	printf("��BOSS��顿\n"
			"ѲɽС���֣���ͷ��������������Ѳɽ��Ѳ����ɽѲ��ɽ��������\n"
			"����û�ص㡿\n"
			"���ǽ�\n"
			"�����ܽ��ܡ�\n"
			"�����ģ�ʹ�ð������࣬����������Χ������\n"
			"��ת����ҡ�����ϵ����ӣ�����һ�������ֱ���ƶ���\n"
			"��������Ʒ��\n"
			"����:70\n���:4\n");
	while(dx>0&&sm>0)
	{
	    system("pause");
	    system("cls");
	    cout<<"\t\t\t�����ǽ֡�\n";
	    if(zs>0)
	    {
	        cout<<"С����ܵ�"<<gj*tybj<<"�������˺�\n";
	        zs--;
	        dx-=gj*tybj;
	    }
	    if(!jgz&&gj2==14)gj1=31,gj2=28;
        if(jgz)
        {
        	if(gj2==28)gj1/=2,gj2/=2;
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
	            case 1:{cout<<"С���ʹ���������ģ����������"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);break;}
	            case 2:
	            {
	                int sj2;
	                sj2=rand()%10+10;
	                cout<<"С���ʹ������ת�������������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n";sm-=(gj2-fy>0?gj2-fy:1);
	                cout<<"�ֶ�������������˺�"<<(sj2-fy>0?sj2-fy:1)<<"��\n";sm-=(sj2-fy>0?sj2-fy:1);
	                break;
	            }
	        }
	    }
	    SB:if(lmf)lmf=false;
	    mf+=5;
	    if(sm<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"С��罫������!\n";fout<<"0"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    if(dx<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"�㽫С�������!\n";fout<<"1"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    JX:getgreen;
        	if(dx<=100)getyellow;
        	if(dx<=50)getred;
			cout<<"С�������:"<<dx;
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
	        case 1:{cout<<"��Ե��������"<<gj*tybj<<"���˺�\n";dx-=gj*tybj;tybj=1;break;}
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
	    cout<<"��սʤ��С���!\n";
	    fout<<"1"<<endl;
	}
	else cout<<"С��罫������!\n",fout<<"0"<<endl;
	system("pause");
	fout.close();
	return;
}
void GJY()
{
	bool bgyx=false,gklh=false;
	int gj1=30;
	int sj;
	srand(time(0));
	int xz,dx=250;
	system("cls");
	printf("��BOSS��顿\n"
			"���������Ϊ����Ϊ�Ϸ��ڶ��ޣ������ޣ������ţ��ʶ��ס�\n"
			"����û�ص㡿\n"
			"����\n"
			"�����ܽ��ܡ�\n"
			"�����û�������ܵ�������ʱ����30%�ĸ������ܴ˹�����(��������)\n"
			"�ٹ�ҹ�У����Ϸɳ�����꣬���Ź������ת�����������������(��ķ����������ã�������һ�غϡ�)��\n"
			"����Ǻ�����Ҽ���50%������(����һ�غ�)�����ܵ��˺���\n"
			"��������Ʒ��\n"
			"����:80\n���:4\n");
	while(dx>0&&sm>0)
	{
	    system("pause");
	    system("cls");
	    cout<<"\t\t\t�����С�\n";
	    if(zs>0)
	    {
	        cout<<"������ܵ�"<<gj*tybj<<"�������˺�\n";
	        if(bgyx)cout<<"ͬʱ��Ҳ�ܵ�"<<tybj*gj<<"���˺�\n";sm-=gj*tybj;
	        zs--;
	        dx-=gj*tybj;
	    }
	    if(gklh)gj*=2;
	    bgyx=false;gklh=false;
	    if(!jgz&&gj1==15)gj1=30;
        if(jgz)
        {
        	if(gj1==30)gj1/=2;
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
	            case 1:{cout<<"�����ʹ���˰ٹ�ҹ��,����ʹ���ܵ�100%���˺�\n";bgyx=true;break;}
	            case 2:{cout<<"�����ʹ���˹���Ǻ�,��Ĺ�������Ϊ"<<gj/2<<"���ܵ�"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);gj/=2;gklh=true;break;}
	        }
	    }
	    SB:if(lmf)lmf=false;
	    mf+=5;
	    if(sm<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"�����������!\n";fout<<"0"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    if(dx<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"�㽫���������!\n";fout<<"1"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    JX:getgreen;
        	if(dx<=125)getyellow;
        	if(dx<=62)getred;
			cout<<"���������:"<<dx;
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
	    bool sb=(rand()%100+1)<30?1:0;
	    switch(xz)
	    {
	        case 1:
			{
				if(!sb){cout<<"��Ե��������"<<gj*tybj<<"���˺�\n";dx-=gj*tybj;if(bgyx)cout<<"ͬʱ��Ҳ�ܵ�"<<gj*tybj<<"���˺�\n",sm-=gj*tybj;}
				else cout<<"�����ʹ�������û��,���ܴ˹���\n";
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
    			if(bgyx)cout<<"ͬʱ��Ҳ�ܵ�"<<sh<<"���˺�\n",sm-=sh;
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
	    cout<<"��սʤ�˹����!\n";
	    fout<<"1"<<endl;
	}
	else cout<<"�����������!\n",fout<<"0"<<endl;
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
    	case 1:{YJJ();break;}
    	case 2:{TCS();break;}
    	case 3:{XZF();break;}
    	case 4:{GJY();break;}
	}
	return 0;
}
