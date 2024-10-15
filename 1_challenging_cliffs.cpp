/*

//Talcum Powder
*/
#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
using namespace std;
/*
Thought of the day.
Live like a man, Roar like a man.
*/

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>height(n);
        for(auto &x:height){
            cin>>x;
        }
        sort(height.begin(),height.end());
        if(n==2){
            cout<<height[0]<<" "<<height[1]<<endl;
            continue;
        }
        ll pos=-1, minm=INT32_MAX;
        for( ll i=1;i<n;i++){
            if(minm>abs(height[i]-height[i-1])){
                pos=i;
                minm=abs(height[i]-height[i-1]);
            }
        }
        for(ll i=pos;i<n;i++){
            cout<<height[i]<<" ";
        }
        for(ll i=0;i<pos;i++){
            cout<<height[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}