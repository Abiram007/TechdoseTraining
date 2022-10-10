void rotate(int** matrix, int matrixSize, int* matrixColSize){
    
    for(int row = 0; row < matrixSize; row++) {
        for(int col = row; col < matrixSize; col++) {
            int tmp = matrix[row][col];
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = tmp;
        }
    }
        for(int row = 0; row < matrixSize; row++) {
        int beg = 0;
        int end = matrixSize - 1;
        while(beg < end) {
            int tmp = matrix[row][beg];
            matrix[row][beg] = matrix[row][end];
            matrix[row][end] = tmp;
            beg++;
            end--;
        }
    }
}
