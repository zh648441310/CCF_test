/*
http://118.190.20.162/view.page?gpid=T10
201403-1
�෴��
��������
������ N �������Ҹ�����ͬ�������������һ����������������ж��ٶ��෴��(a �� -a Ϊһ���෴��)��
�����ʽ
������һ�а���һ�������� N��(1 �� N �� 500)��
�����ڶ���Ϊ N ���õ����ո�����ķ�������,ÿ�����ľ���ֵ������1000,��֤��Щ����������ͬ��
�����ʽ
����ֻ���һ������,���� N �����а������ٶ��෴����
��������
5
1 2 3 -1 -2
�������
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





