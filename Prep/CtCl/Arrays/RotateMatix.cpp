#include "./../../../Include/Common.h"

/*
    Rotate a matrix clockwise.
*/

void rotate_clockwise(int **matrix, int n) {
     
     // Layer by layer rotation
     for(int layer = 0; layer < n / 2; layer++) {
        int first = layer;
        int last = n - 1 - layer; 
        for(int i = first; i < last; i++){
            int offset = i - first; 
            int temp = matrix[first][i];
            matrix[first][i] = matrix[last - offset][first]; 
            matrix[last - offset][first] = matrix[last][last - offset];
            matrix[last][last - offset] = matrix[i][last];
            matrix[i][last] = temp;
        }
    }
}