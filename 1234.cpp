#include <iostream>

using namespace std;

void itc_name()
{
    cout << "Vladislav";
}

void itc_fio()
{
    cout << "Dragunsky Vladislav Maksimovich";
}

int itc_abs(int num)
{
    if (num<0)
        {
            num=num*-1;
        }
    return num;
}

double itc_fabs(int num)
{
    if (num<0)
        {
            num=num*-1;
        }
    return num;
}

int itc_revnbr(int num5)
{
    return (num5-num5/10*10)*100 + (num5/10-num5/100*10)*10 + (num5/100);
}
