/*
http://118.190.20.162/view.page?gpid=T20
201412-2
Z字形扫描
问题描述
　　在图像编码的算法中，需要将一个给定的方形矩阵进行Z字形扫描(Zigzag Scan)。给定一个n×n的矩阵，Z字形扫描的过程如下图所示：

　　对于下面的4×4的矩阵，
　　1 5 3 9
　　3 7 5 6
　　9 4 6 4
　　7 3 1 3
　　对其进行Z字形扫描后得到长度为16的序列：
　　1 5 3 9 7 3 9 5 4 7 3 6 6 4 1 3
　　请实现一个Z字形扫描的程序，给定一个n×n的矩阵，输出对这个矩阵进行Z字形扫描的结果。
输入格式
　　输入的第一行包含一个整数n，表示矩阵的大小。
　　输入的第二行到第n+1行每行包含n个正整数，由空格分隔，表示给定的矩阵。
输出格式
　　输出一行，包含n×n个整数，由空格分隔，表示输入的矩阵经过Z字形扫描后的结果。
样例输入
4
1 5 3 9
3 7 5 6
9 4 6 4
7 3 1 3
样例输出
1 5 3 9 7 3 9 5 4 7 3 6 6 4 1 3
评测用例规模与约定
　　1≤n≤500，矩阵元素为不超过1000的正整数。
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

