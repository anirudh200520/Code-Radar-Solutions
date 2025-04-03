int maxGadgetSpend(int keyboards[],int n,int headsets[],int m,int budget){
    sort(keyboards,n);
    sort(headsets,m);
    if ( (keyboards[n-1]+headsets[m-1])>budget){
        printf("-1");
    }
}

int sort(int arr[],int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}