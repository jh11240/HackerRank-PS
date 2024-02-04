void plusMinus(vector<int> arr) {
    float minus=0, zero=0,plus=0;
    int total=arr.size();
    sort(arr.begin(),arr.end());
    for(int elem : arr){
        if(elem<0)minus++;
        else if(elem == 0) zero++;
        else plus++;
    }
    cout<<fixed;
    cout.precision(6);
    cout<<plus/total<<"\n"<<minus/total<<"\n"<<zero/total;
}