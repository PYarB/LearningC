
/*   +--------------------------------------------+
     | Coded At : DICS, Punjabi Bagh Laboratory.  |
     | Coded By : John Bhatt     		  |
     | Coded on : 15/04/2011 Friday     	  |
     +--------------------------------------------+   */
#include<stdio.h>
#include<conio.h>
void main()
{
int dd,mm,yy;
long int date,mmt,ddt;
clrscr();
year:
 printf("\nEnter Year First:");
 scanf("%d",&yy);
 if (yy<1970 || yy>2011)
  {
  printf("\nInvalid Date! Please enter again.");
  goto year;
  }
month:
  printf("\nEnter Month:");
  scanf("%d",&mm);
  if(mm<1 || mm>12)
   {
   printf("\nInvalid Month! Please enter again.");
   goto month;
   }
day:
   printf("\nEnter Day:");
   scanf("%d",&dd);
   if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)
    {
     if(dd<1 || dd>31)
      {
      printf("\nInvalid Day! Please Enter again.");
      goto day;
      }
    }
   else if(mm==4 || mm==6 || mm==9 || mm==11)
    {
    if(dd<1 || dd>30)
      {
      printf("\nInvalid Day! Please Enter Again.");
      goto day;
      }
    }
   else if(mm==2)
    {
     if (yy%4==0)
      {
       if(dd<1 || dd>29)
	{
	printf("\nInvalid Day! Please Enter Again.");
	goto day;
	}
       }
     else if(dd<1 || dd>28)
      {
      printf("\nInvalid Day! Please enter again.");
      goto day;
      }
    }
  if (dd>9)
  ddt=dd*1000000;
  else
  ddt=dd*10000000;
  if (mm>9)
  mmt=mm*10000;
  else
  mmt=mm*10000;
  date=ddt+mmt+yy;
  printf("Date according yo your input is %ld",date);
getch();
}
