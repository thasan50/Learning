#include <bits/stdc++.h>
using namespace std;
int main(){

    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);

    int n,m,max1=0;
    map<int,int> m1,m2;
    cin>>n>>m;

    int a,b,s=0;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        s+=a;
        m1[s]=b;
    }
    s=0;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        s+=a;
        m2[s]=b;
    }
    auto it1=m1.begin();
    auto it2=m2.begin();
    for(int i=1; i<=100; i++){
        if(!(i<=it1->first)) it1++;
        if(!(i<=it2->first)) it2++;
        max1=max(max1,(m2[it2->first]-m1[it1->first]));
    }
    cout<<max1<<'\n';
}