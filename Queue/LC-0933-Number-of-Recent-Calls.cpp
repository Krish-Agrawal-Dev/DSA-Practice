class RecentCounter {
public:
    queue<int> q;
    int req = 0;

    RecentCounter() {}

    int ping(int t) {
       
        while (!q.empty() && !(q.front() >= t - 3000)) {

            req--;
            q.pop();
        }

        req++;
        q.push(t);

        return req;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */