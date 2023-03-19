#include<bits/stdc++.h>
using namespace std;

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
        int temp[100000]={-1},count=0;
	    vector< pair <int, int> > vect;
	    for (int i=0; i<n; i++){
                if(temp[a[i]]==-1){
                temp[a[i]]=b[i];
                count++;
            }else{
                if(temp[a[i]]>b[i]){
                    temp[a[i]]=b[i];
                    M[a[i]]=b[i];
                }
            }
		    vect.push_back( make_pair(b[i],a[i]) );
        }

	// Printing the original vector(before sort())
	cout << "The vector before sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
		// "first" and "second" are used to access
		// 1st and 2nd element of pair respectively
		cout << vect[i].first << " "
			<< vect[i].second << endl;

	}

	// Using sort() function to sort by 2nd element
	// of pair
	sort(vect.begin(), vect.end());
	cout << "The vector after sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}
    }
	return 0;
}
