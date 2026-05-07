class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftArr(n, 1);
        vector<int> rightArr(n, 1);
        vector<int> output(n);

        //left side
        for (int i = 1; i < n; i++){
            leftArr[i] = leftArr[i - 1] * nums[i-1];
        }

        //right side
        for (int i = n - 2; i>= 0; i--){
            rightArr[i] = rightArr[i+1] * nums[i + 1];
        }

        for (int i = 0; i < nums.size(); i++){
            output[i] = leftArr[i] * rightArr[i];
        }
        return output;
    }
};
