#include<bits/stdc++.h>
#include<windows.h>
#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
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
bool WL=false;
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
void BOSS()
{
	tybj=1;jgz=zs=lmf=0;
	int gj1=66,gj2=45;
    int sj;
    int hxjf=0;
    srand(time(0));
    int xz,dx=500;
	system("cls");
	cout<<"���ȣ�5/5\n";Sleep(1000);
	getred;cout<<"\t\t\t���棺ǰ�����ܣ�\n";Sleep(2000);
	cout<<"��BOSS��顿\n";
	getpink;cout<<"��֮���ף�ʮ������֮һ����ͨ������ͷ�֮��ǰ��������Ϊ��һ����\n���գ����滢���������ۣ�����˫��������ߣ����������������֮���ס�\n";
	getred;cout<<"����û�ص㡿\n";
	getgreen;cout<<"δ�빬\n";
	getred;cout<<"�����ܽ��ܡ�\n";
	getyellow;cout<<"������Ϣ������������ڵķ��򣬷����һ�����򣬹���������ɾ޴��˺�\n";
	getdarkblue;cout<<"�����޸����ڵͿմ������������ƶ�(�������غ�)����ұ�����������ܵ��˺�(��ͨ������20%�ĸ��ʴ����)\n";
	getred;cout<<"��������Ʒ��\n";
	getblue;cout<<"BOSS�ᾧ*2\n";
	getwhite;
	while(dx>0&&sm>0)
    {
        system("pause");
        system("cls");
        cout<<"\t\t\t��δ�빬��\n";
        if(zs>0)
        {
            cout<<"��֮�����ܵ�"<<gj*tybj<<"�������˺�\n";
            zs--;
            dx-=gj*tybj;
        }
        if(hxjf>0)
        {
        	hxjf--;
        	cout<<"�����޸����������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n";sm-=gj2-fy>0?gj2-fy:1;
		}
		if(!jgz&&gj1==33)gj1=60,gj2=45;
        if(jgz)
        {
        	if(gj1==30)gj1/=2,gj2/=2;
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
                case 1:{cout<<"��֮����ʹ���˽�����Ϣ�����������"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=gj1-fy>0?gj1-fy:1;break;}
                case 2:
                {
                    cout<<"��֮����ʹ���˻����޸�\n";hxjf=2;
                    break;
                }
            }
        }
        SB:if(lmf)lmf=false;
        mf+=5;
        if(sm<1)
        {
            cout<<"��֮���׽�������!\n";system("pause");
            return;
        }
        if(dx<1)
        {
            cout<<"�㽫��֮���״����!\n";
            system("pause");
            WL=true;
            return;
        }
        JX:
        	getgreen;
        	if(dx<=250)getyellow;
        	if(dx<=125)getred;
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
				int sj222=rand()%100+1;
				if(sj222<=20)hxjf=0;
				cout<<"��Ե��������"<<gj*tybj<<"���˺�\n";dx-=gj*tybj;tybj=1;break;
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
            	system("pause");
                return;
            }
        }
    }
    if(dx<1)
    {
        cout<<"��սʤ�˽�֮����!\n";
        WL=true;
        system("pause");
		return;
    }
    else cout<<"��֮���׽�������!\n",system("pause");
	return;
}
void GJY()
{
	tybj=1;jgz=zs=lmf=0;
	bool bgyx=false,gklh=false;
	int gj1=40;
	int sj;
	srand(time(0));
	int xz,dx=300;
	system("cls");
	cout<<"���ȣ�4/5\n";Sleep(1000);
	printf("��Orz��������顿\n"
			"Orz�����������Ϊ����Ϊ�Ϸ��ڶ��ޣ������ޣ������ţ��ʶ��ס�\n"
			"����û�ص㡿\n"
			"δ�빬����\n"
			"�����ܽ��ܡ�\n"
			"Orz�������û�������ܵ�������ʱ����40%�ĸ������ܴ˹�����(��������)\n"
			"Orz���ٹ�ҹ�У����Ϸɳ�����꣬���Ź������ת�����������������(��ķ����������ã�������һ�غϡ�)��\n"
			"Orz������Ǻ�����Ҽ���50%������(����һ�غ�)�����ܵ��޴��˺���\n"
			"��������Ʒ��\n"
			"Ѫƿ*1(��25������)\n");
	while(dx>0&&sm>0)
	{
	    system("pause");
	    system("cls");
	    cout<<"\t\t\t��δ�빬���š�\n";
	    if(zs>0)
	    {
	        cout<<"Orz��������ܵ�"<<gj*tybj<<"�������˺�\n";
	        if(bgyx)cout<<"ͬʱ��Ҳ�ܵ�"<<tybj*gj<<"���˺�\n";sm-=gj*tybj;
	        zs--;
	        dx-=gj*tybj;
	    }
	    if(gklh)gj*=2;
	    bgyx=false;gklh=false;
	    if(!jgz&&gj1==20)gj1=40;
        if(jgz)
        {
        	if(gj1==40)gj1/=2;
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
	            case 1:{cout<<"Orz�������ʹ����Orz���ٹ�ҹ��,����ʹ���ܵ�100%���˺�\n";bgyx=true;break;}
	            case 2:{cout<<"Orz�������ʹ����Orz������Ǻ�,��Ĺ�������Ϊ"<<gj/2<<"���ܵ�"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);gj/=2;gklh=true;break;}
	        }
	    }
	    SB:if(lmf)lmf=false;
	    mf+=5;
	    if(sm<1)
	    {
	        cout<<"Orz�������������!\n";
	        system("pause");
	        return;
	    }
	    if(dx<1)
	    {
	        cout<<"�㽫Orz�����������!\n";
	        sm+=25;
	        system("pause");
	        BOSS();
	        return;
	    }
	    JX:getgreen;
        	if(dx<=150)getyellow;
        	if(dx<=75)getred;
			cout<<"Orz�����������:"<<dx;
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
	    bool sb=(rand()%100+1)<40?1:0;
	    switch(xz)
	    {
	        case 1:
			{
				if(!sb){cout<<"��Ե��������"<<gj*tybj<<"���˺�\n";dx-=gj*tybj;if(bgyx)cout<<"ͬʱ��Ҳ�ܵ�"<<gj*tybj<<"���˺�\n",sm-=gj*tybj;}
				else cout<<"Orz�������ʹ��Orz�������û��,���ܴ˹���\n";
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
	        	system("pause");
	            return;
	        }
	    }
	}
	if(dx<1)
	{
	    cout<<"��սʤ��Orz�������!\n";
	    sm+=25;
	    system("pause");
	    BOSS();
	}
	else cout<<"Orz�������������!\n",system("pause");
	return;
}
void XZF()
{
	tybj=1;jgz=zs=lmf=0;
	int gj1=35,gj2=32;
	int sj;
	srand(time(0));
	int xz,dx=270;
	system("cls");
	cout<<"���ȣ�3/5\n";Sleep(1000);
	printf("��Orz��С����顿\n"
			"ѲɽС���֣���ͷ��������������Ѳɽ��Ѳ����ɽѲ��ɽ��������\n"
			"����û�ص㡿\n"
			"δ�빬����\n"
			"�����ܽ��ܡ�\n"
			"Orz�������ģ�ʹ�ð������࣬����������Χ������\n"
			"Orz����ת����ҡ�����ϵ����ӣ�����һ�������ֱ���ƶ���\n"
			"��������Ʒ��\n"
			"Ѫƿ*1(��25������)\n");
	while(dx>0&&sm>0)
	{
	    system("pause");
	    system("cls");
	    cout<<"\t\t\t��δ�빬���š�\n";
	    if(zs>0)
	    {
	        cout<<"Orz��С����ܵ�"<<gj*tybj<<"�������˺�\n";
	        zs--;
	        dx-=gj*tybj;
	    }
	    if(!jgz&&gj2==16)gj1=35,gj2=32;
        if(jgz)
        {
        	if(gj2==32)gj1/=2,gj2/=2;
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
	            case 1:{cout<<"Orz��С���ʹ����Orz�������ģ����������"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);break;}
	            case 2:
	            {
	                int sj2;
	                sj2=rand()%10+10;
	                cout<<"Orz��С���ʹ����Orz����ת�������������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n";sm-=(gj2-fy>0?gj2-fy:1);
	                cout<<"�ֶ��������Orz�������˺�"<<(sj2-fy>0?sj2-fy:1)<<"��\n";sm-=(sj2-fy>0?sj2-fy:1);
	                break;
	            }
	        }
	    }
	    SB:if(lmf)lmf=false;
	    mf+=5;
	    if(sm<1)
	    {
	    	ofstream fout("����--������.txt");
	        cout<<"Orz��С��罫������!\n";fout<<"0"<<endl;
	        system("pause");
	        fout.close();
	        return;
	    }
	    if(dx<1)
	    {
	        cout<<"�㽫Orz��С�������!\n";
	        sm+=25;
	        system("pause");
	        GJY();
	        return;
	    }
	    JX:getgreen;
        	if(dx<=130)getyellow;
        	if(dx<=65)getred;
			cout<<"Orz��С�������:"<<dx;
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
	        	system("pause");
	            return;
	        }
	    }
	}
	ofstream fout("����--������.txt");
	if(dx<1)
	{
	    cout<<"��սʤ��Orz��С���!\n";
	    sm+=25;
	    system("pause");
	    GJY();
	}
	else cout<<"Orz��С��罫������!\n",system("pause");
	return;
}
void TCS()
{
	tybj=1;jgz=zs=lmf=0;
	bool xy=false;
	int gj1=30,gj2=20,gj3=20;
	int sj;
	srand(time(0));
	int xz,dx=250;
	system("cls");
	cout<<"���ȣ�2/5\n";Sleep(1000);
	printf("��Orz���ش�ʿ��顿\n"
			"ţ��һͷ��Orz�����������ֵܣ�ͬΪ��֮�������£���δ�빬������ɱ���ӣ����տ಻���ԡ�\n"
			"����û�ص㡿\n"
			"δ�빬����\n"
			"�����ܽ��ܡ�\n"
			"Orz������������������������й������Է�Χ�ڵ��������˺���\n"
			"Orz����ţ��ײ����ǰ����ײ������ײ���������ɶ���˺�\n"
			"Orz���ض�ɽҡ���Ͳȵ��棬����һ���޴���𲨣�����70%������ѣ���\n"
			"��������Ʒ��\n"
			"Ѫƿ*1(��25������)\n");
	while(dx>0&&sm>0)
	{
		system("pause");
		system("cls");
		cout<<"\t\t\t��δ�빬���š�\n";
		if(zs>0)
		{
		    cout<<"Orz���ش�ʿ�ܵ�"<<gj*tybj<<"�������˺�\n";
		    zs--;
		    dx-=gj*tybj;
		}
		if(!jgz&&gj1==15)gj1=30,gj2=20,gj3=20;
        if(jgz)
        {
        	if(gj1==30)gj1/=2,gj2/=2,gj3/=2;
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
		        case 1:{cout<<"Orz���ش�ʿʹ����Orz��������������������"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=(gj1-fy>0?gj1-fy:1);break;}
		        case 2:
		        {
		            int a;
		            a=rand()%4+1;
		            for(int i=1;i<=a;i++)cout<<"Orz���ش�ʿʹ����Orz����ţ��ײ�����������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n",sm-=(gj2-fy>0?gj2-fy:1);
		            break;
		        }
		        case 3:
		        {
		            int sj2;
		            sj2=rand()%100+1;
		            cout<<"Orz���ش�ʿʹ����Orz���ض�ɽҡ�����������"<<(gj3-fy>0?gj3-fy:1)<<"���˺�\n",sm-=(gj3-fy>0?gj3-fy:1);
		            if(sj2<70)cout<<"��ʹ����ѣ1�غ�\n",xy=true;
		            break;
		        }
		    }
		}
		SB:if(lmf)lmf=false;
		mf+=5;
		if(sm<1)
		{
		    cout<<"Orz���ش�ʿ��������!\n";
			system("pause");
			return;
		}
		if(dx<1)
		{
		    cout<<"�㽫Orz���ش�ʿ�����!\n";
		    sm+=25;
		    system("pause");
		    XZF();
		    return;
		}
		JX:getgreen;
        	if(dx<=125)getyellow;
        	if(dx<=62)getred;
			cout<<"Orz���ش�ʿ����:"<<dx;
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
		        	system("pause");
		            return;
		        }
		    }
		}
	}
	if(dx<1)
	{
		cout<<"��սʤ��Orz���ش�ʿ!\n";
		sm+=25;
		system("pause");
		XZF();
	}
	else cout<<"Orz���ش�ʿ��������!\n",system("pause");
	return;
}
void YJJ()
{
	tybj=1;jgz=zs=lmf=0;
	int gj1=30,gj2=20,gj3=25;
    int sj;
    srand(time(0));
    int xz,dx=200;
	system("cls");
	cout<<"���ȣ�1/5\n";Sleep(1000);
    printf("��Orz����������顿\n"
			"����һֻ������Ͷ����֮���ף���ڼOrz��������������ȸ�ִ�Ϊ����Ϊ�������¥����������\n"
			"����û�ص㡿\n"
			"δ�빬����\n"
			"�����ܽ��ܡ�\n"
			"Orz����צ���ģ���˫צ���й�������ǰ����Χ�ڵ������ɾ޴��˺���\n"
			"Orz���ͻ���ɽ����ǰ�Ϸ�Ծ��󣬶��·��ĵ��˽�������,������غ��ٴ���ɳ���˺���"
			"Orz����Хɽ�֣������޴��ŭ�𣬶���Χ�������ɶ���˺���\n"
			"��������Ʒ��\n"
			"Ѫƿ*1(��25������)\n");
	while(dx>0&&sm>0)
    {
        system("pause");
        system("cls");
        cout<<"\t\t\t��δ�빬���š�\n";
        if(zs>0)
        {
            cout<<"Orz���������ܵ�"<<gj*tybj<<"�������˺�\n";
            zs--;
            dx-=gj*tybj;
        }
		if(!jgz&&gj1==15)gj1=30,gj2=20,gj3=25;
        if(jgz)
        {
        	if(gj1==30)gj1/=2,gj2/=2,gj3/=2;
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
                case 1:{cout<<"Orz��������ʹ����Orz����צ���ģ����������"<<(gj1-fy>0?gj1-fy:1)<<"���˺�\n";sm-=gj1-fy>0?gj1-fy:1;break;}
                case 2:
                {
                    cout<<"Orz��������ʹ����Orz���ͻ���ɽ�����������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n";sm-=gj2-fy>0?gj2-fy:1;
                    cout<<"�ֶ��������Orz������˺�"<<(gj3-fy>0?gj3-fy:1)<<"��\n";sm-=gj3-fy>0?gj3-fy:1;
                    break;
                }
                case 3:
                {
                    int a;
                    a=rand()%5+1;
                    cout<<"Orz��������ʹ����Orz����Хɽ�֣����������"<<(gj2-fy>0?gj2-fy:1)<<"���˺�\n",sm-=gj2-fy>0?gj2-fy:1;
                    for(int i=1;i<=a;i++)cout<<"Orz���ನ�ֶ��������5���˺�\n",sm-=5;
                }
            }
        }
        SB:if(lmf)lmf=false;
        mf+=5;
        if(sm<1)
        {
            cout<<"Orz����������������!\n";system("pause");
            return;
        }
        if(dx<1)
        {
            cout<<"�㽫Orz�������������!\n";
            sm+=25;
            system("pause");
            TCS();
            return;
        }
        JX:
        	getgreen;
        	if(dx<=100)getyellow;
        	if(dx<=50)getred;
			cout<<"Orz������������:"<<dx;
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
            	system("pause");
                return;
            }
        }
    }
    if(dx<1)
    {
        cout<<"��սʤ��Orz��������!\n";
        sm+=25;
        system("pause");
        TCS();
    }
    else cout<<"Orz����������������!\n",system("pause");
	return;
}
int main()
{
	ifstream fin("���븱��.txt");
	fin>>name>>zsm>>sm>>gj>>fy>>mf;
	fin.close();
	YJJ();
	ofstream fout("����--������.txt");
	if(WL==true)fout<<1<<endl;
	else fout<<0<<endl;
	fout.close();
	return 0;
}
