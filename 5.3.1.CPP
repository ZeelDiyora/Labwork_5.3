//Write a program to find the minimum number from the given 3 numbers usimg the ternary operator.

#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;

clrscr();

printf("Enter the value of a :");
scanf("%d",&a);
printf("Enter the value of b :");
scanf("%d",&b);
printf("Enter the value of c :");
scanf("%d",&c);

 (a>b)?(a>c)?printf("a is minimum...\n")
	    :printf("b is minimum...\n")
      :(b>c)?printf("b is minimum...\n")
	    :printf("c is minimum..\n");

getch();
}

