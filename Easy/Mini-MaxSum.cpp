/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    long long min=0,max=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<4;i++){
        min+=arr[i];
    }
    for(int i=1;i<5;i++){
        max+=arr[i];
    }
    cout<<min<<" "<<max;
}
