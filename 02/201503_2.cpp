/*
��������
201503-2
��������
��������n����������ͳ�Ƴ�ÿ���������ֵĴ����������ִ����Ӷൽ�ٵ�˳�������
�����ʽ
��������ĵ�һ�а���һ������n����ʾ�������ֵĸ�����
�����ڶ��а���n�����������ڵ�����֮����һ���ո�ָ�����ʾ��������������
�����ʽ
����������У�ÿ�а��������������ֱ��ʾһ�������������������ֵĴ����������ִ����ݼ���˳���������������������ֵĴ���һ���࣬�������ֵ��С�ģ�Ȼ�����ֵ�ϴ�ġ�
��������
12
5 2 3 3 1 3 4 2 5 2 3 5
�������
3 4
2 3
5 3
1 1
4 1
����������ģ��Լ��
����1 �� n �� 1000�������������ǲ�����1000�ķǸ�������
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




