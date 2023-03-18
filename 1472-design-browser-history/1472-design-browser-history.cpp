class BrowserHistory {
    stack<string>h , f;
    string curr;
public:
    BrowserHistory(string homepage) {
        curr =homepage;
    }
    
    void visit(string url) {
        h.push(curr);
        curr =url;
        f = stack<string>();
        
    }
    
    string back(int steps) {
        
        while(steps>0 && !h.empty()){
            f.push(curr);
            curr= h.top();
            h.pop();
            steps--;
        }
        return curr;
    }
    
    string forward(int steps) {
        while(steps > 0 && !f.empty()){
            h.push(curr);
            curr= f.top();
            f.pop();
            steps--;
        }
        return curr;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */