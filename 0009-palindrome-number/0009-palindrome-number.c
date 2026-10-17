bool isPalindrome(int x) {
    // Edge case handling
    if (x < 0 || (x % 10 == 0 && x != 0)) 
        return false;

    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    // Check even and odd length numbers
    return x == reversedHalf || x == reversedHalf / 10;
}