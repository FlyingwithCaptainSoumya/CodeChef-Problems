// Chef is very interested in studying biparite graphs. Today he wants to construct a bipartite graph with n vertices each, on the two parts, and with total number of edges equal to m. The vertices on the left are numbered from 1 to n. And the vertices on the right are also numbered from 1 to n. He also wants the degree of every vertex to be greater than or equal to d, and to be lesser than or equal to D. ie. for all v, d ≤ deg(v) ≤ D

// Given four integers, n, m, d, D, you have to help Chef in constructing some bipartite graph satisfying this property. If there does not exist any such graph, output -1

// Problem Code: ICPC16F


#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t, n, m, d, D, max, i, j, xtra, leftover;
	vector<int> edges;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>d>>D;
	    if( m<n*d )
	        cout<<-1<<endl;
	    else if( m>=n*d )
	    {
	        max = d + (m-n*d)/n;
	        if( (m-n*d)%n > 0 )
	            max++;
	        if( max > D )
	            cout<<-1<<endl;
	        else
            {
    	        edges.resize(m);
                for(i=0;i<n;i++)
                    edges[i] = d;
                xtra = (m-n*d)/n;
                for(i=0;i<n;i++)
                    edges[i] += xtra;
                leftover = (m-n*d)%n;
                for(i=0;i<leftover;i++)
                    edges[i]++;
                
                for(i=0;i<n;i++)
                {
                    for(j=0;j<edges[i];j++)
                        cout<<i+1<<" "<<(i+j)%n+1<<endl;
                }
            }
	    }
	}
	return 0;
}