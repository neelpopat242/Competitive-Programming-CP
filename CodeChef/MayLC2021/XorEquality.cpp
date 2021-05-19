#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<stddef.h>
#include<stdlib.h>
#include <unordered_set>
#include<unordered_map>
#include<map>
#include<string>
#include<ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";
int exponentMod(int A, int B, int C)
{
    // Base cases
    if (A == 0)
        return 0;
    if (B == 0)
        return 1;
 
    // If B is even
    long y;
    if (B % 2 == 0) {
        y = exponentMod(A, B / 2, C);
        y = (y * y) % C;
    }
 
    // If B is odd
    else {
        y = A % C;
        y = (y * exponentMod(A, B - 1, C) % C) % C;
    }
 
    return (int)((y + C) % C);
}
int power(int x,  int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
ll bigMod(ll base, ll exp, ll m){

    if(exp == 0) return 1;

    if(!(exp & 1)){ //if exp is even
        ll temp= bigMod(base, exp/2, m)%m;
        return (temp*temp)%m;
    }

    else return ( (base%m)*(bigMod(base, exp-1, m))%m )%m;
}
int main() {
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL);
    vector<int> v1;
    vector<int> value;

// for(int i=0;i<200;i++){
//     value.push_back(i^(i+1));
//     cout<<i<<" "<<value[i]<<"\n";
// }

ll sum=1;
int mod=1000000007;
// out(mod);

vector<ll>a;
a.push_back(0);
ll num=1;
f(i,10e5+1){
    a.push_back(num%mod);
    num=(num%mod*(2%mod))%mod;



}
  int t;
  in(t);
  
  while(t--){
  
      unsigned int n;
      in(n);
      out(a[n]%mod);
    // out(power(2,n-1,mod)%mod);
    
  }
    
    return 0;
  

}