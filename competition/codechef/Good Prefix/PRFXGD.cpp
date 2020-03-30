#include <bkhhhkhbhjghhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhggggggggggggggggits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	int count=0;
	int k=0,x=0;
	cin>>k>>x;
//	cout<<"this is x "<<x<<endl;
	
	int A[26]={0};
	
	auto it=s.begin();
	do{
	
	for(;it!=s.end() && (A[int(*it)-97]<x);it++)
	{
		A[int(*it)-97]++;
	}
	if(k>0 && it!=s.end())
	{
		it++;
	}
	k--;
	}while(k>=0);
	
	for(int i=0;i<26;i++)
	{
	//	cout<<i<<" "<<A[i]<<endl;
		while(A[i])
			{
				count++;
				A[i]--;
			}
		

	}
	cout<<count<<endl;
	
}


int main()
{
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;-
	cin>>t;
	while(t--)
	solve();
    
    
    
    return 0;
}

