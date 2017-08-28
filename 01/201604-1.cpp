/*
http://118.190.20.162/view.page?gpid=T42
201604-1
折点计数
问题描述
　　给定n个整数表示一个商店连续n天的销售量。如果某天之前销售量在增长，而后一天销售量减少，则称这一天为折点，反过来如果之前销售量减少而后一天销售量增长，也称这一天为折点。其他的天都不是折点。如下图中，第3天和第6天是折点。

　　给定n个整数a1, a2, …, an表示销售量，请计算出这些天总共有多少个折点。
　　为了减少歧义，我们给定的数据保证：在这n天中相邻两天的销售量总是不同的，即ai-1≠ai。注意，如果两天不相邻，销售量可能相同。
输入格式
　　输入的第一行包含一个整数n。
　　第二行包含n个整数，用空格分隔，分别表示a1, a2, …, an。
输出格式
　　输出一个整数，表示折点出现的数量。
样例输入
7
5 4 1 2 3 6 4
样例输出
2
评测用例规模与约定
　　所有评测用例满足：1 ≤ n ≤ 1000，每天的销售量是不超过10000的非负整数。
*/
#include<iostream>
using namespace std;

int main()
{
	bool B=true,A=true;
	int tmp_1;
	int num,res=0;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		int tmp;
		cin>>tmp;
		if(i==0){tmp_1=tmp;}
		else if(i==1){	
		if(tmp-tmp_1>0)
		{B=true;tmp_1=tmp;	}	
		else 
	     	{B=false;
	     tmp_1=tmp;
		    }
		
		}		
//	10101010

		else
		{
		if(tmp-tmp_1>0)
		{A=true;tmp_1=tmp;	}	
		else 
	     	{A=false;
	     	tmp_1=tmp;
		    }
			
			
			if(A!=B)
			{
			res++;
		//cout<<"***";
			B=A;
			}
		}
	}
	
	
	cout<<res;
	return 0;
}











