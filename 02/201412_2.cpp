/*
http://118.190.20.162/view.page?gpid=T20
201412-2
Z����ɨ��
��������
������ͼ�������㷨�У���Ҫ��һ�������ķ��ξ������Z����ɨ��(Zigzag Scan)������һ��n��n�ľ���Z����ɨ��Ĺ�������ͼ��ʾ��

�������������4��4�ľ���
����1 5 3 9
����3 7 5 6
����9 4 6 4
����7 3 1 3
�����������Z����ɨ���õ�����Ϊ16�����У�
����1 5 3 9 7 3 9 5 4 7 3 6 6 4 1 3
������ʵ��һ��Z����ɨ��ĳ��򣬸���һ��n��n�ľ������������������Z����ɨ��Ľ����
�����ʽ
��������ĵ�һ�а���һ������n����ʾ����Ĵ�С��
��������ĵڶ��е���n+1��ÿ�а���n�����������ɿո�ָ�����ʾ�����ľ���
�����ʽ
�������һ�У�����n��n���������ɿո�ָ�����ʾ����ľ��󾭹�Z����ɨ���Ľ����
��������
4
1 5 3 9
3 7 5 6
9 4 6 4
7 3 1 3
�������
1 5 3 9 7 3 9 5 4 7 3 6 6 4 1 3
����������ģ��Լ��
����1��n��500������Ԫ��Ϊ������1000����������
*/
#include<iostream>
using namespace std;



int d[4][2]={{0,1},{1,-1},{1,0},{-1,1}};
int A[500][500];
int N;
int res=1;
int tmp_x=0;
int tmp_y=0;
int tmpx,tmpy;

bool F=0;


void D(int i)
{
	if(tmp_x>N-1||tmp_y>N-1)
	    {
	    //cout<<"&%%^";
	    
	    if(tmp_x>N-1)
	    {
	    tmp_x=tmpx;
	    tmp_y=tmpy;
	    i=(i+2)%4;
		tmp_x+=d[i][0];
	    tmp_y+=d[i][1];
	    D(i);
	    //cout<<" x="<<tmp_x<<" y="<<tmp_y<<" "<<A[tmp_x][tmp_y]<<endl;
	    F=1;
		}
		else
		{
		tmp_x=tmpx;
	    tmp_y=tmpy;	
		i=(i+2)%4;
		tmp_x+=d[i][0];
	    tmp_y+=d[i][1];
	    D(i);
	    //cout<<" x="<<tmp_x<<" y="<<tmp_y<<" "<<A[tmp_x][tmp_y]<<endl;
	    F=1;
		}
       } 
}  

int main()
{

	cin>>N;
	
for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
	{
	  cin>>A[i][j];
	}
	
}

int i=-1;
while(res!=N*N)
{
	    
	cout<<A[tmp_x][tmp_y]<<" ";	
	res++;
	if(tmp_x==0||tmp_y==0||tmp_x==N-1||tmp_y==N-1||F==1)
	{
		F=0;
		i=(i+1)%4;
		tmpx=tmp_x;
		tmpy=tmp_y;
		tmp_x+=d[i][0];
	    tmp_y+=d[i][1];
		D(i);
	
	}
	else
	{
		tmp_x+=d[i][0];
	    tmp_y+=d[i][1];
	}	
}
	cout<<A[tmp_x][tmp_y];



/*
for(int i=0;i<N;i++)
{  cout<<endl;
	for(int j=0;j<N;j++)
	{
	  cout<<A[i][j];
	}
	
}
*/
return 0;	
}

