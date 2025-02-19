#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100


void reverseWords(char str[]);

int main() {
    char str[MAX_LENGTH];

    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); 

    
    str[strcspn(str, "\n")] = 0;
    reverseWords(str);
    printf("Reversed Sentence: %s\n", str);
    return 0;
}

void reverseWords(char str[]) {
    int i = 0, j = 0;
    int length = strlen(str);

    while (i < length) {
        while (i < length && str[i] == ' ') {
            i++; 
        }
        j = i; 
        while (j < length && str[j] != ' ' && str[j] != '\0') {
            j++;
        }
        for (int start = i, end = j - 1; start < end; start++, end--) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
        }

        
        i = j;
    }
}
