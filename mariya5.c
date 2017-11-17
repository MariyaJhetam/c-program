
SWAPPING OF TWO NUMBER WITHOUT THIRD VARIABLE

#include<stdio.h>
int main()
{
int a,b;
printf("Enter value for num1& num2:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter Swapping value of a:%d",a);
printf("\nAfter swapping value of b:%d",b);
return(0);
}

****************output***************

comp@comp-OptiPlex-7040:~$ gcc bhavanaexm.c
comp@comp-OptiPlex-7040:~$ ./a.out
Enter value for num1& num2:6,4

After Swapping value of a:0
After swapping value of b:6comp@comp-OptiPlex-7040:~$ 
