#include <stdio.h>

int main() {
    int X;  // Variable to hold the points scored by the team
    
    // Read the input
    scanf("%d", &X);
    
    // Check if the team qualifies
    if (X >= 12) {
        printf("Yes\n");  // Team qualifies
    } else {
        printf("No\n");   // Team does not qualify
    }
    
    return 0;
}
