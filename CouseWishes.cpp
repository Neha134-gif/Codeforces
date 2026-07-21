#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> a(k+2,n);
        for(int i=1;i<=k;i++) cin>>a[i];
        
        vector<int> b(n+1);
        for(int i=1;i<=n;i++) cin>>b[i];
        
        vector<int> ops;
        
        bool changed=true;
        while(changed){
            changed=false;
            for(int level=k;level>=1;level--){
                for(int i=1;i<=n;i++){
                    if(b[i]==level){
                        int cnt=0;
                        for(int j=1;j<=n;j++)
                            if(b[j]==level+1) cnt++;
                        if(level+1==k+1 || cnt<a[level+1]){
                            b[i]++;
                            ops.push_back(i);
                            changed=true;
                            
                        }
                    }
                }
            }
        }
        
        bool ok=true;
        for(int i=1;i<=n;i++)
            if(b[i]!=k+1){ok=false;break;}
        
        if(!ok) cout<<-1<<"\n";
        else{
            cout<<ops.size()<<"\n";
            for(int x:ops) cout<<x<<" ";
            cout<<"\n";
        }
    }
    return 0;
}