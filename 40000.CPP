#include<stdio.h>
#include<conio.h>

void main()
{
int marks [5]={12,42,18,50,26};
int i;
int  average;
int sum=0;
clrscr();
  for(i=0;i<=4;i++)
  {
  printf("marks = %d\n",marks[i]);

  sum=sum + marks[i];
  }
  printf("%d",sum/5);

getch();
}