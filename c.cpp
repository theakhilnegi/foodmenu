#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k){
    int a[n],b[n];
    unordered_set<int>st;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        if(st.size()<k){
            return -1;
        }
        vector<pair<int,int>>temp;
        vector<int>ans;
        for (int i = 0; i < n; i++)
        {
            temp.push_back({a[i],b[i]});
        }
        sort(temp.begin(),temp.end());
        ans.push_back(temp[0].second);
        for (int i = 1; i < temp.size(); i++)
        {
            if(temp[i].first==temp[i-1].first){
                if(ans[ans.size()-1]>temp[i].second){
                    ans[ans.size()-1]=temp[i].second;
                }
            }else{
                ans.push_back(temp[i].second);
            }
        int sum=0;
        sort(ans.begin(),ans.end());
        for (int i = 0; i < k; i++)
        {
            sum+=ans[i];
        }
        return sum;
    }
}
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
  return 0;
}