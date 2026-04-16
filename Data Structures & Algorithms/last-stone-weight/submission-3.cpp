class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> pq{};

        for (const auto s : stones) pq.push(s); //store every stone in pq
        while (pq.size() > 1){ //ensures theres always two stones
            int x = pq.top(); pq.pop(); //gets first largest stone
            int y = pq.top(); pq.pop(); //gets second largest stone

            if (x != y){ pq.push(x - y);}
        }
        return pq.empty() ? 0 : pq.top();
    }
};
