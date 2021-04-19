#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
#define in0(x) cout << "Enter " << x << " numbers\n";
#define in2(x, y) cin >> x >> y;
#define out1(x) cout << #x << "=" << x << endl;
#define out2(x, y) cout << #x << "=" << x << "\t" << #y << "=" << y << endl;
#define out3(x,y,z) cout << #x << "=" << x << "\t" << #y << "=" << y << "\t" << #z << "=" << z << endl;
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; i < n; i++)

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main()
{
    in0(2);
    int x, y,i;
    in2(x, y);
    out2(x, y);
    Fo(i,y,x)
        out1(i);
    return 0;
}