class Solution {
public:
    int maximumScore(int a, int b, int c) {
      priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int count=1;
        int ans=0;
        while(count)
        {
            int count=pq.top();
            pq.pop();
            int s=pq.top();
            pq.pop();
            if(count==0 || s==0)
                break;
            ans++;
            count--; 
            s--;
            pq.push(count);
            pq.push(s);
        }
        return ans;
    }
};