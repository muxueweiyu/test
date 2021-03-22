#include<stdio.h>

int main()
{
    char str[80];
    int i;

    printf("Enter your family name:");
    scanf("%79s",str);
    printf("enter your name:");
    scanf("%d",&i);
    printf("Mr. %s, %d years old. \n",str, i);
    printf("Enter a hexadecimal number:");
    scanf("%x",&i);
    printf(" you have entered %#x (%d).\n",i,i);
    return 0;
}
