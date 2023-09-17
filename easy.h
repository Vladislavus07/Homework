#ifndef EASY_H_INCLUDED
#define EASY_H_INCLUDED
#include<iostream>
using namespace std;

void itc_name();
void itc_fio();
int itc_abs(int num);
double itc_fabs(double num);
int itc_revnbr(int num);

bool itc_iseven(int num);
int itc_max(int num1, int num2);
int itc_min(int num, int num2);
double itc_fmax(double num1, double num2);

double itc_fmin(double num1, double num2);
int itc_sqrt(int num);
int itc_skv(int num);
int itc_spr(int a, int b);
int itc_str(int a, int b, int c);

double itc_scir(int radius);
double itc_pow(int num, int step);
bool itc_ispositive(int num);
bool itc_ispositive_d(int num);

#endif // EASY_H_INCLUDED
