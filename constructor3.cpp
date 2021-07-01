#include<iostream>
#include<stdlib.h>

using namespace std;

class DEPOSITE {
    long int principal;
    int time;
    float rate;
    float total_amt;
public :
    DEPOSITE();
    DEPOSITE(long p, int t,float r);
    DEPOSITE(long p,int t);
    DEPOSITE(long p, float r);
    void calc_amt(void);
    void display(void);






};
DEPOSITE :: DEPOSITE ()
{
 principal =  time = rate = 0.0;

}
DEPOSITE :: DEPOSITE (long p, int t, float r)
{
 principal = p; time = t ;rate = r;

}
DEPOSITE :: DEPOSITE (long p, int t)
{
    principal = p; time = t ;rate = 0.08;
}
DEPOSITE :: DEPOSITE (long p, float  r)
{
    principal = p; time = 2 ;rate = r ;

}
void  DEPOSITE :: calc_amt(void)
{
    total_amt =  principal + (principal*time*rate)/100;
}
void DEPOSITE :: display(void)
{
    cout<<"\n principal amount : "<<principal;
    cout<<"\n period of investment : "<<time <<"years";
    cout<<"\n rate of interest :"<<rate;
    cout<<"\n total amount :"<<total_amt<<"\n";



}
int main()
{
    system("cls");
    DEPOSITE D1,D2(2000,2,0.07f),D3(4000,1),D4(3000,0.12f);
    D1.calc_amt();
    D2.calc_amt();
    D3.calc_amt();
    D4.calc_amt();
    cout <<"object 1 \n"; D1.display();
    cout <<"object 2 \n"; D2.display();
    cout <<"object 3 \n"; D3.display();
    cout <<"object 4 \n"; D4.display();
    return 0;



}
