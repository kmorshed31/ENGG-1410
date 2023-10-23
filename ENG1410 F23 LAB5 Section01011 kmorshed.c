#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[256];
    int letterCount[26] = {0}; 

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1) {
        fgets(input, sizeof(input), stdin); 

        if (strlen(input) == 1 && input[0] == '\n') {
            break;
        }

        for (int i = 0; i < strlen(input); i++) {
            if (isalpha(input[i])) {
                char charval = toupper(input[i]);  // Convert to uppercase
                letterCount[charval - 'A']++;
            }
        }
    }

    for (int k = 0; k < 26; k++) {
        printf("%c: %d\n", 'A' + k, letterCount[k]);
    }

    return 0;
}