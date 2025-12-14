/*
Author: Shiva Kar
Topic: Data Structures Basics (C)
Program: Reverse String + Vowel Count
Input: One word (no spaces)
Output: Reversed word and number of vowels
*/

#include <stdio.h>

static int is_vowel(char c) {
    char x = (c >= 'A' && c <= 'Z') ? (char)(c + 32) : c;
    return x=='a'||x=='e'||x=='i'||x=='o'||x=='u';
}

int main(void) {
    char s[256];
    printf("Enter a word (<=255 chars): ");
    if (scanf("%255s", s) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int vowels = 0;
    for (int i = 0; s[i]; i++) if (is_vowel(s[i])) vowels++;
    // reverse
    int len = 0; while (s[len]) len++;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char t = s[i]; s[i] = s[j]; s[j] = t;
    }
    printf("Reversed: %s\n", s);
    printf("Vowel count: %d\n", vowels);
    return 0;
}
