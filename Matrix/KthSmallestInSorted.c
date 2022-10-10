int kthSmallest(int** matrix, int matrixSize, int* matrixColSize, int k){
    int row = matrixSize;
    int col = matrixColSize[0];
    int low = matrix[0][0];
    int high = matrix[row - 1][col - 1];
    int mid, cnt;
    
    while (low < high) {
    
        mid = low + (high - low) / 2;
        cnt = 0;
        
        for (int i = 0; i < row; i++) {
            
            if (matrix[i][col - 1] <= mid) {
                cnt += col;
            }
            else {
                for (int j = 0; j < col; j++) {
                    if (matrix[i][j] <= mid) {
                        cnt++;
                    }
                }
            }
        }
      
        if (cnt >= k) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }  
   return high;
}
