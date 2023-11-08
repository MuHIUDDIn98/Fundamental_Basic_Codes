#include <stdio.h>

int is_Jadu_Matrix(int N, int M, int matrix[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == j || i + j == N - 1) {       //check primery diagonal and secondary diagonal element 
                if (matrix[i][j] != 1) {         //checking 1 or not 1
                    return 0; // Not a Jadu Matrix
                }
            } else {
                if (matrix[i][j] != 0) {
                    return 0; // Not a Jadu Matrix
                }
            }
        }
    }
    return 1; // Jadu Matrix
}

int main() {
    int N, M;
    //taking matrix size must be square matrix 
    scanf("%d %d", &N, &M);

    int matrix[N][M];
    //taking matrix input....
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (is_Jadu_Matrix(N, M, matrix)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}