#include<bits/stdc++.h>
using namespace std;
int main(){
	    long long t,n;
	    cin>>t;
	    for(int i=1;i<=t;i++)
	    {
		    cin>>n;
		    long long x = 2 * n;
		    long long y = n + 1;
		    long long a = __gcd(x, y);
		    cout << x / a << " " << y / a << endl;
	    }
}
