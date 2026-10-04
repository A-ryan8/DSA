class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;

        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            }
            else if (c == ')') {
                low--;
                high--;
            }
            else { // '*'
                low--;   // '*' acts as ')'
                high++;  // '*' acts as '('
            }

            // Even the maximum possible opens is negative
            if (high < 0)
                return false;

            // Minimum cannot be negative
            low = max(0, low);
        }

        // If zero is within the possible range, string is valid
        return low == 0;
    }
};