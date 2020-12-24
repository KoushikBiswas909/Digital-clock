#include<stdio.h>
#include<conio.h>
//this is a simple Digital clock project written in C
void main()
{
	int h=0,m=0,s=0;//h,m,s stands for hour minute second
	clrscr();
	printf("Please enter real time format in HH:MM:SS");
	scanf("%d%d%d",&h,&m,&s);
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				clrscr();
				textcolor(GREEN);//to print output in colours
				cprintf("\n\n\t\t\t%d:%d:%d",h,m,s);//"\t" shows the output in the middle of the screen
				if(h<12)
				{
					printf(" AM");
				}
				else
				{
					printf(" PM");
				}
				for(double i=0;i<3619999;i++)/* if u work on dual core u need more time to do one second 
				but in i9 processor it is too fast then 1s. to equivalent both case this line create a 1s
				time dealy*/
				i++;//when we didn't give parathesis in for loop ,only the next line of loop consider as under the loop
				i--;
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
getch();
}