/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{  
    char ch;
    int A,B,C;
    printf("choose one of them:\n");
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\n");
    printf("Enter option to perform it:\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("Enter two number:\n");
        scanf("%d%d",&A,&B);
        C = A+B;
        printf("%d + %d = %d ",A,B,C);
        break;
    case 'b':
        printf("Enter two number:\n");
        scanf("%d%d",&A,&B);
        C = A-B;
        printf("%d - %d = %d ",A,B,C);
        break;
    case 'c':
        printf("Enter two number:\n");
        scanf("%d%d",&A,&B);
        C = A*B;
        printf("%d * %d = %d ",A,B,C);
        break;
    case 'd':
        printf("Enter two number:\n");
        scanf("%d%d",&A,&B);
        C = A/B;
        printf("%d / %d = %d ",A,B,C);
        break;
    case 'e':
        exit(0);
    default:
        printf("\nPlease.... Enter valid choice");
        break;
    }
    getch();
    return 0;
}