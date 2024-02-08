int superDigit(string n, int k) {
    if(n.size()==1) return n[0]-'0';
    long long sum=0;

    string next="";
    for(char elem: n){
        sum += elem -'0';
    }
    long long tmp=sum;
    tmp*=k;
    while(tmp>0){
        next += tmp%10 +'0';
        tmp/=10;
    }
    reverse(next.begin(),next.end());
    return superDigit(next, 1);
}