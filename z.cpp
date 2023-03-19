#include <bits/stdc++.h>
using namespace std;
void flag()
{
   int n,k;
   cin>>n>>k;
   vector<int>a(n),b(n);
   set<int> negi;
   for(auto&i:a)
   {
      cin>>i;
      negi.insert(i);
   }

   for(auto&t:b)cin>>t;
   if(negi.size()<k)
   {
      cout<<-1<<endl;
      return;
   }
   map<int,int> akhil;
   for(int i=0;i<n;i++)
   {
      if(akhil.find(a[i])==akhil.end())
      {
         akhil[a[i]] = b[i];
         continue;
      }
      akhil[a[i]] = min(akhil[a[i]],b[i]);
   }
   vector<int>smriti;
   for(auto&x:akhil){
      smriti.push_back(x.second);
   }
   sort(smriti.begin(),smriti.end());
   long long res = accumulate(smriti.begin(),smriti.begin()+k,0LL);
   cout<<res<<endl;
}

int main() {
   int t = 1;
   cin>>t;
   while(t--)
   {
      flag();
   }
}