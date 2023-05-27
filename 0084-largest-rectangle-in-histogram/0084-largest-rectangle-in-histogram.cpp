class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> s;
        stack<pair<int,int>> ss;
        vector<int> right;
         vector<int> left;
        int index=heights.size();
        for(int i=heights.size()-1; i>=0; i--){
            if(s.size()==0){
                right.push_back(index);
            }
            else if(s.size()>0 && s.top().first<heights[i]){
                right.push_back(s.top().second);
            }
            else if(s.size()>0  && s.top().first>=heights[i]){
                while(s.size()>0  && s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.size()==0){
                    right.push_back(index);
                }
                else{
                    right.push_back(s.top().second);
        
                }
            }
            s.push({heights[i],i});

        }
        reverse(right.begin(),right.end());

       


          for(int i=0; i<heights.size(); i++){
            if(ss.size()==0){
                left.push_back(-1);
            }
            else if(ss.size()>0 && ss.top().first<heights[i]){
                left.push_back(ss.top().second);
            }
            else if(ss.size()>0  && ss.top().first>=heights[i]){
                while(ss.size()>0  && ss.top().first>=heights[i]){
                    ss.pop();
                }
                if(ss.size()==0){
                    left.push_back(-1);
                }
                else{
                    left.push_back(ss.top().second);
        
                }
            }
            ss.push({heights[i],i});

        }


       vector<int> ans;
        

        for(int i=0; i<heights.size(); i++){
          int z=heights[i]*(right[i]-left[i]-1);
            ans.push_back(z);
        }
        sort(ans.begin(), ans.end());
        return ans[heights.size()-1];
  
    }
};