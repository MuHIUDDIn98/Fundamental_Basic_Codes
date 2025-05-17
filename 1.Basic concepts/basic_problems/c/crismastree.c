#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Calculate parameters
    int topHeight = 6 + (N - 1) / 2;  // Top triangle height: 6 rows for N=1, +1 for every +2 in N
    int maxWidth = 2 * topHeight - 1; // Maximum width equals 2*height - 1
    int trunkHeight = 5;              // Trunk is always 5 rows high
    int trunkWidth = N;               // Trunk width equals N
    
    // Print the top (triangular) part of the tree
    for (int i = 0; i < topHeight; i++) {
        int stars = 2 * i + 1;
        int spaces = (maxWidth - stars) / 2;
        
        // Print leading spaces
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        
        // Print stars
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    // Print the trunk (rectangular) part of the tree
    for (int i = 0; i < trunkHeight; i++) {
        // Calculate spaces to center the trunk
        int spaces = (maxWidth - trunkWidth) / 2;
        
        // Print leading spaces
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        
        // Print trunk stars
        for (int j = 0; j < trunkWidth; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}