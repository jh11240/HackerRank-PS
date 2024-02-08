/*
 * Complete the 'gridChallenge' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY grid as parameter.
 */

string gridChallenge(vector<string> grid) {
    for(int i=0;i<grid.size();i++){
        sort(grid[i].begin(),grid[i].end());
    }
    for(int i=0;i<grid.size();i++){
        for(int j=1;j<grid.size();j++){
            if(grid[j][i] < grid[j-1][i]) return "NO";
        }
    }
    return "YES";
}