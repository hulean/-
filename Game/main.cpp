#include<bits/stdc++.h>
#include<windows.h>
#include<stdio.h> 
#include<time.h>
#include<stdlib.h>
#define c1 cout<<"已领取\n";else cout<<"未领取\n";
#define c2 else cout<<"领取失败\n";system("pause");break;
#define c3 cout<<"你确定这玩意儿能使用？\n"
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
int gjjs,fyjs,spjs;//计数
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
}xg[101],boss[101];/*小怪*/
struct l_3{
    string mz;
    int jc1,jc2,jg,pz;
}gjsp[101],fysp[101],sp[101],BOSSsp[101];
struct l_4{
	string name;
	int hm;
}jin[101];
struct l_5{
	string mz;//名字
	int jc;//加成/数量
}gjzb[110],fyzb[110],spzb[110],dj[110];//道具
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
    cout<<"登录按1，注册按2\n";
    xz=read();if(xz==2)
    {
        cout<<"请输入账号名:\n";
        cin>>aa;
        ifstream fin("已有账号.txt");
        while(fin>>zh)
        {
            if(zh==aa)
            {
                cout<<"已有账号，是否覆盖?\n覆盖:0\t不覆盖:1\n请选择:";
                int xz;
                xz=read();
                if(!xz)break;
                else goto JX2;
            }
        }
        ofstream fout("已有账号.txt",ios::app);
        fout<<aa<<endl;fout.close();strncat(aa,b,4);
        CS:cout<<"请设置密码:";cin>>mm1;
        cout<<"请再输一次:";cin>>mm2;
        if(mm1==mm2)cout<<"注册成功！\n",x1=1,tmm=mm1;
        else {cout<<"两次输入的密码不一致，请重新输入！\n",system("pause");goto CS;} 
        ofstream fout1(aa);
        fout1<<mm1;
        fout1.close();
    }
    else
    {
        bool th=false;
        cout<<"输入账号名:";cin>>aa;
        ifstream fin("已有账号.txt");
        while(fin>>zzh)
        {
            if(zzh==aa){th=true;break;} 
        }
        if(!th){cout<<"没有这个账号!\n",system("pause");goto JX2;} 
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
            cout<<"请输入密码:";cin>>mm;
            if(mm==tmm)cout<<"登陆成功！\n",x1=0;
            else {cout<<"密码错误!\n",system("pause");goto JX2;}
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
    cout<<"请选择:\n";
    cout<<"1、在线5分钟礼包\t状态:";if(qth[1])c1
    cout<<"2、在线10分钟礼包\t状态:";if(qth[2])c1
    cout<<"3、在线20分钟礼包\t状态:";if(qth[3])c1
    cout<<"4、在线30分钟礼包\t状态:";if(qth[4])c1
    cout<<"5、在线60分钟礼包\t状态:";if(qth[5])c1
    cout<<"6、在线90分钟礼包\t状态:";if(qth[6])c1
    cout<<"7、在线120分钟礼包\t状态:";if(qth[7])c1
    cout<<"8、在线150分钟礼包\t状态:";if(qth[8])c1
    cout<<"9、在线170分钟礼包\t状态:";if(qth[9])c1
    cout<<"10、在线180分钟礼包\t状态:";if(qth[10])c1
    cout<<"11、退出\n";
    cout<<"12、刷新\n"; 
    cout<<"你已在线:"<<onlinetime<<"分钟\n";
	qxz=read();
    switch(qxz)
    {
        case 11:{return;break;}
        case 12:{qd();break;}
        case 1:{if(onlinetime>=5&&!qth[1])cout<<"领取成功，你获得了1枚金币\n",p.jb++,qth[1]=1;c2}
        case 2:{if(onlinetime>=10&&!qth[2])cout<<"领取成功，你获得了1枚金币\n",p.jb++,qth[2]=1;c2}
        case 3:{if(onlinetime>=20&&!qth[3])cout<<"领取成功，你获得了2枚金币\n",p.jb+=2,qth[3]=1;c2}
        case 4:{if(onlinetime>=30&&!qth[4])cout<<"领取成功，你获得了2枚金币\n",p.jb+=2,qth[4]=1;c2}
        case 5:{if(onlinetime>=60&&!qth[5])cout<<"领取成功，你获得了3枚金币\n",p.jb+=3,qth[5]=1;c2}
        case 6:{if(onlinetime>=90&&!qth[6])cout<<"领取成功，你获得了3枚金币\n",p.jb+=3,qth[6]=1;c2}
        case 7:{if(onlinetime>=120&&!qth[7])cout<<"领取成功，你获得了4枚金币\n",p.jb+=4,qth[7]=1;c2}
        case 8:{if(onlinetime>=150&&!qth[8])cout<<"领取成功，你获得了4枚金币\n",p.jb+=4,qth[8]=1;c2}
        case 9:{if(onlinetime>=170&&!qth[9])cout<<"领取成功，你获得了5枚金币\n",p.jb+=5,qth[9]=1;c2}
        case 10:{if(onlinetime>=180&&!qth[10])cout<<"领取成功，你获得了5枚金币\n",p.jb+=5,qth[10]=1;c2}
        default:{cout<<"what are you doing?\n";system("pause");break;}
    }
}
void chushihua()
{
    GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i=1;i<=100;i++)xg[i].sfkq=false,boss[i].sfkq=false;
    xg[1].sfkq=true;
    xg[1].mz="寅将军";xg[2].mz="特处士";xg[3].mz="小钻风";xg[4].mz="鬼金羊";xg[5].mz="闵老护法";
    gjsp[1].mz="|究天棍|(拨云见日，无阻坦途)";gjsp[1].jg=8;gjsp[1].jc1=1;gjsp[1].jc2=5;gjsp[1].pz=0; 
    gjsp[2].mz="|摩愿棍|(指间现寒意，一棍破空来)";gjsp[2].jg=10;gjsp[2].jc1=4;gjsp[2].jc2=8;gjsp[2].pz=0; 
    gjsp[3].mz="|罗悲棍|(棍出腾龙凌月，横波千万丈滔)";gjsp[3].jg=14;gjsp[3].jc1=5;gjsp[3].jc2=11;gjsp[3].pz=1; 
    fysp[1].mz="|究天甲|(灼目不可视，闪闪映日光)";fysp[1].jg=9;fysp[1].jc1=1;fysp[1].jc2=4;fysp[1].pz=0;
    fysp[2].mz="|摩愿木甲|(饰山岳之纹，木魂浸之)";fysp[2].jg=12;fysp[2].jc1=3;fysp[2].jc2=6;fysp[2].pz=0;
    fysp[3].mz="|罗悲水甲|(分水入海，避浪不伤)";fysp[3].jg=15;fysp[3].jc1=7;fysp[3].jc2=10;fysp[3].pz=1;
    sp[1].mz="|究天链|(翠碧玲珑，彩光清韵)";sp[1].jg=18;sp[1].jc1=10;sp[1].jc2=30;sp[1].pz=0;
    boss[1].mz="金之祖巫";
    p.gjzjc=0;p.fyzjc=0;p.jy=0;p.level=1;p.jb=0;p.mf=50;p.jyls=50;p.mfzjc=0;
    jin[1].name="灭神一击";jin[1].hm=15;jin[2].name="绿蔓缚";jin[2].hm=15;jin[3].name="烈焰风暴";jin[3].hm=20;
    jin[4].name="天降甘露";jin[4].hm=25;jin[5].name="紧箍咒";jin[5].hm=25;jin[6].name="烈焰闪";jin[6].hm=30;
    jin[7].name="天眼标记";jin[7].hm=30;jin[8].name="火魔九连斩";jin[8].hm=40;jin[9].name="火猿出击";jin[9].hm=45;
	jin[10].name="归魂神灭";jin[10].hm=60;
	dj[1].mz="BOSS结晶";dj[2].mz="魔法石";dj[3].mz="生命石";dj[4].mz="周末积分";
	BOSSsp[1].mz="魔法石(魔法永久+5)";BOSSsp[1].jg=10;
	BOSSsp[2].mz="生命石(生命永久+30)";BOSSsp[2].jg=10;
}
void shop()
{
	int xxz;
	system("cls");
    cout<<"\t\t\t《商店》\n";
    cout<<"\t你要买什么？\n";
    cout<<"1、武器\n2、防具\n3、饰品\n";
    cout<<"\t\t注:武器加攻击，防具加防御，饰品提升生命\n\n";
    cout<<"请选择:";cin>>xxz;
    system("cls");
    int xzz;
	switch(xxz)
    {
        case 1:
        {
      		cout<<"\t\t\t《武器》\n";
			for(int i=1;i<=3;i++)
			{
    			cout<<i<<"、"<<gjsp[i].mz<<"  加成为"<<gjsp[i].jc1<<"-"<<gjsp[i].jc2<<"(随机),价格为:"<<gjsp[i].jg<<"   ";
	    		switch(gjsp[i].pz)
                {
                    case 0:{getwhite;cout<<"品质:普通"<<endl;break;}
                    case 1:{getgreen;cout<<"品质:优秀"<<endl;break;}
                    case 2:{getdarkblue;cout<<"品质:精良"<<endl;break;}
                    case 3:{getdarkpink;cout<<"品质:史诗"<<endl;break;}
                    case 4:{getyellow;cout<<"品质:传说"<<endl;break;}
                    case 5:{getred;cout<<"品质:神器"<<endl;break;}
                }
                getwhite;
            }
            cout<<p.mz<<"的金币:"<<p.jb<<endl;
            cout<<"请选择:";xzz=read();
            if(p.jb<gjsp[xzz].jg)cout<<"想吃霸王餐？\n";
            else
            {
                p.jb-=gjsp[xzz].jg;
                cout<<"你买了:"<<gjsp[xzz].mz<<endl;
                int sj=rand()%(gjsp[xzz].jc2-gjsp[xzz].jc1+1)+gjsp[xzz].jc1;
                gjzb[++gjjs].mz=gjsp[xzz].mz;gjzb[gjjs].jc=sj;cout<<"请自行进入背包查看\n";
            }
            system("pause");
            break;
        }
        case 2:
        {
            cout<<"\t\t\t《防具》\n";
            for(int i=1;i<=3;i++)
            {
                cout<<i<<"、"<<fysp[i].mz<<"  加成为"<<fysp[i].jc1<<"-"<<fysp[i].jc2<<"(随机),价格为:"<<fysp[i].jg<<"   ";
                switch(fysp[i].pz)
                {
                    case 0:{getwhite;cout<<"品质:普通"<<endl;break;}
                    case 1:{getgreen;cout<<"品质:优秀"<<endl;break;}
                    case 2:{getdarkblue;cout<<"品质:精良"<<endl;break;}
                    case 3:{getdarkpink;cout<<"品质:史诗"<<endl;break;}
                    case 4:{getyellow;cout<<"品质:传说"<<endl;break;}
                    case 5:{getred;cout<<"品质:神器"<<endl;break;}
                }
                getwhite;
            }
            cout<<p.mz<<"的金币:"<<p.jb<<endl;
            cout<<"请选择:";xzz=read();
            if(p.jb<fysp[xzz].jg)cout<<"想吃霸王餐？\n";
            else
            {
                p.jb-=fysp[xzz].jg;
                cout<<"你买了:"<<fysp[xzz].mz<<endl;
                int sj=rand()%(fysp[xzz].jc2-fysp[xzz].jc1+1)+fysp[xzz].jc1;
                fyzb[++fyjs].mz=fysp[xzz].mz;fyzb[fyjs].jc=sj;cout<<"请自行进入背包查看\n";
            }
            system("pause");
            break;
        }
        case 3:
        {
            cout<<"\t\t\t《饰品》\n";
            for(int i=1;i<=1;i++)
            {
                cout<<i<<"、"<<sp[i].mz<<"  加成为"<<sp[i].jc1<<"-"<<sp[i].jc2<<"(随机),价格为:"<<sp[i].jg<<"   ";
                switch(sp[i].pz)
                {
                    case 0:{getwhite;cout<<"品质:普通"<<endl;break;}
                    case 1:{getgreen;cout<<"品质:优秀"<<endl;break;}
                    case 2:{getdarkblue;cout<<"品质:精良"<<endl;break;}
                    case 3:{getdarkpink;cout<<"品质:史诗"<<endl;break;}
                    case 4:{getyellow;cout<<"品质:传说"<<endl;break;}
                    case 5:{getred;cout<<"品质:神器"<<endl;break;}
                }
                getwhite;
            }
            cout<<p.mz<<"的金币:"<<p.jb<<endl;
            cout<<"请选择:";xzz=read();
            if(p.jb<sp[xzz].jg)cout<<"想吃霸王餐？\n",system("pause");
            else
            {
                p.jb-=sp[xzz].jg;
                cout<<"你买了:"<<sp[xzz].mz<<endl;
                int sj=rand()%(sp[xzz].jc2-sp[xzz].jc1+1)+sp[xzz].jc1;
                spzb[++spjs].mz=sp[xzz].mz;spzb[spjs].jc=sj;cout<<"请自行进入背包查看\n";
            }
            system("pause");
            break;
        }
    }
}
void help()
{
	system("cls"); 
	cout<<"\t\t\t帮助:\n副本:副本的难度较为简单，打掉相应的怪物会获得相应的经验和金币\n商店:可以用金币买东西\nboss:有一定的难度，5级及以上可挑战\n";
	cout<<"在线礼包:在线相应时间可获得礼包，同一天在线时间不会少去(退出也不会),不过第二天就会清0\n";
	cout<<"技能选择在<设置>里\t个人资料在<背包>里\n";
	cout<<"关于本游戏：本游戏会不定时更新\n如果你发现了BUG，或有什么好的建议，那么就在“www.luogu.org”里私信我或在某个帖子里@我\n\t作者：hulean\n";
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
	cout<<"\t\t\t《BOSS》\n";
	cout<<"0、BOSS商店\n\n";
	for(int i=1;i<=1;i++)
	{
		cout<<i<<"、"<<boss[i].mz<<"\n";
		cout<<"先决条件:\n";
		for(int j=4*i-2;j<=4*i+1;j++)
		{
			cout<<xg[j-1].mz<<":";if(xg[j].sfkq)cout<<"完成\n";
			else cout<<"未完成\n";
		}
		cout<<endl;
	}
	cout<<"请选择:"<<endl;
	xxxz=read();
	if(xxxz==0)
	{
		for(int i=1;i<=2;i++)cout<<i<<"、"<<BOSSsp[i].mz<<"\t价格:"<<BOSSsp[i].jg<<"BOSS结晶\n";
		int zx=read();
		if(dj[1].jc<BOSSsp[zx].jg){cout<<"你买不起!\n",system("pause");return;}
		dj[1].jc-=BOSSsp[zx].jg;
		switch(zx)
		{
			case 1:{dj[2].jc++;cout<<"自行进入背包查看\n";break;}
			case 2:{dj[3].jc++;cout<<"自行进入背包查看\n";break;}
			default:{cout<<"what are you doing?\n";break;}
		}
		system("pause");
		return;
	}
	if(!boss[xxxz].sfkq){cout<<"what are you doing?\n",system("pause");return;}
	cout<<"加载中...\n";
	ofstream fout("进入副本.txt");
	fout<<p.mz<<" "<<p.zsm<<" "<<p.sm<<" "<<p.gj<<" "<<p.fy<<" "<<p.mf<<endl;
	fout.close();
	ifstream fin("副本--主程序.txt");
	bool PD;
	switch(xxxz)
	{
		case 1:{system("金之祖巫");fin>>PD;if(PD)dj[1].jc+=2,cout<<"你获得了BOSS结晶*2\n";break;}
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
    	cout<<"进入后，将会随机分配到【蛋之祖巫】or【作业祖巫】，进行挑战\n";
    	system("pause");
    	cout<<"加载中...\n";
    	ofstream fout("进入副本.txt");
		fout<<p.mz<<" "<<p.zsm<<" "<<p.sm<<" "<<p.gj<<" "<<p.fy<<" "<<p.mf<<endl;
		fout.close();
		system("weekend");
		ifstream fin("副本--主程序.txt");
		bool PD;
		if(PD)dj[4].jc+=5;
	}
	else cout<<"然而今天不是周末\n",system("pause");
}
void BAG();
int main()
{
    getwhite;
    int xz;
    chushihua();zh();
    system("pause");system("cls");
    cout<<"\t\t\t<造梦西游v2.8>\n";Sleep(1000);
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
    if(x1)cout<<"请输入你的昵称:",cin>>p.mz;
    cout<<"\t\t\t";
    if(hour>=7&&hour<=10)cout<<"上午好,";
    else if(hour>=5&&hour<=6)cout<<"早上好,";
    else if(hour==12||hour==11)cout<<"中午好,";
    else if(hour>=13&&hour<=18)cout<<"下午好,";
    else cout<<"晚上好,";cout<<p.mz<<endl;
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
        getyellow;cout<<"\t\t     <造梦西游v2.8>\n\n";
        getgreen;cout<<p.mz<<"的等级:"<<p.level<<"\t";
   		cout<<p.mz<<"的金币:"<<p.jb<<"\t";
    	cout<<p.mz<<"的经验:"<<p.jy<<"/"<<p.jyls<<endl;
	    getred;cout<<"\t\t-------------------------\n";
	    cout<<"\t\t|";getblue;cout<<"\t1、副本\t\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t2、商店\t\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t3、BOSS领地\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t4、活动与礼包\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t5、保存并退出\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t6、帮助\t\t";getred;cout<<"|\n";
	    cout<<"\t\t|";getblue;cout<<"\t7、设置\t\t";getred;cout<<"|\n";
		cout<<"\t\t|";getblue;cout<<"\t8、背包\t\t";getred;cout<<"|\n";
		cout<<"\t\t-------------------------\n";
		getpink;cout<<setw(30)<<"请选择:";
		getwhite;
        xz=read();
        int xxz;
        switch(xz)
        {
            case 1:
            {
            	system("cls");
                cout<<"\t\t\t《副本》\n";
                for(int i=1;i<=5;i++)
				{
                    if(xg[i].sfkq)cout<<i<<"、"<<xg[i].mz<<endl;
                }
                cout<<"\n\n";
                cout<<"\t请选择:";
                xxz=read();
                ofstream fout("进入副本.txt");
                if(xxz%4==0)fout<<4<<" ";
                else fout<<xxz%4<<" ";
                fout<<p.mz<<" "<<p.zsm<<" "<<p.sm<<" "<<p.gj<<" "<<p.fy<<" "<<p.mf<<endl;
                fout.close();
				cout<<"加载中......\n";
                ifstream fin("副本--主程序.txt");
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
            case 3:{if(p.level<5)cout<<"等级不足5级，稍后再来\n",system("pause");else choose_boss();break;}
            case 4:
				{
					system("cls");
					cout<<"1、在线礼包\n2、周末活动\n";
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
            	cout<<"\t\t\t《设置》\n";
            	cout<<"1、技能设置\n2、自动保存\n3、返回\n";
            	xxz=read();
            	switch(xxz)
            	{
            		case 1:
            		{
            			int jin1,jin2,jin3,jin4;
            			system("cls");
            			cout<<"\t\t\t《选择技能页面》\n";
            			for(int i=1;i<=10;i++)
            			{
            				cout<<i<<"、名字:"<<jin[i].name<<"    耗魔:"<<jin[i].hm<<endl; 
						}
						cout<<"\n\n《技能说明》\n";
						printf( "灭神一击：造成2倍伤害\n"
								"绿蔓缚：造成1倍伤害，并禁锢对手一回合\n"
								"烈焰风暴：造成2倍伤害，并每回合扣除对手1*攻击的血量，持续三回合\n"
								"天降甘露：回复40%的生命\n"
								"紧箍咒：使对手在下两个回合内攻击力扣除50%\n"
								"烈焰闪：使后3回合内闪避率变为50%\n"
								"天眼标记：对敌人进行标记，使下一回合造成的伤害提高3倍\n"
								"火魔九连斩：打出3倍伤害，并形成灼烧\n"
								"火猿出击：打出4倍伤害，形成绿蔓缚\n"
								"归魂神灭：打出5倍伤害，形成天眼标记，并有1%的几率秒杀对手\n");
						cout<<"\n\n请选择4个技能带上阵(用空格分隔，如选择两个重复技能或选择没有的技能，后果自己承担！)：\n";
						jin1=read();jin2=read();jin3=read();jin4=read();
						ofstream fout("技能.txt");
						fout<<jin1<<" "<<jin2<<" "<<jin3<<" "<<jin4<<endl;
						break; 
					} 
            		case 2:
					{
						int xzx;
						cout<<"\n\n\t\t\t自动保存功能处于【";
						if(zdbc)cout<<"开启";else cout<<"关闭";
						cout<<"】状态\n";cout<<"是否开启/关闭？\n1、是\n2、否\n";
						xzx=read();
						if(xzx==1)zdbc=!zdbc,cout<<"\n\t\t\t成功！\n";
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
	cout<<"以下为个人资料，看看就好\n";
	getgreen;cout<<p.mz<<"的等级:"<<p.level<<"\n"<<p.mz<<"的血量:"<<p.sm<<"\n"<<p.mz<<"的魔法:"<<p.mf<<"\n";
    cout<<p.mz<<"的攻击:"<<p.gj<<"\n"<<p.mz<<"的防御:"<<p.fy<<"\n"<<p.mz<<"的金币:"<<p.jb<<"\n";
    cout<<p.mz<<"的经验:"<<p.jy<<"/"<<p.jyls<<endl;
    getwhite;
    cout<<"进入背包按1\n返回主页按2\n请选择:";
	int xzx=read();
	if(xzx==2)return;
	system("cls");
	cout<<"\t\t当前武器【";
	if(nowwq=="silly")cout<<"空";
	else cout<<nowwq;
	cout<<"】加成为:"<<p.zbgjjc<<endl<<endl;
	cout<<"\t\t当前防具【";
	if(nowfj=="silly")cout<<"空";
	else cout<<nowfj;
	cout<<"】加成为:"<<p.zbfyjc<<endl<<endl;
	cout<<"\t\t当前饰品【";
	if(nowsp=="silly")cout<<"空";
	else cout<<nowsp;
	cout<<"】加成为:"<<p.zbsmjc<<endl<<endl;
	cout<<"\t\t\t<"<<p.mz<<"的东西>\n";
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
		if(i<=gjjs+fyjs+spjs)cout<<i<<"、"<<zsp[i].mz<<"\t加成:"<<zsp[i].jc<<endl;
		else cout<<i<<"、"<<zsp[i].mz<<"\t数量:"<<zsp[i].jc<<endl;
	}
	cout<<zjs+1<<"、返回\n";
	cout<<"请选择进行装备或使用:\n";
	xzx=read();
	if(xzx==zjs+1)return;
	switch(zsp[xzx].lx)
	{
		case 1:{nowwq=zsp[xzx].mz,p.zbgjjc=zsp[xzx].jc;break;}
		case 2:{nowfj=zsp[xzx].mz,p.zbfyjc=zsp[xzx].jc;break;}
		case 3:{nowsp=zsp[xzx].mz,p.zbsmjc=zsp[xzx].jc;break;}
		case 4:
			{
				if(zsp[xzx].mz=="BOSS结晶"){c3;goto X;}
				if(zsp[xzx].mz=="周末积分"){c3;goto X;} 
				if(zsp[xzx].mz=="魔法石")p.mfzjc+=5,dj[2].jc--;
				if(zsp[xzx].mz=="生命石")p.smzjc+=30,dj[3].jc--;
				break;
			}
	}
	cout<<"使用/装备    成功！\n";
	X:system("pause");
}
