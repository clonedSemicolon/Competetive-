#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	std::vector<int> v;
	for (int i = 0; i < n; ++i){
	
		int k;	
		cin>>k;
		v.push_back(k);
	}


	sort(v.begin(),v.end());

	int mx=0;
	int cnt=0,t=0,p=0;

	while(t<n)
	{
		if(v[t]-v[p]<=5)
		{
			mx=max(mx,t-p+1);
			t++;
		}

		else
		{
			p++;
			continue;
		}
	}

	cout<<mx<<endl;
	return 0;
}