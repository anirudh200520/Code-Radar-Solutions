int factorialRange(int start, int end){
    for (int i=start; i<=end; i++){
        int fact=1;
        fact=fact*i;
        if (i==0 || i==1){
            printf("1 \n");
        }
        else {
            printf("%d\n",fact);
        }
    }
}