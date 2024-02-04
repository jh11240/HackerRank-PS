/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int lonelyinteger(vector<int> a) {
    sort(a.begin(),a.end());
    if(a.size()==1) 
        return a[0];
    if(a[0] != a[1]){
        return a[0];
    }
    for(int i=1;i<a.size()-1;i++){
        if(a[i] != a[i-1] && a[i]!= a[i+1]){
            return a[i];
        }
    }
    if(a.back() != *(a.end()-2)){
        return a.back();
    }
    return -1;
}
