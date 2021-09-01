#include <stdio.h>
#define THIS 0*04
#define THAT 0*
#define BAR(x, y) ((x) > (y)) ? (x * y) : (y - x)
void mixit(char *s)
{
    int len = 0;
    while(s[len]!='\0'){
        len++;
    }
    for (int i = 0; i < len - 1;i+=2)
    {
        char t = s[i];
        s[i] = s[i + 1];
        s[i + 1] = t;
    }
    for (int i = 1; i < len; i += 2)
    {
        if(s[i]>='A' && s[i] <= 'Z')
        {
            s[i] = '@';
        }
        else{
            s[i] -= 32;
        }
    }
}
void fun2()
{
    int a = 4, b = 3;
    int *p = &a, *q = &b;
    int c;
    c = *q * *p++ + ++a / b--;
    printf("%d$%d$%d", a, b, c);
}
void fun3()
{
    static int sd;
    int j;
    for (j = -1; j <=5; j+=2)
    {
        switch(j)
        {
            case 1:
                sd++;
                break;
            case 2:
                sd += 2;
            case 4:
                sd %= 2;
                j = -1;
                continue;
            default:
                --sd;
                continue;
        }
        printf("%d", sd);
    }
}
void fun5(int x, int y, int z)
{
    printf("%d#%d#%d#", x, y, z);
}
void fun6(int *p)
{
    printf("%d#%d#", ++(*p), (*p)++);
}
void fun4()
{
    int a = 3;
    int *p = &a;
    fun5(a, a++, ++a);
    fun6(p);
    printf("%d", ++a);
}
int main()
{
    int a = 0;
    a = 5 || 2 | 1;
    a <<= 3;
    a ^ = 0×F;
    printf("%d", a);
    return 0;
}