#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if ( a == 1 )
        printf("false");
    if ( a == 2 )
        printf("true");
    if ( a >2){
        for (int i=2; i<a; i++) {
            if (a%i == 0)
            {    printf("false");
                 break;
            }
            else
                printf("true");
        }
    return 0;
    }
}

