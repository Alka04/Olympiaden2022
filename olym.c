#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    long int n, sum=0, r;
    printf("Ange nummer: ");
    scanf("%d", &n);
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=sum;
    while(n>0)
    {
        r=n%10;
        switch(r)
        {
            case 1:
            printf("A");
            break;
            case 2:
            printf("B");
            break;
            case 3:
            printf("C");
            break;
            case 4:
            printf("D");
            break;
            case 5:
            printf("E");
            break;
            case 6:
            printf("F");
            break;
            case 7:
            printf("G");
            break;
            case 8:
            printf("H");
            break;
            case 9:
            printf("I");
            break;
            case 0:
            printf("J");
            break;
            default:
            printf("ABCD");
            break;

        }
        n=n/10;
    }

    getch();
}