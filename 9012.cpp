#include <iostream>

using namespace std;

double itc_fmin(double num1, double num2)
{
    if(num1<num2)
    {
        return num1;
    }
    return num2;
}

int itc_sqrt(int num)
{
    for (int i = 0; i<num; i++){
        if(num-i*i==0)
        {
            return i;
        }
    }
    return -1;
}

int itc_skv(int num)
{
    if (num>=0)
    {
        return num*b;
    }
    return -1;
}

int itc_spr(int a, int b)
{
    if(a>=0 and b>=0)
    {
        return a*b;
    }
    return -1;
}

int itc_str(int a, int b, int c)
{
    if(a>=0 and b>=0 and c>=0)
    {
        d=(a+b+c)/2
        return itc_sqrt(p*(p-a)(p-b)(p-c));
    }
    return -1;
}
