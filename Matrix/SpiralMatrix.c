int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    if(matrixSize==0){
    *returnSize=0;
    return NULL;
}

    int * result=(int*)malloc(sizeof(int)*(matrixSize*(*matrixColSize)));
    int top=0,down=matrixSize-1,left=0,right=* matrixColSize-1;
    int dir=0;
    int j=0;
    while(top<=down&&left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                result[j++]=matrix[top][i];
            }
            top++;
            dir++;
        }
        else if(dir==1)
        {
            for(int i=top;i<=down;i++)
            {
                result[j++]=matrix[i][right];
            }
            right--;
             dir++;
        }
        else if(dir==2)
        {
            for(int i=right;i>=left;i--)
            {
                result[j++]=matrix[down][i];
            }
            down--;
             dir++;
        }
        else if(dir==3)
        {
            for(int i=down;i>=top;i--)
            {
                result[j++]=matrix[i][left];
            }
            left++;
             dir++;
        }
        dir=(dir+4)%4;
    }
    * returnSize=j;
    return result;
}
