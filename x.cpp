#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a,
		pair<int, int>& b)
{
	return a.second < b.second;
}
void sort(map<int, int>& M)
{
	vector<pair<int, int> > A;
	for (auto& it : M) {
		A.push_back(it);
	}
	sort(A.begin(), A.end(), cmp);
	for (auto& it : A) {

		cout << it.first << ' '
			<< it.second << endl;
	}
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        map<int, int> M;
        int temp[100000]={-1},count=0;
        for (int i = 0; i < n; i++)
        {
            if(temp[a[i]]==-1){
                temp[a[i]]=b[i];
                count++;
                M.insert({ a[i], b[i] });
            }else{
                if(temp[a[i]]>b[i]){
                    temp[a[i]]=b[i];
                    M[a[i]]=b[i];
                }
            }
            
        }
	    sort(M);
    }
	return 0;
}
