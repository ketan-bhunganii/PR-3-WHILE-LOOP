#include <stdio.h>

int main()
{

    char c='a';
    int k =3;
    do{
        printf("%c\n",c);
        c += k + 1;
    } while(c <='z');
    
}