#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(x==0 && y==0) cout<<0<<endl;
        else{
            if(y>0){
                int ans=y/2+y%2;
                int total_box=ans*15;
                int empty_box=total_box-(y*4);
                if(empty_box>=x)cout<<ans<<endl;
                else{
                    int need=x-empty_box;
                    int ans2=need/15;
                    if(need%15>0){
                        ans+=ans2+1;
                    }
                    else ans+=ans2;
                     cout<<ans<<endl;
                }
            }
            else{
                int ans=x/15;
                if(x%15>0){
                    ans++;
                }
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
