int factorialRange(int start, int end){
    int fact=1;
    if (start < 0 || end <0 || start>end){
        printf("Invalid range");
    }
    else if(start == 0){
        printf("1 \n");
        for (int i=1; i<=end; i++){
            fact=fact*i;
            printf("%d \n",fact);
        }
    }
    else{
        for (int i=start; i<=end; i++){
            for (int o=1; o<=i ;o++){
                fact=fact*o;
            }
            printf("%d \n",fact);
            fact=1;
        } 
    }
}