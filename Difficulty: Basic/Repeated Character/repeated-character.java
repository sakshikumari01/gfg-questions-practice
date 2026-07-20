class Solution {
    public char firstRep(String S) {
        int[] freq = new int[26];

        // Count frequency of each character
        for (int i = 0; i < S.length(); i++) {
            freq[S.charAt(i) - 'a']++;
        }

        // Find first repeating character
        for (int i = 0; i < S.length(); i++) {
            if (freq[S.charAt(i) - 'a'] > 1) {
                return S.charAt(i);
            }
        }

        return '#';
    }
}