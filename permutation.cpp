#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    set<int>st;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k<=n){
        st.insert(k);
    }
    }

    cout<<(n-st.size())<<endl;

}