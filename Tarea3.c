#include <stdio.h>

int main(){

    int resultado=0,a=0,b=0,c=8,d=2;
    a=(c*d-c/d)-c;
    a=a++;
    b=(c*d+d)-6;
    b=b--;
    resultado=a+b;
    printf("%d",resultado);

    return 0;
}
