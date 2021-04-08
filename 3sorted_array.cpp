<<<<<<< Updated upstream
/*Given three sorted arrays, find the common elements in all the three of them in the least time possible*/
#include <iostream>
using namespace std;
void search_common(int *a,int *b, int *c,int x, int y, int z)
{
    int i, j, flag = 0, flag1 = 0;
    for (int i = 0; i < x;i++)
    {
        for (int j = 0; j < y;j++)
        {
            if (b[j] < a[i])
            {
                flag = 0;
                continue;
            }
            else if(b[j]>a[i])
            {
                flag = 0;
                break;
            }
            else if (b[j] == a[i]) 
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
            continue;
        else if(flag ==1)
        {
            for (int k = 0; k < z; k++)
            {
                if(c[k]<a[i])
                {
                    flag1 = 0;
                    continue;
                }
                else if(c[k]==a[i])
                {
                    flag1 = 1;
                    break;
                }
                else if(c[k]>a[i])
                {
                    flag1 = 0;
                    break;
                }
            }
        }
    if(flag1==1)
        cout << a[i] <<" ";
    }
}
int main()
{
    int a[] = { 7, 12, 14, 15, 16, 17, 18 };
    int b[] = {3, 4, 7, 8, 10, 15};
    int c[] = {3, 7,8, 10, 13,15};
    int l1 = sizeof(a) / sizeof(a[0]);
    int l2 = sizeof(b) / sizeof(b[0]);
    int l3 = sizeof(c) / sizeof(c[0]);
    //as we can see '7' is the only common element;
    search_common(a, b, c, l1, l2, l3);
    //cout << x;
=======
/*Given three sorted arrays, find the common elements in all the three of them in the least time possible*/
#include <iostream>
using namespace std;
void search_common(int *a,int *b, int *c,int x, int y, int z)
{
    int i, j, flag = 0, flag1 = 0;
    for (int i = 0; i < x;i++)
    {
        for (int j = 0; j < y;j++)
        {
            if (b[j] < a[i])
            {
                flag = 0;
                continue;
            }
            else if(b[j]>a[i])
            {
                flag = 0;
                break;
            }
            else if (b[j] == a[i]) 
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
            continue;
        else if(flag ==1)
        {
            for (int k = 0; k < z; k++)
            {
                if(c[k]<a[i])
                {
                    flag1 = 0;
                    continue;
                }
                else if(c[k]==a[i])
                {
                    flag1 = 1;
                    break;
                }
                else if(c[k]>a[i])
                {
                    flag1 = 0;
                    break;
                }
            }
        }
    if(flag1==1)
        cout << a[i] <<" ";
    }
}
int main()
{
    int a[] = { 7, 12, 14, 15, 16, 17, 18 };
    int b[] = {3, 4, 7, 8, 10, 15};
    int c[] = {3, 7,8, 10, 13,15};
    int l1 = sizeof(a) / sizeof(a[0]);
    int l2 = sizeof(b) / sizeof(b[0]);
    int l3 = sizeof(c) / sizeof(c[0]);
    //as we can see '7' and '15' are the only common elements;
    search_common(a, b, c, l1, l2, l3);
    //cout << x;
>>>>>>> Stashed changes
}