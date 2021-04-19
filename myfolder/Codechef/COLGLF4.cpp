#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int min3(int a, int b, int c)
{
  return c<(a<b?a:b)?c:(a<b?a:b);
}
int min2(int a, int b)
{
  return a<b?a:b;
}
void func()
{
  ll n,e,h,a,b,c;
  cout << "ENter";
  cin>>n;
  cin>>e;
  cin>>h;
  cin>>a;
  cin>>b;
  cin>>c;
  cout << "DOne";
  if(2*n>e+h){
    //in this case nothing could be ordered
    cout << "-1"<<endl; 
  }
  else
  {
    if(3*n<=h && 2*n<=e)
    {
        cout << min3(a,b,c)*n<<endl;
        //when any of the three can be bought,
        //they prefer the least valuable item
        return;
    }
    if(2*n<=e && n<=h)
    {
      cout << min2(a,c)*n<<endl;
      //if just omlette and cake can be bought
      return;
    }
    if(n<=e && 3*n<=h)//either all milkshakes or all cakes should be bought
    {
      cout << min2(b,c)*n<<endl;
      return;
    }
    
    
  }
  
}

int main() {
	ll t;
    cout << "Enter 1";
    cin>>t;
	while(t--)
	{
        cout << "While";
        func();
	}
	return 0;
}
