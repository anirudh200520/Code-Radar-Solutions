
int isPrime( int num ){
    int c;
    for (int i=2; i<num; i++){
        if((num%i)==0){
            c=c+1;
        }
    }
    if (c==0 || num==2 ){
        printf("0");
    }
    else{
        printf("1");
    }
}

