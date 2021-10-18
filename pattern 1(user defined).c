#include<stdio.h>
#include<conio.h>
int main()
{int width_,height_,x,y;

printf("Enter width of the pattern (ROWS) : ");
scanf("%d",&width_);
printf("\n");
printf("Enter height of the pattern (COLUMNS) : ");
scanf("%d",&height_);
printf("\n");
for (x=0;x<width_;x++){
    for (y=0;y<height_;y++)
        {
            if (x%2==0 && y%2==0)
                { printf(" X"); }
            else if (x%2!=0 && y%2!=0)
            { printf(" X"); }
            else{printf("  ");}
        }
    printf("\n"); }
return 0;
}
