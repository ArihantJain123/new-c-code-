#include<stdio.h>

int main()
{
    char c;
    unsigned char d;
    int i;
    unsigned int b;
    short int a;
    unsigned short int e;
    long int f;
    unsigned long int  g;
    float h;
    double y;
    long double j;

    /*char*/
    scanf("%c%c\n",&c,&d);
    printf("%c%c\n",c,d);

    /*int*/
    scanf("%d%u\n",&i,&b);
    printf("%d%u\n",i,b);

    /* short int */

    scanf("%d%u\n",&a,&e);
    printf("%d%u\n",a,e);

    /*long int */

    scanf("%d%u\n",&f,&g);
    printf("%d%u\n",f,g);

    /*float double long double*/
    scanf("%f%lf%Lf",&h,&y,&j);
    printf("%f%lf%Lf",h,y,j);
    return 0;

}
