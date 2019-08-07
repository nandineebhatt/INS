#include<string.h>
#include<stdio.h>

void main()
{
	char pt[35]="ceasar";
	int key=5;
	char ct[35];
	for(int i=0;i<35;i++)
	{
		
		if(pt[i]+key>122)
		{
			ct[i]= 'a'+(key-('z'-pt[i])-1);
		}
		else
		{
			ct[i]=pt[i]+key;
		}
	}
	printf("\n %s \n",ct);
	for(int j=0;j<35;j++)
	{
		
		if(ct[j]+key>122)
		{
			ct[j]= 'z'+(key+('a'-ct[j])-1);
		}
		else
		{
			pt[j]=ct[j]-key;
		}
	}
	printf("\n %s \n",pt);
}
