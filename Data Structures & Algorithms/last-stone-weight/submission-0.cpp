class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> pq{};

        for (const auto s : stones) pq.push(s); //store every stone in pq
        while (pq.size() > 1){ //ensures theres always two stones
            int x = pq.top(); pq.pop(); //gets first heaviest stone
            int y = pq.top(); pq.pop(); //gets second heaviest stone

            int new_stone = x - y;
            pq.push(new_stone);
        }
        return pq.top();
    }
};
