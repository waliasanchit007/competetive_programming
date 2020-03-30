#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int m,n;
	cin>>n>>m;
	int p[n]={0};
	int f[n]={0};
	for (int i=0;i<n;i++)
   		{
   			cin>>f[i];
		   }
		   
		for (int i=0;i<n;i++)
   		{
   			cin>>p[i];
		   }
	int min=9999999;
	for(int i=1;i<=m;i++)
	{
		bool flag=false;
		int pre=0;
		for(int j=0;j<n;j++)
		{
			if(f[j]==i)
			{
				pre=pre+p[j];
				flag=true;
			}
		}
		
		if(flag)
		{
			if(min>pre)
			{
				min=pre;
			}
		}
	}
	cout<<min<<endl;
}
int main()
{
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    solve();
    
    
    return 0;
}

