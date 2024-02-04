/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int lToR=0,rToL=0;
    for(int i=0;i<arr.size();i++){
        lToR += arr[i][i];
    }
    for(int i=0;i<arr.size();i++){
        rToL += arr[arr.size()-i-1][i];
    }
    return lToR>rToL? lToR-rToL : rToL-lToR;
}