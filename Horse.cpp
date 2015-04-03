//Mike and Yuki


#include<iostream.h>
#include<stdlib.h>
#include<time.h>
char track[6][12]=
{
	'1','-','-','-','-','-','-','-','-','-','-','-',
	'2','-','-','-','-','-','-','-','-','-','-','-',
	'3','-','-','-','-','-','-','-','-','-','-','-',
	'4','-','-','-','-','-','-','-','-','-','-','-',
	'5','-','-','-','-','-','-','-','-','-','-','-',
	'6','-','-','-','-','-','-','-','-','-','-','-',
};
int x;

void Horse1();
void Horse2();
void Horse3();
void Horse4();
void Horse5();
void Horse6();
void showrace();
void movedahorse();



int main()
{
	srand(time(0));
	showrace();
	movedahorse();
	system("pause");
	system("cls");
	showrace();
	return 0;
}


void showrace()
{
int y;
	for (x=0;x<6;x++)
	{
		for (y=0;y<12;y++)
		{
			cout<<track[x][y]<<" ";
		}
		cout<<endl;
		cout<<endl;
	}
}



void movedahorse()
{
	Horse1();
	Horse2();
	Horse3();
	Horse4();
	Horse5();
	Horse6();
}



void Horse1()
{
	int y;
	int moveorstay;
	moveorstay=rand()%100+1;
	if (moveorstay>50)
	{
		y=1;
		x=x+1;
		track[x][y]='2';
		track[x-1][y]='-';
	}
	else
		Horse1();
}

void Horse2()
{
	int y;
	int moveorstay;
	moveorstay=rand()%100+1;
	if (moveorstay>50)
	{
		y=2;
		x=x+1;
		track[x][y]='2';
		track[x-1][y]='-';
	}
	else
		Horse2();
}

void Horse3()
{
	int y;
	int moveorstay;
	moveorstay=rand()%100+1;
	if (moveorstay>50)
	{
		y=3;
		x=x+1;
		track[x][y]='2';
		track[x-1][y]='-';
	}
	else
		Horse3();
}

void Horse4()
{
	int y;
	int moveorstay;
	moveorstay=rand()%100+1;
	if (moveorstay>50)
	{
		y=4;
		x=x+1;
		track[x][y]='2';
		track[x-1][y]='-';
	}
	else
		Horse4();
}

void Horse5()
{
	int y;
	int moveorstay;
	moveorstay=rand()%100+1;
	if (moveorstay>50)
	{
		y=5;
		x=x+1;
		track[x][y]='2';
		track[x-1][y]='-';
	}
	else
		Horse5();
}

void Horse6()
{
	int y;
	int moveorstay;
	moveorstay=rand()%100+1;
	if (moveorstay>50)
	{
		y=6;
		x=x+1;
		track[x][y]='2';
		track[x-1][y]='-';
	}
	else
		Horse6();
}
