class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int>hash;
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col] != '.')
                {
    
                    string r= "row"+to_string(row)+to_string(board[row][col]);
                    string c= "col"+to_string(col)+to_string(board[row][col]);
                    int b = (row/3) * 3 + (col/3);
                    string box= "box"+ to_string(b) + to_string(board[row][col]);

                    if(hash[r] != 1 && hash[c] != 1 && hash[box] != 1){
                        hash[r]=1;
                        hash[c]=1;
                        hash[box]=1;
                    }else{
                        return false;
                    }

                    }
                
            }
        }
        
        return true;
    }
};
