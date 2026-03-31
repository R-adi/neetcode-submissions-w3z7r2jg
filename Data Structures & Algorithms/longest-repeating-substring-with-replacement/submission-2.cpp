#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int counts[26] = {0}; // Fixed-size array for frequencies
        int max_freq = 0, left = 0;

        for (int right = 0; right < s.length(); ++right) {
            // Update max frequency seen in the current window
            max_freq = max(max_freq, ++counts[s[right] - 'A']);

            // If the window is invalid, slide it forward by one
            if ((right - left + 1) - max_freq > k) {
                counts[s[left] - 'A']--;
                left++;
            }
        }
        
        
        return s.length() - left;
    }
};
