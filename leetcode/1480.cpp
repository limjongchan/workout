/*
문제 해석: array의 시작부터 각 entry 까지의 합을 해당 entry에 계산

문제 접근: array를 순회하며 값을 더하고 더한 값을 새로운 array에 insert

제약 조건: array의 길이는 최대 1000이므로, O(n^2) = 1,000,000 도 여유 있음

시간 복잡도 : O(n)
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> result;
        for(int i = 0 ; i < nums.size(); i++) {
            sum += nums[i];
            result.push_back(sum);
        }
        
        return result;
        
    }
};