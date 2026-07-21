#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char* s) {
    int len = strlen(s);
    char news[len + 1];
    int j=0;
    for (int i = 0; i < len; i++) {
        if (isalnum((unsigned char)s[i])) {
            news[j++] = tolower((unsigned char)s[i]);
        }
    }

    news[j] = '\0';  
    for (int left = 0, right = j - 1; left < right; left++, right--) {
        if (news[left] != news[right]) {
            return false;
        }
    }

    return true;
}