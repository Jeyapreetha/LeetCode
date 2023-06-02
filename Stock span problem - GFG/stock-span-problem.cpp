//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       stack<pair<int,int>> st;
       vector<int> res;
       for(int i = 0; i < n; i++)
       {
        //   if(st.top().first > price[i] || st.empty())
        //   {
        //       st.push({price[i],1});
        //       res.push_back(1);
        //   }
        //   else
        //   {
               int val = 1;
               while(!st.empty() && st.top().first <= price[i])
               {
                    val += st.top().second;
                    st.pop();
                   
               }
               st.push({price[i],val});
               res.push_back(val);
           
       }
       return res;
       
    //   while(!st.empty() && st.top().first <= price)
    //     {
    //         span+= st.top().second;
    //         st.pop();
    //     }
    //     st.push({price, span});
    //     return span;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends