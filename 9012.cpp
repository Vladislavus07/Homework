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
    if (num == 0)
    {
        return 0;
    }
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
    if (num>0)
    {
        return num*num;
    }
    return -1;
}

int itc_spr(int num1, int num2)
{
    if(num1>0 and num2>0)
    {
        return num1*num2;
    }
    return -1;
}

int itc_str(int a, int b, int c)
{
    int d,p;
    if(a>0 and b>0 and c>0)
    {
        d=(a+b+c)/2;
        return itc_sqrt(p*(p-a)*(p-b)*(p-c));
    }
    return -1;
}
