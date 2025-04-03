int factorialRange(int start, int end){
    int fact=1;
    for (int i=1; i<=end; i++){
        fact=fact*i;
        if (start==0 || start==1){
            printf("1 \n");
        }
        else {
            printf("%d\n",fact);
        }
    }
}