#include <iostream>
#include <string>
using namespace std;


string dvoichka(int ch, string dv) //34546576863
    {
    char zifra;
    int k = dv.size() -1;
    while (k >= 0 && ch > 0) {
        zifra = ch % 2 + '0';
        dv[k] = zifra;
        k--;
        ch = ch / 2;
    }
    return dv;
}




int main()
{
    int ch, ch1, bit;
    cin >> ch >> bit;
    int i = 0;
    if (ch < 0)
        ch = ch * -1;
    string st(bit, '0');
    st = dvoichka(ch, st);
    cout << dvoichka(ch, st);
}
