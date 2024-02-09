#include <stdio.h>

int main() {
    int ascii_values[] = {65, 114, 115, 104, 105, 121, 97, 32, 102, 97, 116, 104, 105};
    
    printf("ASCII representation of Arshiya fathi:\n");
    
    for (int i = 0; i < sizeof(ascii_values) / sizeof(ascii_values[0]); ++i) {
        printf("%c ", ascii_values[i]);
    }
    
    printf("\n");
    return 0;
}
