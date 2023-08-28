 #include <stdio.h>
#include <string.h>

int is_palindrome(char ar[]) {
    int length = strlen(ar);
    for (int i=0; i<length/2; i++) {
        if (ar[i] != ar[length-i-1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[11]; 
    scanf("%s", str);
    if (is_palindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}