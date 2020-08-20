#include <stdio.h>
#include <string.h>

int main() {
    int arr[26];
    for (int i=0; i<26; i++) {
        scanf("%d", &arr[i]); // Initialises the array
    }
    char str[10];
    scanf("%s", &str);
    
    int max = 0;
    for (int i=0; i < strlen(str); i++) {
        if (arr[str[i]-97] > max) {
            
            max = arr[str[i]-97];
        }
    }
    int result = max*strlen(str);
    printf("%d", result);
}