#include<stdio.h>
#include<conio.h>
#include<string.h>
#define pf printf
#define sf scanf
/*
Author: Abhrajyoti Majumdar
Compiler: gcc 4.9.2
*/
void division(int [],int [],int);
void quotient(int [],int);
int index(int [],int);
void display(int [],int);
int main()
{
	char divd[1000],divs[1000];
	int divd_len,divs_len,i,j,temp, x[1000],y[1000],digits; 	
	pf("Enter dividend value: ");
	gets(divd);
	pf("Enter divisor value: ");	
	gets(divs);
	divd_len=strlen(divd);
	divs_len=strlen(divs);	
	if(divd_len>=divs_len)
		digits=divd_len;
	else
		digits=divs_len;
	memset(x,0,digits);
	memset(y,0,digits);
	temp=divd_len-1;
	for(i=0;i<divd_len;i++)
	{
		x[i]=divd[temp--]-48;		
	}
	temp=divs_len-1;
	for(i=0;i<divs_len;i++)
	{
		y[i]=divs[temp--]-48;		
	}	
	division(x,y,digits);
	getch();	
	return 0;	
	
}
void division(int x[],int y[],int digits)
{
	int i,quo[1000],rem[1000],carry=0,y1[1000],quo_index,rem_index,flag=0;
	long int count=0;
	memset(quo,0,digits);
	jump:
	for(i=0;i<digits;i++)
	{
		rem[i]=x[i];
		y1[i]=y[i];
	}
	for(i=0;i<digits;i++)
	{
		y1[i]=y1[i]+carry;
		if(x[i]<y1[i])
		{
			x[i]=(10+x[i])-y1[i];
			carry=1;
		}
		else
		{
			x[i]=x[i]-y1[i];
			carry=0;
		}			
	}
	for(i=0;i<digits;i++)
	{
		if(rem[i]!=x[i])
		{
			flag=1;
			break;
		}				
	}
	if(flag==0)
	{
		pf(":Divide by Zero Error:");
		return;
	}
	
	if(carry==0)
	{
		quotient(quo,digits);				
		goto jump;	
	}
	quo_index=index(quo,digits);
	rem_index=index(rem,digits);
	pf("Quotient: ");
	display(quo,quo_index);
	pf("Reminder: ");
	display(rem,rem_index);	
}
void quotient(int quo[],int digits)
{
	int i=0,carry=1;
	while(carry>0)
	{
		quo[i]++;
		carry=quo[i]/10;
		quo[i]=quo[i]%10;
		i++;
	}	
}
int index(int arr[],int digits)
{
	int index=0,i;
	for(i=0;i<digits;i++)
	{
		if(arr[i]>0)
			index=i;
	}
	return index;	
}
void display(int arr[],int index)
{
	int i;
	for(i=index;i>=0;i--)
		pf("%d",arr[i]);
	pf("\n");
}
