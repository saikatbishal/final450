#include <iostream>
using namespace std;
void merge1(int*a, int* b, int n, int m)
{
    for (int j = m - 1; j >= 0;j--)
    {
        int i = n - 2;
        int last = n - 1;
        while (a[i] > b[j] && i >= 0)
        {
            a[i + 1] = a[i];
            i--;
        }
        if(i!=n-2 || last>b[j])
        {
            a[i+1] = b[j];
            b[j] = last;
        }
    }
}
void merge2(int ar1[], int ar2[], int m, int n) 
{ 
    // Iterate through all elements of ar2[] starting from 
    // the last element 
    for (int i=n-1; i>=0; i--) 
    { 
        /* Find the smallest element greater than ar2[i]. Move all 
           elements one position ahead till the smallest greater 
           element is not found */
        int j, last = ar1[m-1]; 
        for (j=m-2; j >= 0 && ar1[j] > ar2[i]; j--) 
            ar1[j+1] = ar1[j]; 
  
        // If there was a greater element 
        if (j != m-2 || last > ar2[i]) 
        { 
            ar1[j+1] = ar2[i]; 
            ar2[i] = last; 
        } 
    } 
} 
int main()
{
    int a[] = {1, 5, 9, 10, 15, 20};
    int b[] = {2, 3, 8, 13},last;
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    merge2(a, b, m, n);
    // for (int i = 0;i<m;i++)
    // {
    //     cout << a[i] << " ";
    // }
    for (int j = 0; j < n; j++)
    {
        cout << b[j] << " ";
    }
}