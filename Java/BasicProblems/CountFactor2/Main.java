import java.lang.Math;

Class CountFactors2{
    public int countFactors(int _nums){
        int _count_of_factors=0;

        for(int itr=0; itr<=Math.sqrt(_nums)){
            if(_nums%itr == 0){
                if(_nums%itr == i){
                   _count_of_factors++;
                }else{
                    _count_of_factors+=2;
                }
            }
        }
        return _count_of_factors;
    }
    public static void main(String[] args){
        System.out.println("Total count of factors of 16 : " + countFactors(16));
        return;
    }
}

