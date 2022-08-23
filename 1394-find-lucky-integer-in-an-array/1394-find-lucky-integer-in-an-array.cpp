class Solution {
public:
    int findLucky(vector<int>& arr) {
      sort(arr.begin(),arr.end());
        int last=arr[arr.size()-1],count=0;
        for(int i=arr.size()-1;i>-1;i--){
            if(last!=arr[i]){
                if(count==last)
                    return last;
                count=0;
            }
            count++;
            last=arr[i];
        }
        if(count==last)
            return last;
        return -1;
    
    }
};