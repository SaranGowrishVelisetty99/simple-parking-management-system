#include <stdio.h>
#include<conio.h>
int Menu();
void FourWheeler();
void TwoWheeler();
void showstatus();
void deletedata();
void ShowDetails();
int nofw =0,notw=0,amount = 0,count =0;
int main ()
{
while (1)
{
clrscr();
switch(Menu())
{
	case 1:
	      FourWheeler();
	      break;
	case 2:
          TwoWheeler();
          break;
	case 3:
	      showstatus();
	      break;
	case 4:
	      deletedata();
	      break;
	case 5:
	      exit(0);
	default :
	 printf("\nInvalid choice!");
}
getch();
return 0;

}

}
int Menu ()
{
int ch;
 printf("\n1.enter no.of  FourWheeler:");
 printf("\n2.enter no.of  TwoWheeler");
 printf("\n3.showstatus:");
 printf("\n4.deletedata:");
 printf("\n5.exit!");
 printf("\n\nenter your choice:\n");
 scanf("%d",&ch);
 return(ch);
}
void deletedata ()
{
	nofw=0;
	notw=0;
	amount=0;
	count=0;
}
void ShowDetails()
{
printf("\nnumber of FourWheeler=%d",nofw);
printf("\nnumber of TwoWheeler=%d",notw);
printf("\nTotal no.of vehicles=%d",count);
printf("\nTotal amount=%d",amount);
}
void  FourWheeler ()
{
	printf("\nentry succesful");
nofw++;
amount = amount+50;
count++;
}
void TwoWheeler ()
{
	printf("\nentry succesful");tf
notw++;
amount = amount+80;
count++;
}
