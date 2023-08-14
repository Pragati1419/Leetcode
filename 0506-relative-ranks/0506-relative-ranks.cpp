class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>>pq;
        for (int i = 0; i < n; ++i) {
        pq.push({score[i], i});
    }

    vector<string> answer(n);
    int rank = 1;

    while (!pq.empty()) {
        int index = pq.top().second;
        pq.pop();

        if (rank == 1) {
            answer[index] = "Gold Medal";
        } else if (rank == 2) {
            answer[index] = "Silver Medal";
        } else if (rank == 3) {
            answer[index] = "Bronze Medal";
        } else {
            answer[index] = to_string(rank);
        }

        ++rank;
    }

    return answer;

    }
};