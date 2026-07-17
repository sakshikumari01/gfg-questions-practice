class Solution {
public:
    int vowelCount(string s) {
        vector<int> cnt(5, 0);

        for (char c : s) {
            if (c == 'a') cnt[0]++;
            else if (c == 'e') cnt[1]++;
            else if (c == 'i') cnt[2]++;
            else if (c == 'o') cnt[3]++;
            else if (c == 'u') cnt[4]++;
        }

        long long ways = 1;
        int distinct = 0;

        for (int x : cnt) {
            if (x > 0) {
                ways *= x;
                distinct++;
            }
        }

        // No vowel present
        if (distinct == 0)
            return 0;

        long long fact = 1;
        for (int i = 2; i <= distinct; i++)
            fact *= i;

        return ways * fact;
    }
};