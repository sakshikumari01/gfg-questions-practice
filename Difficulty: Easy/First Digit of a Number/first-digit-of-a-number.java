class Solution {
    public int firstDigit(int n) {
        while (n >= 10) {
            n = n / 10;
        }
        return n;
    }
}