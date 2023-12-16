import java.lang.Math;

class CountFactors2{
    public static int countFactors(int _nums){
        int _count_of_factors=0;

        for(int itr=1; itr<=Math.sqrt(_nums); itr++){
            if(_nums%itr == 0){
                if(_nums/itr == itr){
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
    }
}

