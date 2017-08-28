/*
http://118.190.20.162/view.page?gpid=T5
201312-1
出现次数最多的数
问题描述
　　给定n个正整数， 找出它们中出现次数最多的数。如果这样的数有多个，请输出其中最小的一个。
输入格式
　　输入的第一行只有一个正整数n(1 ≤ n ≤ 1000)，表示数字的个数。
　　输入的第二行有n个整数s1, s2, …, sn (1 ≤ si ≤ 10000, 1 ≤ i ≤ n)。相邻的数用空格分隔。
输出格式
　　输出这n个次数中出现次数最多的数。如果这样的数有多个，输出其中最小的一个。
样例输入
6
10 1 10 20 30 20
样例输出
10
*/

#include<iostream>
#include<algorithm>
using namespace std;

struct A{
	int num;
	int times;
	A(){times=0;num=0;	}
};

bool cmp(const A & a,const A & b )
{
	return (a.times>b.times);
}


int main()
{
int size;
cin>>size;
A a[10001];

for(int i=0;i<size;i++)
{
	int tmp_num;
	cin>>tmp_num;
	a[tmp_num].times++;
	a[tmp_num].num=tmp_num;
}

sort(&a[0],&a[10000],cmp);	

int Max=a[0].times;
int Min_num=a[0].num;
	for(int i=1;i<10000;i++)
	{
		if(a[i].times==Max)
		{
			if(a[i].num<Min_num)
			{
				Min_num=a[i].num;
			}
		}
		else break;
	}

cout<<Min_num;
	
	return 0;
}
















