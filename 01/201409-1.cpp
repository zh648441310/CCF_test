/*
201409-1
http://118.190.20.162/view.page?gpid=T16
��������
��������
��������n����ͬ������������Щ�����ж��ٶ����������ǵ�ֵ�������1��
�����ʽ
��������ĵ�һ�а���һ������n����ʾ���������ĸ�����
�����ڶ��а�����������n��������
�����ʽ
�������һ����������ʾֵ�������1�����Եĸ�����
��������
6
10 2 6 3 7 8
�������
3
����˵��
����ֵ�������1�����԰���(2, 3), (6, 7), (7, 8)��
����������ģ��Լ��
����1<=n<=1000������������Ϊ������10000�ķǸ�������
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

















