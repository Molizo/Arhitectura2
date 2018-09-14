#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
ifstream in("arhitectura2.in");
ofstream out("arhitectura2.out");

int main()
{int n;
    in>>n;
    int v[n];
    for(int i=0;i<n;i++)
        in>>v[i];
    sort(v,v+n, greater<int>());
    for(int i=0;i<n;i++)
        out<<v[i]<<" ";
    out<<"\n";
    if(v[0]==(v[1]+0)/2)
        out<<"1 ";
    else
        out<<"0 ";
    for(int i=1;i<n-1;i++)
    {
        if(v[i]==(v[i-1]+v[i+1])/2)
            out<<"1 ";
        else
            out<<"0 ";
    }
    if(v[n]==(v[n-1]+0)/2)
        out<<"1 ";
    else
        out<<"0 ";
    return 0;
}
