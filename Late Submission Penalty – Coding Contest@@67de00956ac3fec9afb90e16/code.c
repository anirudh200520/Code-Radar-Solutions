int calculatePenalty(int subDay,int subMonth,int subYear, int dueDay, int dueMonth, int dueYear){
    int pen=0;
    if((subYear-dueYear)>0){
        pen=(subYear-dueYear)*5000;
    }
    else if((subMonth-dueMonth)>0){
        pen=(subMonth-dueMonth)*200;
    }
    else if((subDay-dueDay)>0){
        pen=(subDay-dueDay)*10;
    }
    else{
        pen=0;
    }
    return pen;
}