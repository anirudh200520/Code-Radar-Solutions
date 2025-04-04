int selctionSort(int arr[],int n) {
    for (int i=0;i<n; i++){
        for (int j=i+1;j<n; j++){
            if (int arr[i]> int arr[j]){
                char temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        printf(" %c",arr[i]);
    }
}