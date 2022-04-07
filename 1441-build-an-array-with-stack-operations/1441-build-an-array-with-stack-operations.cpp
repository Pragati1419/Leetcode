class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int index = 0;
        
        for(int i = 1 ; index!=target.size() ; i++){
            if(target[index] == i){
                ans.push_back("Push");
                index++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        
        return ans;

    }
};