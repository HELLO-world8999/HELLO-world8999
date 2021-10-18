#include<stdio.h>
int main()
{int  x , y , z ;
printf("Enter the first numer: ");
scanf("%d",&x);
printf("Enter the second numer: ");
scanf("%d",&y);
printf("Enter the three numer: ");
scanf("%d",&z);
                        //in case of confusion use the below commented flags to determine in which case your inputs falls.
                                    //use flags inside the conditional blocks --> {}

//all possible cases!!!
printf("The order is: ");
if (x>y && y>z){printf("%d ; %d ; %d ",x,y,z);}          //printf("case1");

else if (x>z && z>y){printf("%d ; %d ; %d ",x,z,y);}     //printf("case2");

else if (y>x && x>z){printf("%d ; %d ; %d ",y,x,z);}     //printf("case3");

else if (y>z && z>x){printf("%d ; %d ; %d ",y,z,x);}     //printf("case4");

else if (z>x&&x>y){printf("%d ; %d ; %d ",z,x,y);}       //printf("case5");

else if (z>y&&y>x){printf("%d ; %d ; %d ",z,y,x);}       //printf("case6");

else {printf("Can't be ordered because two or more inputs are EQUAL !!");}

return 0;}
