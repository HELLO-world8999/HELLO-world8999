#include <stdio.h>
#include <conio.h>
int main()
{int main_value , minutes , hours ;
printf("Enter your value: ");
scanf("%d",&main_value);

if (main_value>=100 && main_value<=999){

    minutes=main_value%100;
    hours=main_value/100;
    if (minutes==00){
        printf("%d hours",hours);}
    else{
        printf("%d hours   %d minutes",hours,minutes);}       
}

else if (main_value>=1 && main_value<=99){
    printf("%d minutes",main_value);
}
else{
    printf("Enter a valid input");}

return 0;
}
