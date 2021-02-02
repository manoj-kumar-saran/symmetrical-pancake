#include <bits/stdc++.h>
using namespace std;
void firstNegative(int k, vector<int> &Arr , int n){
        // code here 
        
        int i = 0, j = 0;
        int sum = 0;
        vector<int> v;
        queue<int> q;
        while(j < n)
        {

            if(j-i+1 < k)
            {
              if(Arr[j] < 0)
              {
                q.push(Arr[j]);
              }
            j++;
            }
            else if(j-i+1 == k)
            {
                //Calculation
                if(q.size() == 0)
                {
                    v.push_back(0);
                }
                else
                {
                    v.push_back(q.front());
                    if(Arr[i] == q.front())
                    {
                        q.pop();
                    }
                    i++;
                    j++;
                }
                for(auto i:v)
                {
                    cout<<i<<" ";
                }
            }
        }
        cout<<endl;
}

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0; i < n; i++)
	    {
	        cin>>v[i];
	    }
	    int k;
	    cin>>k;
	    firstNegative(k,v,n);
	}
	
	return 0;
}