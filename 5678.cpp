#include <iostream>

using namespace std;

bool itc_iseven(int num)
{
    if (num%2==0)
    {
        return true;
    }
    return false;
}

int itc_max(int num1, int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    return num2;
}

int itc_min(int num1, int num2)
{
    if(num1<num2)
    {
        return num1;
    }
    return num2;
}

double itc_fmax(double num1, double num2)
{
    if(num1>num2)
    {
        return num1;
    }
    return num2;
}
