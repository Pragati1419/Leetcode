class SeatManager {
    priority_queue<int,vector<int>,greater<int>>seats;
public:
    SeatManager(int n) {
        for(int i=1;i<=n;i++){
            seats.push(i);
        }
    }
    
    int reserve() {
        int seatNumber=seats.top();
        seats.pop();
        return seatNumber;
    }
    
    void unreserve(int seatNumber) {
        seats.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */