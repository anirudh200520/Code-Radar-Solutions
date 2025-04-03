int trackScores(int score[], int n, int result[]){
    int min=score[0];
    int max=score[0];
    int a = 0;
    int b = 0;
    for (int i=1; i<n; i++){
        if(min > score[i]){
            min=score[i];
            b=b+1;
        }
        else if(max < score[i]){
            max=score[i];
            a=a+1;
        }

    }
    result[0]=a;
    result[1]=b;
}