#include <iostream>

using namespace std;

void itc_name()
{
    cout << "Vladislav";
}

void itc_fio()
{
    cout << "Dragunsky Vladislav Maksimovich"
}

int itc_abs(int num)
{
    if (num<0)
        {
            num=num*-1
        }
    return num;
}

double itc_fabs(int num)
{
    if (num<0)
        {
            num=num*-1
        }
    return num;
}

int itc_revnbr(int num)
{
    return (num-num/10)*100 + (num/10-num/100*10)*10 + (num/100);
}
