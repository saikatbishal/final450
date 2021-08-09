#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main()
{
    string str;
    cin>>str;
    vector<int> arr;
    stringstream ss(str);
    for (int i; ss >> i;) {
        arr.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    int i, j;
    bool swapped;
   for (i = 0; i < arr.size()-1; i++)
   {
     swapped = false;
     for (j = 0; j < arr.size()-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
     if (swapped == false)
        break;
   }
   for (int i = 0; i < arr.size()-1; i++)
   {
       cout<< arr[i]<<",";
   }
   cout << arr[arr.size()-1];
}
