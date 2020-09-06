#include <bits/stdc++.h>
using namespace std;
long bin(long ar[],long n){
    long h=0;
    for (int i=0;i<n;i++){
        h+=ar[i]*pow(2,i);
    }
    cout<<h;
    return h;
}
int solve(){
    long i,n,k,max=0,o,t=-1;
    cin>>n>>k;
    string st;
    cin>>st;
    long a[n];
    for(i=0;i<n;i++){
        a[i]=48-(int)st[i];  
    }
    for(i=0;i<n;i++){
        o=bin(a,n);
        if(o>max){
            t++;
            o=max;
        }
        while(--k){
            t+=n;
        }
        cout<<t;
    }

return 0;
}
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
