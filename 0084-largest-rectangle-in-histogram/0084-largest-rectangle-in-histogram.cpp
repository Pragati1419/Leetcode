class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n = heights.size();
    stack<int> s;
    vector<int> left(n), right(n);
    
    // Calculate Next Greater Element (NGE) to the left
    for (int i = 0; i < n; i++) {
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    
    while (!s.empty()) 
        s.pop();  // Clear the stack
    
    // Calculate Next Greater Element (NGE) to the right
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    
    int maxArea = 0;
    for (int i = 0; i < n; i++) {
        int area = heights[i] * (right[i] - left[i] - 1);
        maxArea = max(maxArea, area);
    }
    
    return maxArea;
    }
};