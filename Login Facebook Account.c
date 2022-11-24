/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct user

{
    char name[15];
    char con[50];
};
struct user u1,u2;
int main()
{
    int age;
    printf("Enter ypur age -:");
    scanf("%d",&age);
    if(age>=20)
{
printf("************WELCOME TO FACEBOOK***********");
getchar();
printf("\nEnter your name\n");
gets(u1 .name);
printf("\nSearch your friend\n");
gets(u2 .name);    
printf("\nYou and %s are friend now.",u2.name);
printf("\nSay Hello! to %s",u2.name);
printf("\n%s:",u1.name);
getchar();
gets(u1.con);
printf("\n%s:",u2.name);
getchar();
gets(u2.con);
printf("\n%s:",u1.name);
gets(u1.con);
printf("\n%s:",u2.name);
gets(u2.con);
}
else
printf("You are not eligible");

     return 0 ;
    
}