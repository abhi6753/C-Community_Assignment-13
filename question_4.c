/* 4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit */

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    char ch;
    int a,b,c;
    printf("Choose one option:\n");
    printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("d. Exit\n");
    printf("Enter your choice:\n");
    scanf("%c",&ch);
    printf("Enter length of side a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    switch(ch)
    {
        case 'a': 
            if(a==b||b==c||c==a)
               printf("Isosceles triangle\n");
            else
               printf("Not Isosceles triangle\n");
              break;
        case 'b': 
               if(a*a==(b*b)+(c*c)||b*b ==(c*c)+(a*a) || c*c== (a*a)+(b*b))
              {
                  printf("Right angle triangle");   
              }
              else
                  printf("Not Right angle triangle");
              break;
        case 'c': 
              if(a==b&&b==c&&a==c)
               printf("Equilateral triangle");
              else
                printf("Not Equilateral");
              break;
        case 'd': 
             exit(0);
        default:
              printf("Plzz.. Enter Valid Option");            
    }
    getch();
    return 0;
}