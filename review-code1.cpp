#include "bits/stdc++.h"
#define fastAccess() ios_base::sync_with_stdio(0);cout.tie(0);iostream::sync_with_stdio(0);cin.tie(0); 
#define ll long long 
#define max_value 4294967296
#define loop(i,a,b,c) for(long i=a;i<b;i+=c)
#define rloop(i,a,b,c) for(long i=a;i>b;i-=c)
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define modN %1000000007
using namespace std;
ll getnum(){
    bool neg=false;
    register int c;
    ll x = 0;
    c = getchar_unlocked();

    while(c==' ' || c=='\n') c=getchar_unlocked();    
    if(c=='-'){
        neg = true;
        c=getchar_unlocked();
    }
    for(;(c>47 && c<58);c=getchar_unlocked())
        x = (x<<1) + (x<<3) +c -48;
    if(neg)
        x *=-1;
    return x;
}
	
int main(){
    fastAccess();
    ll N,X,Y,temp,ans=0;
    N=getnum();
    vector<ll> cord;
    loop(i,0,100001,1){
    	cord.push_back(500);
    }
    cord[0]=0;
    cord[100000]=0;
    loop(i,0,N,1){
    	X=getnum();
    	cord[X]=min(cord[X],getnum());
    }
    X=0;
    Y=0;
    stack<ll> st;
    loop(i,0,100001,1){
    	while(!st.empty() && cord[st.top()]>cord[i]){
    		Y=cord[st.top()];
    		st.pop();
    		if(st.empty())X=0;
    		else
    			X=st.top();
    		ans=max(ans,(i-X)*Y);
    	}
    	st.push(i);
    }
    cout<<ans<<'\n';
  return 0;
}

