#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>


int getkey();

int getkey()
{char c=getch();
if(c==-32)
{
c=getch();
return c;
}}

void main()
		{ COORD c; 
		c.X=0;
		c.Y=0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
		
		int i,j,n=1,f,r,k=2,l=2,v=0,a[3][3],h=4,t;
		
		for(i=0;i<3;i++)
		{for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
		}
		goto label6;
		
			label1:
				{for(i=0;i<3;i++)
					{for(j=0;j<2;j++)
						{
						if((a[i][j]<a[i][j+1])&&(a[0][2]<a[1][0])&&(a[1][2]<a[2][0]))
						{ 
						
						
						f=1;}
						else  
						{
						f=0; goto label8;}  }}
					
				}
	
			  
		
	
	label7:
	{
	
	
	c.X=0; c.Y=20;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	printf("your score %d",v);
	exit(1);
	}
	label8:
	r=getkey();
	label2:
		{if(r==72&&l<2)
		{t=a[l][k];
		a[l][k]=a[l+1][k];a[l+1][k]=t;
		l=l+1;v++;
		goto label6;
		}
	}
		label3:
			{
				if(r==75&&k<2)
					{t=a[l][k];
					a[l][k]=a[l][k+1];a[l][k+1]=t;
					k=k+1;v++;
					goto label6;
				}
			}
			
		label4:
			{ if(r==77&&k>0)
				{t=a[l][k];  
				a[l][k]=a[l][k-1];a[l][k-1]=t;
				k=k-1;v++;
				goto label6;
			}
				}
				
		label5:
			{if(r==80&&l>0)
			
		{t=a[l][k];
		a[l][k]=a[l-1][k];a[l-1][k]=t;
		l=l-1;v++;
		goto label6;
		}}
		
		label6:
			{system("cls");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
			for(i=0;i<3;i++)
			{for(j=0;j<3;j++)
			{
			if(i==l&&j==k)
			printf(" ");
			else
			printf("%d ",a[i][j]);}
			 printf("\n");}
			goto label1;
			}
				
	
		
}
