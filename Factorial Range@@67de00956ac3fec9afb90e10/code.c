int factorialRange(int start, int end){
    int fact=1;
    for (int i=start; i<=end; i++){
        fact=fact*i;
        if (i==0 || i==1){
            printf("1 \n");
        }
        else {
            printf("%d\n",fact);
        }
    }
}