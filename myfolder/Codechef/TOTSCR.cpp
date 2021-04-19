#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  int n,k;
	  cin>>n>>k;
	  vector<int> score;
	  for(int i = 0;i<k;i++)
	  {
	    int p;
	    cin>>p;
	    score.push_back(p);
	  }
	  vector<ll> marks;
	  for(int i = 0; i<n; i++)
	  {
	    ll mark;
	    cin>>mark;
	    marks.push_back(mark);
	  }
	  for(int j = 0; j<n; j++)
	  {
	    vector<int> v = score;
	    int sum = 0;
	    while(marks[j]!=0)
	    {
	      int digit = marks[j]%10;
	      sum = sum+digit*v[v.size()-1];
	      v.pop_back();
	      marks[j] = marks[j]/10;
	    }
	    cout << sum<<endl;
	  }
	}
	return 0;
}
