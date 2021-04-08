#include <iostream>
using namespace std;

int f2()
{
    int pp=2, qq=2, rr=3;
    if (pp && qq)
    {
        if (qq && rr)
        {
        pp = qq;
        if (rr ^ qq)
            pp = rr;
        rr = 2;
        }
        qq = 1;
        rr = 1;
    }
    return pp + qq + rr;
}
void f3()
{
//68

    int pp = 8, qq = 6, rr = 7;
    if (pp ^ qq)
    {
        pp = pp + (pp ^ qq);
    }
    if (pp ^ qq)
    {
        qq = qq + (pp ^ qq);
    }
    cout << pp + qq + rr;
}
void f5()
{
//66
int p = 4, q = 1, r = 3;
p = p & (p ^ p);
q = p & (p ^ q);
r = p & (p ^ r);
cout << p + q + r;

}
void f4()
{
//67
    int pp = 8, qq = 15, rr = 21;
    if (qq - rr > pp % qq)
    {
        pp = pp - qq;
        qq = qq - rr;
    }
    if (rr > 2 && rr < 5)
    {
        qq = rr;
    }
    cout << pp + qq + rr;
}
void f6()
{

//65
int a = 10, b = 3;
int c = a / b;
b = a % c;
cout << a << b << c;
}
void f7()
{
//80
int p = 5, q = 3, r = 2;
if(p>>2 < p>>1)
{
    q = 1;
if((r+q)>>1)
    r = 1;
else
    q = q + r;

}
cout << p + q + r;

}
void f8()
{
//77
int pp=2, qq=7, rr = 2;
if(pp<qq)
    rr = qq ^ rr;
else
    qq = pp ^ qq;
if(pp<qq)
    rr = qq ^ rr;
else
    qq = pp ^ qq;
cout << pp + qq + rr;
}
int fun(int n)
{
    if(n>100)
    {
        return n - 10;
    }
    return fun(fun(n + 11));
}
int fun2(int a)
{
    if (a > 3)
    {
        fun2(a / 6);
        cout << a<<" ";
        fun2(a / 6);
}
}
int fun3(int a, int b)
{
if(a && b && a+b > 0)
{

    return a + fun3(a - 2, b - 2) + b;
}
return a ^ b;

}
int main()
{

    cout << fun3(8,8);
}

void func()
{
int b, c, d, e, f;
    c = 26, d = 52, e = 13;
for (int b = 1; b <=3; b++)
{
    f = (c + d) / e;
    if (f % 13 == 0)
        e = e + f - (c - 10) + b;
else
    d = d + b + f;
}
cout << e << " " << d;
}