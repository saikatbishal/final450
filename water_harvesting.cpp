#include<iostream>
using namespace std;
/*int find_max(int *a,int n)
{
    int max = a[0];
for (int i = 1; i < n; i++)
{
    if (a[i]>max)
    {
        max = a[i];
    }
    return max;
}
}
volume_trapped(int *a,int n)
{
    int start = 0;
    int sum = 0,volume = 0;
    if(find_max(a,n)!=a[0])
    {
        for (int i = start+1; i < n; i++)
        {
            if(a[start]<=a[i])
            {
                volume = volume + (a[start] * (i - 1 - start)) - sum;
                start = i;
                sum = 0;
            }
            else if(a[start]>a[i])
                sum = sum + a[i];
        }
        cout << volume << endl;
    }
else 
{
    for (int i = 1; i < n;i++)
    {
        if(a[i]==0)
            continue;
        else
        {    
            volume = volume + a[i] * (i - 1 - start);
            start = i;
        }
    }
    cout << volume;
}
}*/
int min(int a, int b)
{
if(a>b)
    return b;
else
    return a;
}
void trap_water(int *a, int n)
{
    int vol = 0;
    for (int i = 1; i < n-1;i++)
    {
        int max1 = a[i], max2 = a[i];
        for (int j = 0; j < i;j++)
        {
            if(max1<a[j])
                max1 = a[j];
        }
        for (int k = i+1; k < n;k++)
        {
            if(max2<a[k])
                max2 = a[k];
        }
        vol = vol + min(max1, max2) - a[i];
    }
    cout << vol;
}

int main()
{
    int a[] = {3,0,5,1,4,0,7};
    int n = sizeof(a) / sizeof(a[0]);
    trap_water(a, n);
    cout << endl;
    //volume_trapped(a, n); 
}