#include<stdio.h>
int main()
{int a,v,c;
printf("Enter the first side: ");
scanf("%d",&a);
printf("Enter the second side: ");
scanf("%d",&v);
printf("Enter the third side: ");
scanf("%d",&c);

if (a==v && v==c){printf("EQULATERAL TRIANGLE");}   //EXECUTEABLE IF ALL THE ThREE SIDES ARE EQUAL

else if (a==v || v==c || a==c){printf("ISOCELES TRIANGLE");} //EXECUTEABLE IF ONLY 2 SIDES ARE EQUAL

else{printf("SCALENE TRIANGLE");} //EXECUTEABLE IF NONE OF THE SIDES ARE EQUAL
return 0;
}
