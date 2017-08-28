/*
http://118.190.20.162/view.page?gpid=T10
201403-1
相反数
问题描述
　　有 N 个非零且各不相同的整数。请你编一个程序求出它们中有多少对相反数(a 和 -a 为一对相反数)。
输入格式
　　第一行包含一个正整数 N。(1 ≤ N ≤ 500)。
　　第二行为 N 个用单个空格隔开的非零整数,每个数的绝对值不超过1000,保证这些整数各不相同。
输出格式
　　只输出一个整数,即这 N 个数中包含多少对相反数。
样例输入
5
1 2 3 -1 -2
样例输出
2
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;



int vis[501]={0};
int num[1001]={-1};
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
	return (abs(a+b)==0) ? true:false; 
}

void Vis()
{
	for (int i=0;i<Num-1;i++)
	{
		for(int j=i+1;j<Num;j++)
		{
			if(!vis[j]&&ok(num[i],num[j]))
			{
				vis[j]=1;
				ans++;
				break;
			}
		}
	}
}

int main()
{
	in();
	Vis();
	cout<<ans;
	return 0;
	
}





