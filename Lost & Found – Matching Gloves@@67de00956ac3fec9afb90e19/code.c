int countGlovePairs(int gloves[], int n){
    int pairs=0;
    for(int i=0; i<n; i++){
        for(int j=(i+1);j<n;j++){
            if (gloves[i]==0){
                pairs=pairs+0;
            }
            else if (gloves[i]==gloves[j]){
                pairs=pairs+1;
                gloves[i]=0;
                gloves[j]=0;
            }
        }
    }
    return pairs;
}