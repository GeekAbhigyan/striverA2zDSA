class neighborSum { 
    private int[][] grid; 
    private int n; 
     
    public neighborSum(int[][] grid) { 
        this.grid = grid; 
        this.n = grid.length; 
    } 
 
    public int adjacentSum(int value) { 
        int[] pos = findPosition(value); 
        int sum = 0; 
        int[][] directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Top, Bottom, Left, Right 
 
        for (int[] direction : directions) { 
            int newRow = pos[0] + direction[0]; 
            int newCol = pos[1] + direction[1]; 
            if (isValid(newRow, newCol)) { 
                sum += grid[newRow][newCol]; 
            } 
        } 
        return sum; 
    } 
 
    public int diagonalSum(int value) { 
        int[] pos = findPosition(value); 
        int sum = 0; 
        int[][] directions = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}}; // Top-Left, Top-Right, Bottom-Left, Bottom-Right 
 
        for (int[] direction : directions) { 
            int newRow = pos[0] + direction[0]; 
            int newCol = pos[1] + direction[1]; 
            if (isValid(newRow, newCol)) { 
                sum += grid[newRow][newCol]; 
            } 
        } 
        return sum; 
    } 
 
    private int[] findPosition(int value) { 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < n; j++) { 
                if (grid[i][j] == value) { 
                    return new int[]{i, j}; 
                } 
            } 
        } 
        return null; // This shouldn't happen as all values are distinct and within range 
    } 
 
    private boolean isValid(int row, int col) { 
        return row >= 0 && row < n && col >= 0 && col < n; 
    } 
}