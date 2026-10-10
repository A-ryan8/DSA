class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int components = 0;

        while (head != nullptr) {
            if (st.count(head->val)) {
                // Start a new component if the previous
                // node is not part of nums.
                if (head->next == nullptr ||
                    !st.count(head->next->val)) {
                    components++;
                }
            }

            head = head->next;
        }

        return components;
    }
};