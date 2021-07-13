#include<stdio.h>

int add(int ,int );
int main()
{
    int x=5,y=8,sum;
     sum = add(x,y);
     printf("value of sum = %d ",sum);
     return 0;



}
int add(int i,int j)
{

    int c;
    c = i+j;
    return(c);

}
