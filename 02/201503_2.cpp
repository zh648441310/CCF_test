/*
数字排序
201503-2
问题描述
　　给定n个整数，请统计出每个整数出现的次数，按出现次数从多到少的顺序输出。
输入格式
　　输入的第一行包含一个整数n，表示给定数字的个数。
　　第二行包含n个整数，相邻的整数之间用一个空格分隔，表示所给定的整数。
输出格式
　　输出多行，每行包含两个整数，分别表示一个给定的整数和它出现的次数。按出现次数递减的顺序输出。如果两个整数出现的次数一样多，则先输出值较小的，然后输出值较大的。
样例输入
12
5 2 3 3 1 3 4 2 5 2 3 5
样例输出
3 4
2 3
5 3
1 1
4 1
评测用例规模与约定
　　1 ≤ n ≤ 1000，给出的数都是不超过1000的非负整数。
*/

#include<iostream>
#include<algorithm>
using namespace std;

struct A{
	int num;
	int W;
	A(){num=0;W=0;	}
	A(int a,int b)
	{
		num=a;
		W=b;
	}
};
A a[1002];

bool cmp(const A & f,const A & b)
{
	return f.W>b.W ? 1:0;
}



int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int tmp;
		cin>>tmp;
		a[tmp].W++;
		a[tmp].num=tmp;
	}
	
	sort(&a[1],&a[1001],cmp);
	
for(int k=0;k<100;k++)
{for(int i=1;i<1000;i++)
	{
		for(int j=i;j<1000;j++)
		{
			if(a[j].W!=a[j+1].W||a[j].W==0){break;}
			else 
			{
				if(a[j].num>a[j+1].num)
				{
					swap(a[j],a[j+1]);
				}
			}
		}
	}
	}	
	
	

	
	for(int i=1;i<1001;i++)
	{
	    if(a[i].W<=0){break;		}
		cout<<a[i].num<<" "<<a[i].W<<endl;
		
	}
	
	
	return 0;
}




