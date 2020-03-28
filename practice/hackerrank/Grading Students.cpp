#include <bits/stdc++.h>
using namespace std;
int min(int arr[],int n)
{
	int mi=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<mi)
		{
			mi=arr[i];
		}
	}
//	cout<<"inside min and the min of " <<arr[0]<< "is "<<mi<<endl;
	return mi;
}
int max(int arr[],int n)
{
	int mi=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>mi)
		{
			mi=arr[i];
		}
	}
	cout<<"inside max and the max of "<<arr[0]<<"is "<<mi<<endl;
	return mi;
}
int main()
{
	cout<<"inside main";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    int * p=new int[m];
	int * q=new int[n];    
	cin>>m>>n;
    int x;
    for(int i=0;i<m;i++)
	{
		cin>>x;
		p[i]=x;
	}
	for(int i=0;i<n;i++)
	{
		cin>>x;
		q[i]=x;
	}  
		
	int v=min(q,n);
	int t=min(p,m);
	int l=max(p,m);
	int z=max(q,n);
	v=std::min(v,t);
	l=std::max(l,z);
	vector<int> h;
	vector<int> g;
	
		for(;v<=l	;v++)
		{
			cout<<"inside first for with value of v  "<<v<<endl;
			for(int i=0;v%p[i]==0;i++)
			{
				
				if(i==m-1)
				{
					h.push_back(v);
					break;
				}
			}
		}
		
	
if (h.size()!=0)
{
	for(auto it=h.begin();it!=h.end();it++)
	{
		for(int i=0;q[i]% *it==0;i++)
		{
			if(i==n-1)
			{
				g.push_back(*it);
				break;
			}
		}
	}
}
	if(g.empty())
	cout<<0;
	else{
	cout<<g.size();}
	
    
    return 0;
}

