#include<bits/stdc++.h>
#include<windows.h>
#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
#define c1 cout<<"����ȡ\n";else cout<<"δ��ȡ\n";
#define c2 else cout<<"��ȡʧ��\n";system("pause");break;
#define c3 cout<<"��ȷ�����������ʹ�ã�\n"
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
int year,month,day,hour,minute,second;
int syear,smonth,sday,ylsj=0;
char aa[1010];
string mm1,mm2;string mm,zzh,tmm;
int gjjs,fyjs,spjs;//����
bool qth[11],pd,zdbc=1;
string nowwq="silly",nowfj="silly",nowsp="silly";
struct l_1
{
    string mz;
    int level,jy,gj,sm,fy,mf,gjzjc,fyzjc,jb,jyls,smzjc;
    int zsm,mfzjc;
    int zbsmjc,zbfyjc,zbgjjc,zbmfjc;
}p;//player
struct l_2{
    bool sfkq;
    string mz;
}xg[101],boss[101];/*С��*/
struct l_3{
    string mz;
    int jc1,jc2,jg,pz;
}gjsp[101],fysp[101],sp[101],BOSSsp[101];
struct l_4{
	string name;
	int hm;
}jin[101];
struct l_5{
	string mz;//����
	int jc;//�ӳ�/����
}gjzb[110],fyzb[110],spzb[110],dj[110];//����
int x1;
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
void zh()
{
    char b[4]={'.','t','x','t'};
    string zh;
    int xz;
    JX2:system("cls");
    cout<<"��¼��1��ע�ᰴ2\n";
    xz=read();if(xz==2)
    {
        cout<<"�������˺���:\n";
        cin>>aa;
        ifstream fin("�����˺�.txt");
        while(fin>>zh)
        {
            if(zh==aa)
            {
                cout<<"�����˺ţ��Ƿ񸲸�?\n����:0\t������:1\n��ѡ��:";
                int xz;
                xz=read();
                if(!xz)break;
                else goto JX2;
            }
        }
        ofstream fout("�����˺�.txt",ios::app);
        fout<<aa<<endl;fout.close();strncat(aa,b,4);
        CS:cout<<"����������:";cin>>mm1;
        cout<<"������һ��:";cin>>mm2;
        if(mm1==mm2)cout<<"ע��ɹ���\n",x1=1,tmm=mm1;
        else {cout<<"������������벻һ�£����������룡\n",system("pause");goto CS;} 
        ofstream fout1(aa);
        fout1<<mm1;
        fout1.close();
    }
    else
    {
        bool th=false;
        cout<<"�����˺���:";cin>>aa;
        ifstream fin("�����˺�.txt");
        while(fin>>zzh)
        {
            if(zzh==aa){th=true;break;} 
        }
        if(!th){cout<<"û������˺�!\n",system("pause");goto JX2;} 
        else
        {
            strncat(aa,b,4);
            ifstream fin(aa);
            fin>>tmm>>p.mz>>p.level>>p.jy>>p.gjzjc>>p.fyzjc>>p.smzjc>>p.mfzjc>>p.jb>>syear>>smonth>>sday>>ylsj;
            fin>>zdbc;
            for(int i=1;i<=10;i++)fin>>qth[i];
            for(int i=1;i<=100;i++)fin>>xg[i].sfkq;
            for(int i=1;i<=50;i++)fin>>boss[i].sfkq;
			for(int i=1;i<=100;i++)fin>>dj[i].jc;
			fin>>gjjs;
			for(int i=1;i<=gjjs;i++)fin>>gjzb[i].mz>>gjzb[i].jc;
			fin>>fyjs;
			for(int i=1;i<=fyjs;i++)fin>>fyzb[i].mz>>fyzb[i].jc;
			fin>>spjs;
			for(int i=1;i<=spjs;i++)fin>>spzb[i].mz>>spzb[i].jc;
			fin>>nowwq>>nowfj>>nowsp;
			fin>>p.zbgjjc>>p.zbfyjc>>p.zbsmjc>>p.zbmfjc;
            fin.close();
            cout<<"����������:";cin>>mm;
            if(mm==tmm)cout<<"��½�ɹ���\n",x1=0;
            else {cout<<"�������!\n",system("pause");goto JX2;}
        }
    }
}
void save()
{
    ofstream fout(aa);
    int nhour,nminute;
    time_t now_time=time(0);
    struct tm*timeinfo;
    timeinfo=localtime(&now_time);
    nhour=timeinfo->tm_hour;
    nminute=timeinfo->tm_min;
    fout<<tmm<<" "<<p.mz<<" "<<p.level<<" "<<p.jy<<" "<<p.gjzjc<<" "<<p.fyzjc<<" "<<p.smzjc<<" "<<p.mfzjc<<" "<<p.jb<<" "<<year<<" "<<month<<" "<<day<<" "<<(nhour-hour)*60+nminute-minute+ylsj<<endl;
    fout<<zdbc<<endl;
    for(int i=1;i<=10;i++)fout<<qth[i]<<" ";
	fout<<endl;
    for(int i=1;i<=100;i++)fout<<xg[i].sfkq<<" ";fout<<endl;
	for(int i=1;i<=50;i++)fout<<boss[i].sfkq<<" ";fout<<endl;
	for(int i=1;i<=100;i++)fout<<dj[i].jc<<" ";fout<<endl;
	fout<<gjjs<<endl;
	for(int i=1;i<=gjjs;i++)fout<<gjzb[i].mz<<" "<<gjzb[i].jc<<endl;
	fout<<fyjs<<endl;
	for(int i=1;i<=fyjs;i++)fout<<fyzb[i].mz<<" "<<fyzb[i].jc<<endl;
	fout<<spjs<<endl;
	for(int i=1;i<=spjs;i++)fout<<spzb[i].mz<<" "<<spzb[i].jc<<endl;
	fout<<nowwq<<" "<<nowfj<<" "<<nowsp<<endl;
	fout<<p.zbgjjc<<" "<<p.zbfyjc<<" "<<p.zbsmjc<<" "<<p.zbmfjc<<endl;
    fout.close();
}
void qd()
{
    int nhour,nminute;
    time_t now_time=time(0);
    struct tm*timeinfo;
    timeinfo=localtime(&now_time);
    nhour=timeinfo->tm_hour;
    nminute=timeinfo->tm_min;
    system("cls");
    int qxz,onlinetime=(nhour-hour)*60+nminute-minute+ylsj;
    cout<<"��ѡ��:\n";
    cout<<"1������5�������\t״̬:";if(qth[1])c1
    cout<<"2������10�������\t״̬:";if(qth[2])c1
    cout<<"3������20�������\t״̬:";if(qth[3])c1
    cout<<"4������30�������\t״̬:";if(qth[4])c1
    cout<<"5������60�������\t״̬:";if(qth[5])c1
    cout<<"6������90�������\t״̬:";if(qth[6])c1
    cout<<"7������120�������\t״̬:";if(qth[7])c1
    cout<<"8������150�������\t״̬:";if(qth[8])c1
    cout<<"9������170�������\t״̬:";if(qth[9])c1
    cout<<"10������180�������\t״̬:";if(qth[10])c1
    cout<<"11���˳�\n";
    cout<<"12��ˢ��\n"; 
    cout<<"��������:"<<onlinetime<<"����\n";
	qxz=read();
    switch(qxz)
    {
        case 11:{return;break;}
        case 12:{qd();break;}
        case 1:{if(onlinetime>=5&&!qth[1])cout<<"��ȡ�ɹ���������1ö���\n",p.jb++,qth[1]=1;c2}
        case 2:{if(onlinetime>=10&&!qth[2])cout<<"��ȡ�ɹ���������1ö���\n",p.jb++,qth[2]=1;c2}
        case 3:{if(onlinetime>=20&&!qth[3])cout<<"��ȡ�ɹ���������2ö���\n",p.jb+=2,qth[3]=1;c2}
        case 4:{if(onlinetime>=30&&!qth[4])cout<<"��ȡ�ɹ���������2ö���\n",p.jb+=2,qth[4]=1;c2}
        case 5:{if(onlinetime>=60&&!qth[5])cout<<"��ȡ�ɹ���������3ö���\n",p.jb+=3,qth[5]=1;c2}
        case 6:{if(onlinetime>=90&&!qth[6])cout<<"��ȡ�ɹ���������3ö���\n",p.jb+=3,qth[6]=1;c2}
        case 7:{if(onlinetime>=120&&!qth[7])cout<<"��ȡ�ɹ���������4ö���\n",p.jb+=4,qth[7]=1;c2}
        case 8:{if(onlinetime>=150&&!qth[8])cout<<"��ȡ�ɹ���������4ö���\n",p.jb+=4,qth[8]=1;c2}
        case 9:{if(onlinetime>=170&&!qth[9])cout<<"��ȡ�ɹ���������5ö���\n",p.jb+=5,qth[9]=1;c2}
        case 10:{if(onlinetime>=180&&!qth[10])cout<<"��ȡ�ɹ���������5ö���\n",p.jb+=5,qth[10]=1;c2}
        default:{cout<<"what are you doing?\n";system("pause");break;}
    }
}
void chushihua()
{
    GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i=1;i<=100;i++)xg[i].sfkq=false,boss[i].sfkq=false;
    xg[1].sfkq=true;
    xg[1].mz="������";xg[2].mz="�ش�ʿ";xg[3].mz="С���";xg[4].mz="�����";xg[5].mz="���ϻ���";
    gjsp[1].mz="|�����|(���Ƽ��գ�����̹;)";gjsp[1].jg=8;gjsp[1].jc1=1;gjsp[1].jc2=5;gjsp[1].pz=0; 
    gjsp[2].mz="|ĦԸ��|(ָ���ֺ��⣬һ���ƿ���)";gjsp[2].jg=10;gjsp[2].jc1=4;gjsp[2].jc2=8;gjsp[2].pz=0; 
    gjsp[3].mz="|�ޱ���|(�����������£��Შǧ������)";gjsp[3].jg=14;gjsp[3].jc1=5;gjsp[3].jc2=11;gjsp[3].pz=1; 
    fysp[1].mz="|�����|(��Ŀ�����ӣ�����ӳ�չ�)";fysp[1].jg=9;fysp[1].jc1=1;fysp[1].jc2=4;fysp[1].pz=0;
    fysp[2].mz="|ĦԸľ��|(��ɽ��֮�ƣ�ľ���֮)";fysp[2].jg=12;fysp[2].jc1=3;fysp[2].jc2=6;fysp[2].pz=0;
    fysp[3].mz="|�ޱ�ˮ��|(��ˮ�뺣�����˲���)";fysp[3].jg=15;fysp[3].jc1=7;fysp[3].jc2=10;fysp[3].pz=1;
    sp[1].mz="|������|(������磬�ʹ�����)";sp[1].jg=18;sp[1].jc1=10;sp[1].jc2=30;sp[1].pz=0;
    boss[1].mz="��֮����";
    p.gjzjc=0;p.fyzjc=0;p.jy=0;p.level=1;p.jb=0;p.mf=50;p.jyls=50;p.mfzjc=0;
    jin[1].name="����һ��";jin[1].hm=15;jin[2].name="������";jin[2].hm=15;jin[3].name="����籩";jin[3].hm=20;
    jin[4].name="�콵��¶";jin[4].hm=25;jin[5].name="������";jin[5].hm=25;jin[6].name="������";jin[6].hm=30;
    jin[7].name="���۱��";jin[7].hm=30;jin[8].name="��ħ����ն";jin[8].hm=40;jin[9].name="��Գ����";jin[9].hm=45;
	jin[10].name="�������";jin[10].hm=60;
	dj[1].mz="BOSS�ᾧ";dj[2].mz="ħ��ʯ";dj[3].mz="����ʯ";dj[4].mz="��ĩ����";
	BOSSsp[1].mz="ħ��ʯ(ħ������+5)";BOSSsp[1].jg=10;
	BOSSsp[2].mz="����ʯ(��������+30)";BOSSsp[2].jg=10;
}
void shop()
{
	int xxz;
	system("cls");
    cout<<"\t\t\t���̵꡷\n";
    cout<<"\t��Ҫ��ʲô��\n";
    cout<<"1������\n2������\n3����Ʒ\n";
    cout<<"\t\tע:�����ӹ��������߼ӷ�������Ʒ��������\n\n";
    cout<<"��ѡ��:";cin>>xxz;
    system("cls");
    int xzz;
	switch(xxz)
    {
        case 1:
        {
      		cout<<"\t\t\t��������\n";
			for(int i=1;i<=3;i++)
			{
    			cout<<i<<"��"<<gjsp[i].mz<<"  �ӳ�Ϊ"<<gjsp[i].jc1<<"-"<<gjsp[i].jc2<<"(���),�۸�Ϊ:"<<gjsp[i].jg<<"   ";
	    		switch(gjsp[i].pz)
                {
                    case 0:{getwhite;cout<<"Ʒ��:��ͨ"<<endl;break;}
                    case 1:{getgreen;cout<<"Ʒ��:����"<<endl;break;}
                    case 2:{getdarkblue;cout<<"Ʒ��:����"<<endl;break;}
                    case 3:{getdarkpink;cout<<"Ʒ��:ʷʫ"<<endl;break;}
                    case 4:{getyellow;cout<<"Ʒ��:��˵"<<endl;break;}
                    case 5:{getred;cout<<"Ʒ��:����"<<endl;break;}
                }
                getwhite;
            }
            cout<<p.mz<<"�Ľ��:"<<p.jb<<endl;
            cout<<"��ѡ��:";xzz=read();
            if(p.jb<gjsp[xzz].jg)cout<<"��԰����ͣ�\n";
            else
            {
                p.jb-=gjsp[xzz].jg;
                cout<<"������:"<<gjsp[xzz].mz<<endl;
                int sj=rand()%(gjsp[xzz].jc2-gjsp[xzz].jc1+1)+gjsp[xzz].jc1;
                gjzb[++gjjs].mz=gjsp[xzz].mz;gjzb[gjjs].jc=sj;cout<<"�����н��뱳���鿴\n";
            }
            system("pause");
            break;
        }
        case 2:
        {
            cout<<"\t\t\t�����ߡ�\n";
            for(int i=1;i<=3;i++)
            {
                cout<<i<<"��"<<fysp[i].mz<<"  �ӳ�Ϊ"<<fysp[i].jc1<<"-"<<fysp[i].jc2<<"(���),�۸�Ϊ:"<<fysp[i].jg<<"   ";
                switch(fysp[i].pz)
                {
                    case 0:{getwhite;cout<<"Ʒ��:��ͨ"<<endl;break;}
                    case 1:{getgreen;cout<<"Ʒ��:����"<<endl;break;}
                    case 2:{getdarkblue;cout<<"Ʒ��:����"<<endl;break;}
                    case 3:{getdarkpink;cout<<"Ʒ��:ʷʫ"<<endl;break;}
                    case 4:{getyellow;cout<<"Ʒ��:��˵"<<endl;break;}
                    case 5:{getred;cout<<"Ʒ��:����"<<endl;break;}
                }
                getwhite;
            }
            cout<<p.mz<<"�Ľ��:"<<p.jb<<endl;
            cout<<"��ѡ��:";xzz=read();
            if(p.jb<fysp[xzz].jg)cout<<"��԰����ͣ�\n";
            else
            {
                p.jb-=fysp[xzz].jg;
                cout<<"������:"<<fysp[xzz].mz<<endl;
                int sj=rand()%(fysp[xzz].jc2-fysp[xzz].jc1+1)+fysp[xzz].jc1;
                fyzb[++fyjs].mz=fysp[xzz].mz;fyzb[fyjs].jc=sj;cout<<"�����н��뱳���鿴\n";
            }
            system("pause");
            break;
        }
        case 3:
        {
            cout<<"\t\t\t����Ʒ��\n";
            for(int i=1;i<=1;i++)
            {
                cout<<i<<"��"<<sp[i].mz<<"  �ӳ�Ϊ"<<sp[i].jc1<<"-"<<sp[i].jc2<<"(���),�۸�Ϊ:"<<sp[i].jg<<"   ";
                switch(sp[i].pz)
                {
                    case 0:{getwhite;cout<<"Ʒ��:��ͨ"<<endl;break;}
                    case 1:{getgreen;cout<<"Ʒ��:����"<<endl;break;}
                    case 2:{getdarkblue;cout<<"Ʒ��:����"<<endl;break;}
                    case 3:{getdarkpink;cout<<"Ʒ��:ʷʫ"<<endl;break;}
                    case 4:{getyellow;cout<<"Ʒ��:��˵"<<endl;break;}
                    case 5:{getred;cout<<"Ʒ��:����"<<endl;break;}
                }
                getwhite;
            }
            cout<<p.mz<<"�Ľ��:"<<p.jb<<endl;
            cout<<"��ѡ��:";xzz=read();
            if(p.jb<sp[xzz].jg)cout<<"��԰����ͣ�\n",system("pause");
            else
            {
                p.jb-=sp[xzz].jg;
                cout<<"������:"<<sp[xzz].mz<<endl;
                int sj=rand()%(sp[xzz].jc2-sp[xzz].jc1+1)+sp[xzz].jc1;
                spzb[++spjs].mz=sp[xzz].mz;spzb[spjs].jc=sj;cout<<"�����н��뱳���鿴\n";
            }
            system("pause");
            break;
        }
    }
}
void help()
{
	system("cls"); 
	cout<<"\t\t\t����:\n����:�������ѶȽ�Ϊ�򵥣������Ӧ�Ĺ��������Ӧ�ľ���ͽ��\n�̵�:�����ý������\nboss:��һ�����Ѷȣ�5�������Ͽ���ս\n";
	cout<<"�������:������Ӧʱ��ɻ�������ͬһ������ʱ�䲻����ȥ(�˳�Ҳ����),�����ڶ���ͻ���0\n";
	cout<<"����ѡ����<����>��\t����������<����>��\n";
	cout<<"���ڱ���Ϸ������Ϸ�᲻��ʱ����\n����㷢����BUG������ʲô�õĽ��飬��ô���ڡ�www.luogu.org����˽���һ���ĳ��������@��\n\t���ߣ�hulean\n";
	system("pause");
	return;
}
void boss_pd()
{
	if(xg[5].sfkq)boss[1].sfkq=true;
	if(xg[9].sfkq)boss[2].sfkq=true;
	if(xg[13].sfkq)boss[3].sfkq=true;
}
void choose_boss()
{
	system("cls");
	boss_pd();
	int xxxz;
	cout<<"\t\t\t��BOSS��\n";
	cout<<"0��BOSS�̵�\n\n";
	for(int i=1;i<=1;i++)
	{
		cout<<i<<"��"<<boss[i].mz<<"\n";
		cout<<"�Ⱦ�����:\n";
		for(int j=4*i-2;j<=4*i+1;j++)
		{
			cout<<xg[j-1].mz<<":";if(xg[j].sfkq)cout<<"���\n";
			else cout<<"δ���\n";
		}
		cout<<endl;
	}
	cout<<"��ѡ��:"<<endl;
	xxxz=read();
	if(xxxz==0)
	{
		for(int i=1;i<=2;i++)cout<<i<<"��"<<BOSSsp[i].mz<<"\t�۸�:"<<BOSSsp[i].jg<<"BOSS�ᾧ\n";
		int zx=read();
		if(dj[1].jc<BOSSsp[zx].jg){cout<<"������!\n",system("pause");return;}
		dj[1].jc-=BOSSsp[zx].jg;
		switch(zx)
		{
			case 1:{dj[2].jc++;cout<<"���н��뱳���鿴\n";break;}
			case 2:{dj[3].jc++;cout<<"���н��뱳���鿴\n";break;}
			default:{cout<<"what are you doing?\n";break;}
		}
		system("pause");
		return;
	}
	if(!boss[xxxz].sfkq){cout<<"what are you doing?\n",system("pause");return;}
	cout<<"������...\n";
	ofstream fout("���븱��.txt");
	fout<<p.mz<<" "<<p.zsm<<" "<<p.sm<<" "<<p.gj<<" "<<p.fy<<" "<<p.mf<<endl;
	fout.close();
	ifstream fin("����--������.txt");
	bool PD;
	switch(xxxz)
	{
		case 1:{system("��֮����");fin>>PD;if(PD)dj[1].jc+=2,cout<<"������BOSS�ᾧ*2\n";break;}
		default:{cout<<"what are you doing?\n";system("pause");break;}
	}
}
void weekend()
{
	system("cls");
	int dayx,monthx,yearx,wdayx;
    time_t t;
    struct tm*timeinfo;
    time(&t);
    timeinfo=localtime(&t);
    dayx=timeinfo->tm_mday;
    monthx=timeinfo->tm_mon + 1;
    yearx=timeinfo->tm_year + 1900;
    wdayx=timeinfo->tm_wday;
    //cout<<wdayx<<endl;
    if(wdayx==6||wdayx==7)
    {
    	getyellow;
    	cout<<"����󣬽���������䵽����֮���ס�or����ҵ���ס���������ս\n";
    	system("pause");
    	cout<<"������...\n";
    	ofstream fout("���븱��.txt");
		fout<<p.mz<<" "<<p.zsm<<" "<<p.sm<<" "<<p.gj<<" "<<p.fy<<" "<<p.mf<<endl;
		fout.close();
		system("weekend");
		ifstream fin("����--������.txt");
		bool PD;
		if(PD)dj[4].jc+=5;
	}
	else cout<<"Ȼ�����첻����ĩ\n",system("pause");
}
void BAG();
int main()
{
    getwhite;
    int xz;
    chushihua();zh();
    system("pause");system("cls");
    cout<<"\t\t\t<��������v2.8>\n";Sleep(1000);
    time_t now_time=time(0);
    struct tm*timeinfo;
    timeinfo=localtime(&now_time);
    year=1900+timeinfo->tm_year;
    month=1+timeinfo->tm_mon;
    day=timeinfo->tm_mday;
    hour=timeinfo->tm_hour;
    minute=timeinfo->tm_min;
    second=timeinfo->tm_sec;
    if(x1||syear!=year||smonth!=month||sday!=day)memset(qth,false,sizeof(qth)),ylsj=0;
    if(x1)cout<<"����������ǳ�:",cin>>p.mz;
    cout<<"\t\t\t";
    if(hour>=7&&hour<=10)cout<<"�����,";
    else if(hour>=5&&hour<=6)cout<<"���Ϻ�,";
    else if(hour==12||hour==11)cout<<"�����,";
    else if(hour>=13&&hour<=18)cout<<"�����,";
    else cout<<"���Ϻ�,";cout<<p.mz<<endl;
    Sleep(1000);
    while(1)
    {
        p.mf=50+p.mfzjc+p.zbmfjc;
        p.jyls=p.level*50;
        if(p.jy>=p.jyls)p.jy-=p.jyls,p.level++;
        p.jyls=p.level*50;
        p.sm=p.level*5+100+p.smzjc+p.zbsmjc;
        p.gj=p.level*2+10+p.gjzjc+p.zbgjjc;
        p.fy=p.level+3+p.fyzjc+p.zbfyjc;
        p.zsm=p.sm;
        system("cls");
        if(zdbc)save();
        cout<<endl;
        getyellow;cout<<"\t\t     <��������v2.8>\n\n";
        getgreen;cout<<p.mz<<"�ĵȼ�:"<<p.level<<"\t";
   		cout<<p.mz<<"�Ľ��:"<<p.jb<<"\t";
    	cout<<p.mz<<"�ľ���:"<<p.jy<<"/"<<p.jyls<<endl;
	    getred;cout<<"\t\t-------------------------\n";
	    cout<<"\t\t|";getblue;cout<<"\t1������\t\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t2���̵�\t\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t3��BOSS���\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t4��������\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t5�����沢�˳�\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t6������\t\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t7������\t\t";getred;cout<<"|\n";
		cout<<"\t\t|";getblue;cout<<"\t8������\t\t";getred;cout<<"|\n";
		cout<<"\t\t-------------------------\n";
		getpink;cout<<setw(30)<<"��ѡ��:";
		getwhite;
        xz=read();
        int xxz;
        switch(xz)
        {
            case 1:
            {
            	system("cls");
                cout<<"\t\t\t��������\n";
                for(int i=1;i<=5;i++)
				{
                    if(xg[i].sfkq)cout<<i<<"��"<<xg[i].mz<<endl;
                }
                cout<<"\n\n";
                cout<<"\t��ѡ��:";
                xxz=read();
                ofstream fout("���븱��.txt");
                if(xxz%4==0)fout<<4<<" ";
                else fout<<xxz%4<<" ";
                fout<<p.mz<<" "<<p.zsm<<" "<<p.sm<<" "<<p.gj<<" "<<p.fy<<" "<<p.mf<<endl;
                fout.close();
				cout<<"������......\n";
                ifstream fin("����--������.txt");
                switch(xxz)
                {
                    case 1:{system("1-4");fin>>pd;if(pd)p.jy+=30,p.jb+=2,xg[2].sfkq=true;break;}
                    case 2:{if(!xg[2].sfkq){cout<<"what are you doing?\n";system("pause");break;}system("1-4");fin>>pd;if(pd)p.jy+=50,p.jb+=3,xg[3].sfkq=true;break;}
                    case 3:{if(!xg[3].sfkq){cout<<"what are you doing?\n";system("pause");break;}system("1-4");fin>>pd;if(pd)p.jy+=70,p.jb+=4,xg[4].sfkq=true;break;}
                    case 4:{if(!xg[4].sfkq){cout<<"what are you doing?\n";system("pause");break;}system("1-4");fin>>pd;if(pd)p.jy+=80,p.jb+=4,xg[5].sfkq=true;break;}
                    case 5:{if(!xg[5].sfkq){cout<<"what are you doing?\n";system("pause");break;}system("5-8");fin>>pd;if(pd)p.jy+=90,p.jb+=5,xg[6].sfkq=true;break;}
					default:{cout<<"what are you doing?\n";system("pause");break;}
                }
                fin.close();
                break;
            }
            case 2:{shop();break;}
            case 3:{if(p.level<5)cout<<"�ȼ�����5�����Ժ�����\n",system("pause");else choose_boss();break;}
            case 4:
				{
					system("cls");
					cout<<"1���������\n2����ĩ�\n";
					int xxzz;
					xxzz=read();
					switch(xxzz)
					{
						case 1:{qd();break;}
						case 2:{weekend();break;}
						default:{cout<<"what are you doing?\n";system("pause");break;}
					}
					break;
				}
            case 5:{save();return 0;}
            case 6:{help();break;}
            case 7:
			{
				system("cls");
            	cout<<"\t\t\t�����á�\n";
            	cout<<"1����������\n2���Զ�����\n3������\n";
            	xxz=read();
            	switch(xxz)
            	{
            		case 1:
            		{
            			int jin1,jin2,jin3,jin4;
            			system("cls");
            			cout<<"\t\t\t��ѡ����ҳ�桷\n";
            			for(int i=1;i<=10;i++)
            			{
            				cout<<i<<"������:"<<jin[i].name<<"    ��ħ:"<<jin[i].hm<<endl; 
						}
						cout<<"\n\n������˵����\n";
						printf( "����һ�������2���˺�\n"
								"�����������1���˺�������������һ�غ�\n"
								"����籩�����2���˺�����ÿ�غϿ۳�����1*������Ѫ�����������غ�\n"
								"�콵��¶���ظ�40%������\n"
								"�����䣺ʹ�������������غ��ڹ������۳�50%\n"
								"��������ʹ��3�غ��������ʱ�Ϊ50%\n"
								"���۱�ǣ��Ե��˽��б�ǣ�ʹ��һ�غ���ɵ��˺����3��\n"
								"��ħ����ն�����3���˺������γ�����\n"
								"��Գ���������4���˺����γ�������\n"
								"������𣺴��5���˺����γ����۱�ǣ�����1%�ļ�����ɱ����\n");
						cout<<"\n\n��ѡ��4�����ܴ�����(�ÿո�ָ�����ѡ�������ظ����ܻ�ѡ��û�еļ��ܣ�����Լ��е���)��\n";
						jin1=read();jin2=read();jin3=read();jin4=read();
						ofstream fout("����.txt");
						fout<<jin1<<" "<<jin2<<" "<<jin3<<" "<<jin4<<endl;
						break; 
					} 
            		case 2:
					{
						int xzx;
						cout<<"\n\n\t\t\t�Զ����湦�ܴ��ڡ�";
						if(zdbc)cout<<"����";else cout<<"�ر�";
						cout<<"��״̬\n";cout<<"�Ƿ���/�رգ�\n1����\n2����\n";
						xzx=read();
						if(xzx==1)zdbc=!zdbc,cout<<"\n\t\t\t�ɹ���\n";
						system("pause");
						break;
					}
				}
				break;
			}
			case 8:{BAG();break;}
            default:{cout<<"what are you doing?\n";system("pause");break;}
        }
    }
    return 0;
}
void BAG()
{
	system("cls");
	cout<<"����Ϊ�������ϣ������ͺ�\n";
	getgreen;cout<<p.mz<<"�ĵȼ�:"<<p.level<<"\n"<<p.mz<<"��Ѫ��:"<<p.sm<<"\n"<<p.mz<<"��ħ��:"<<p.mf<<"\n";
    cout<<p.mz<<"�Ĺ���:"<<p.gj<<"\n"<<p.mz<<"�ķ���:"<<p.fy<<"\n"<<p.mz<<"�Ľ��:"<<p.jb<<"\n";
    cout<<p.mz<<"�ľ���:"<<p.jy<<"/"<<p.jyls<<endl;
    getwhite;
    cout<<"���뱳����1\n������ҳ��2\n��ѡ��:";
	int xzx=read();
	if(xzx==2)return;
	system("cls");
	cout<<"\t\t��ǰ������";
	if(nowwq=="silly")cout<<"��";
	else cout<<nowwq;
	cout<<"���ӳ�Ϊ:"<<p.zbgjjc<<endl<<endl;
	cout<<"\t\t��ǰ���ߡ�";
	if(nowfj=="silly")cout<<"��";
	else cout<<nowfj;
	cout<<"���ӳ�Ϊ:"<<p.zbfyjc<<endl<<endl;
	cout<<"\t\t��ǰ��Ʒ��";
	if(nowsp=="silly")cout<<"��";
	else cout<<nowsp;
	cout<<"���ӳ�Ϊ:"<<p.zbsmjc<<endl<<endl;
	cout<<"\t\t\t<"<<p.mz<<"�Ķ���>\n";
	struct BAAG{
		string mz;
		int jc,lx;
	}zsp[1001];
	int zjs=0;
	for(int i=1;i<=gjjs;i++)zsp[++zjs].mz=gjzb[i].mz,zsp[zjs].jc=gjzb[i].jc,zsp[zjs].lx=1;
	for(int i=1;i<=fyjs;i++)zsp[++zjs].mz=fyzb[i].mz,zsp[zjs].jc=fyzb[i].jc,zsp[zjs].lx=2;
	for(int i=1;i<=spjs;i++)zsp[++zjs].mz=spzb[i].mz,zsp[zjs].jc=spzb[i].jc,zsp[zjs].lx=3;
	for(int i=1;i<=100;i++)if(dj[i].jc!=0)zsp[++zjs].mz=dj[i].mz,zsp[zjs].jc=dj[i].jc,zsp[zjs].lx=4;
	for(int i=1;i<=zjs;i++)
	{
		if(i<=gjjs+fyjs+spjs)cout<<i<<"��"<<zsp[i].mz<<"\t�ӳ�:"<<zsp[i].jc<<endl;
		else cout<<i<<"��"<<zsp[i].mz<<"\t����:"<<zsp[i].jc<<endl;
	}
	cout<<zjs+1<<"������\n";
	cout<<"��ѡ�����װ����ʹ��:\n";
	xzx=read();
	if(xzx==zjs+1)return;
	switch(zsp[xzx].lx)
	{
		case 1:{nowwq=zsp[xzx].mz,p.zbgjjc=zsp[xzx].jc;break;}
		case 2:{nowfj=zsp[xzx].mz,p.zbfyjc=zsp[xzx].jc;break;}
		case 3:{nowsp=zsp[xzx].mz,p.zbsmjc=zsp[xzx].jc;break;}
		case 4:
			{
				if(zsp[xzx].mz=="BOSS�ᾧ"){c3;goto X;}
				if(zsp[xzx].mz=="��ĩ����"){c3;goto X;} 
				if(zsp[xzx].mz=="ħ��ʯ")p.mfzjc+=5,dj[2].jc--;
				if(zsp[xzx].mz=="����ʯ")p.smzjc+=30,dj[3].jc--;
				break;
			}
	}
	cout<<"ʹ��/װ��    �ɹ���\n";
	X:system("pause");
}
