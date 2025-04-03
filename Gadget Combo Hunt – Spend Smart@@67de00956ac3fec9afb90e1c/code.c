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

int maxGadgetSpend(int keyboards[],int n,int headsets[],int m,int budget){
    sort(keyboards,n);
    sort(headsets,m);
    int w[m+n];
    if ( (keyboards[n-1]+headsets[m-1])>budget){
        return -1;
    }
    int q=0
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (keyboards[i]+headsets[j]<budget){
                w[q]=keyboards[i]+headsets[j];
                q=q+1;
            }
        }
    }
    sort(w,(q+1));
    return w[0];
}

