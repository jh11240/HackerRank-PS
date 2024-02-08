void minimumBribes(vector<int> q) {
    int sum=0,cnt=q.size(),cntIdx=0;
    //value,index
    map<int,int> m;
    for(int elem: q){
        m.insert({elem,cntIdx++});
    }

    while(cnt>0){   
        int idx= m[cnt];

        if(q[idx]-1 !=idx){
            if(q[idx]-1-idx>2){
                cout<<"Too chaotic\n";
                return;
            }
            int tmp =idx;
            //for(; tmp<q.size()-1 && q[i]-1 != tmp ; tmp++){
            for (; tmp<q.size()-1 && q[tmp]-1 != tmp ; tmp++){    
                m[q[tmp]]++;
                m[q[tmp+1]]--;
                swap(q[tmp],q[tmp+1]);
            }
            sum+=tmp-idx;
        }
        cnt--;
    }
    cout<< sum<<"\n";
}