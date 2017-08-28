/*
201409-1
http://118.190.20.162/view.page?gpid=T16
相邻数对
问题描述
　　给定n个不同的整数，问这些数中有多少对整数，它们的值正好相差1。
输入格式
　　输入的第一行包含一个整数n，表示给定整数的个数。
　　第二行包含所给定的n个整数。
输出格式
　　输出一个整数，表示值正好相差1的数对的个数。
样例输入
6
10 2 6 3 7 8
样例输出
3
样例说明
　　值正好相差1的数对包括(2, 3), (6, 7), (7, 8)。
评测用例规模与约定
　　1<=n<=1000，给定的整数为不超过10000的非负整数。
*/



#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
using namespace std;

typedef pair<int,int> A;

set<A> S;
int num[1001]={0};
int Num;
int ans=0;
void in()
{

	cin>>Num;
	for(int i=0;i<Num;i++)
	{
		cin>>num[i];
	}
}

bool ok(int a,int b)
{
	return (abs(a-b)==1) ? true:false; 
}

void Vis()
{
	for (int i=0;i<Num-1;i++)
	{
		for(int j=i+1;j<Num;j++)
		{
			if(ok(num[i],num[j]))
			{
			
				int Min,Max;
				Min=min(num[i],num[j]);
				Max=max(num[i],num[j]);
				A a(Min,Max);
				S.insert(a);
			}
		}
	}
}

int main()
{
	in();
	Vis();
	cout<<S.size();
	return 0;
	
}

















