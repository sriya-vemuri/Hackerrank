int nonDivisibleSubset(int k, vector<int> s) {
        vector<int> check(k);
        for(int i=0;i<s.size();i++){
            check[s[i]%k]+=1;   //putting in remainder
        }
        int count = min(1,check[0]);   // temp val
        for(int i=1;2*i<=k;++i){
             int j = (k-i)%k;        // to find remainder
             if(i==j){
                 count+=min(1,check[i]); // suppose k/2
             }
             else
                count+=max(check[i],check[j]);  // takes max of the two so no num div
            
        }
        return count;
        
}
