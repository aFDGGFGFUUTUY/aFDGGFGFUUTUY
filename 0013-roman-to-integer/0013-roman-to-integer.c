#include <string.h>

// Helper function to map Roman characters to values
int getValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int total = 0;
    int n = strlen(s);
    
    for (int i = 0; i < n; i++) {
        int currentVal = getValue(s[i]);
        
        // Subtract if smaller value precedes larger value (e.g., IV → 4)
        if (i + 1 < n && currentVal < getValue(s[i+1])) {
            total -= currentVal;
        } else {
            total += currentVal;
        }
    }
    
    return total;
}