package p1277;

class Solution {
    public int countSquares(int[][] matrix) {
        
        int maxSide = Math.max(matrix.length, matrix[0].length);
        
        int count = 0;
        for (int side = 1; side < maxSide; side++){
            for (int x = 0; x + side - 1 < matrix[0].length; x++){
                for (int y = 0; y + side - 1 < matrix.length; y++){
                    if (isOk(x, y, side, matrix)){
                        count++;
                    }
                }
            }
            
        }
        
        return count;
        
    }
    
    private boolean isOk(int x, int y, int side, int[][] matrix){
        for (int i = x; i < x + side; i++){
            for (int j = y; j < y + side; j++){
                if (matrix[j][i] != 1){
                    return false;
                }
            }
        }
        return true;
    }
}