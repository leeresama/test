#include<stdio.h>
// 输入函数


//扑克转换 
int turn(char z)
{
	int num;
	if(z=='2'){num=0;}
	if(z=='3'){num=1;}
	if(z=='4'){num=2;}
	if(z=='5'){num=3;}
	if(z=='6'){num=4;}
	if(z=='7'){num=5;}
	if(z=='8'){num=6;}
	if(z=='9'){num=7;}
	if(z=='10'){num=8;}
	if(z=='J'){num=9;}
	if(z=='Q'){num=10;}
	if(z=='K'){num=11;}
	if(z=='A'){num=12;}
	if(z=='D'){num=0;}
	if(z=='S'){num=1;}
	if(z=='H'){num=2;}
	if(z=='C'){num=3;}
	return (num);
}


//主程序
int main()
{

	//黑白双方获得卡牌 
	char a[4],b[4],c[4],d[4];
	int m;
	int i;
	char x[4],y[4];
	for(i=0;i<=4;i++)
	{
		scanf("%c%c",&a[i],&b[i]);
	}

	for(i=0;i<=4;i++)
	{
		scanf("%c%c",&c[i],&d[i]);
	}



	
	
	//扑克转换 
	int A[4],B[4],C[4],D[4],n;
	for(n=0;n<=4;n++)
	{
		A[n]=turn(a[n]);
		B[n]=turn(b[n]);
		C[n]=turn(c[n]);
		D[n]=turn(d[n]);
	}


	//扑克排序
	int num1,num2,temp1,temp2;
	for(num1=0;num1<=3;num1++)
	{
		for(num2=num1+1;num2<=4;num2++)
		{
			if(A[num1]<A[num2])
			{
				temp1=A[num1];
				temp2=B[num1];
				A[num1]=A[num2];
				B[num1]=B[num2];
				A[num2]=temp1;
				B[num2]=temp2;
			}
			if(C[num1]<C[num2])
			{				
			    temp1=C[num1];
				temp2=D[num1];
				C[num1]=C[num2];
				D[num1]=D[num2];
				C[num2]=temp1;
				D[num2]=temp2;
			}
		}
	}


	//扑克牌比较
	int point1=0,point2=0;
	if(B[0]==B[1]&&B[0]==B[2]&&B[0]==B[3]&&B[0]==B[4]){point1=point1+10;}
	for(n=0;n<=3;n++)
	{
		if(A[n]==A[n+1]){point1=point1+1;}
	}
	if(D[0]==D[1]&&D[0]==D[2]&&D[0]==D[3]&&D[0]==D[4]){point2=point2+10;}
	for(n=0;n<=3;n++)
	{
		if(C[n]==C[n+1]){point2=point2+1;}
	}
	if(point1>point2){printf("Black wins\n");}
	if(point1<point2){printf("White wins\n");}
	if(point1==point2)
	{
		for(n=0;n<=4;n++)
		{
			if(A[n]>C[n])
			{
				printf("Black wins\n");
				break;
			}
			if(A[n]<C[n])
			{
				printf("White wins\n");
				break;
			}
			if(A[n]==C[n]&&n==4)
			{
				printf("Tie\n");
				break;
			}
		}
	}
    return 0;
 } 







 
