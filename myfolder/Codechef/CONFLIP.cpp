#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int g;
	cin>>g;
	while(g--)
	{
	int i,n,q;
	cin>>i>>n>>q;
	int head=0,tail=0;
	if(n%2 == 1)
	    {
	    if(i == 1)
	    {
	      head=n/2;
	      tail = n/2+1;
	    }
	    else if(i==2)
	    {
	      head = n/2+1;
	      tail = n/2;
	    }
	    }
	    else if(n%2 == 0)
	    {
	      head = n/2;
	      tail = n/2;
	    }
	    if(q==1)cout <<head<<endl;
	    else cout <<tail<<endl;
	  }
	}
	return 0;
}
