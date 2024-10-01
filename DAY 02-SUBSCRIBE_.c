#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X; // N: number of friends, X: cost of one subscription
        scanf("%d %d", &N, &X);

        // Calculate the number of subscriptions needed
        int subscriptions = (N + 5) / 6; // This effectively computes ceil(N / 6)
        
        // Calculate the total cost
        int totalCost = subscriptions * X;
        
        // Output the total cost
        printf("%d\n", totalCost);
    }

    return 0;
}
