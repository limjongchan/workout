/*
문제 해석: pivot을 기준으로 왼쪽 entry들의 합과 오른쪽 entry들의 합이 같으면 pivot

제약 조건: array의 길이는 최대 10^4이므로, O(n^2) = 10^8 / O(n^2)은 느림

문제 접근: 모든 엔트리의 합 total을 구한 뒤, entry를 순회하며 순회하며 더한 값 left으로 total - left == left 이면 해당 엔트리가 pivot

시간 복잡도 : O(n)
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0, left = 0;
        
        for(int i = 0; i < nums.size(); i++)
            total += nums[i];
        
        for(int i = 0; i < nums.size(); i++) {
            if (left == total - (left + nums[i])) return i;
            left += nums[i];
        }
        
        return -1;
    }
};