// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        
         stack<long long> s; 
  
    long long max_area = 0;  
    long long tp;  
    long long area_with_top; 
  
    long long i = 0; 
    
    //traversing the array.
    while (i < n) 
    { 
        //if current bar is greater than or equal to bar on top 
        //of stack, we push the index into stack. 
        if (s.empty() || arr[s.top()] <= arr[i]) 
            s.push(i++); 
  
        //if current bar is lower than bar on top of stack, we calculate
        //area of rectangle with top of stack as the smallest bar.  
        //i is rightindex for top and element before top in stack is leftindex
        else
        { 
            tp = s.top();  
            //popping the top element of stack.
            s.pop();  
  
            //calculating the area with hist[tp] stack as smallest bar. 
            area_with_top=arr[tp]*(s.empty()? i :i-s.top()-1); 
  
            //updating maximum area, if needed. 
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    } 
  
    //now popping the remaining bars from stack and calculating 
    //area with every popped bar as the smallest bar.
    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        
        area_with_top=arr[tp]*(s.empty()? i :i-s.top()-1); 
  
        //updating maximum area, if needed. 
        if (max_area < area_with_top) 
            max_area = area_with_top; 
    } 
    //returning the maximum area.
    return max_area; 

    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends