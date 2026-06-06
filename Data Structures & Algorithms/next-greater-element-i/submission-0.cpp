
    class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> nums1Idx;
        for (int i = 0; i < nums1.size(); i++) {
            nums1Idx[nums1[i]] = i;
        }

        vector<int> res(nums1.size(), -1);
        stack<int> s;

        for (int num : nums2) {
            
            while (!s.empty() && num > s.top()) {
                int val = s.top();
                s.pop();

                // ❗ safe check
                if (nums1Idx.find(val) != nums1Idx.end()) {
                    int idx = nums1Idx[val];
                    res[idx] = num;
                }
            }

            // ❗ sirf nums1 ke elements push karo
            if (nums1Idx.find(num) != nums1Idx.end()) {
                s.push(num);
            }
        }

        return res;
    }
};