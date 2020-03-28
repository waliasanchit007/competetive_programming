#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t;
    
    
    
    
    cin>>t;
    for(long int i=0;i<t;i++)
    {
        int n;
   
    int m;
        cin>>n>>m;
        int q=0;
    int * p=new int[n];
        int * f=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>p[j];
    }
     int * sum=new int [m];
    int * final=new int[m];
    for(int i=0;i<m;i++)
    {
        sum[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        final[i]=0;
    }
    stack <int> s;
    
    for (int k=1;k<=m;k++)
    {
        for(int i=0;i<n;i++)
        {
            if(f[i]==k)
            {
                s.push(i);
            }
        }
        sum[k-1]=0;
        while(!s.empty())
        {
            sum[k-1]=sum[k-1]+p[s.top()];
            s.pop();
        }
        if(sum[k-1]!=0)
        {
            final[q]=sum[k-1];
            q++;
        }
    }
    
    int min=final[0];
    for (int h=1;h<q;h++)
    {
        if(final[h]<min)
        min=final[h];
    }
    
    cout <<min<<endl;
    
    }
	
	return 0;
}

