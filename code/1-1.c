#include <stdio.h>

int main()
{
    int var1 = 100;
    printf("int : %d\n", var1);
    printf("hex : %x\n", var1);    //16진법
    printf("oct : %o\n", var1);    //8진법

    char var2 = 'c';
    printf("char : %c\n", var2);

    char* var3 = "hello world!";    //c언어에는 string 타입 존재X, char* 형식으로 표시
    printf("string : %s\n", var3);

    float var4 = 3.141592;
    printf("float : %f\n", var4);
    printf("exp : %e\n", var4);    //과학표기법

    return 0;
}
