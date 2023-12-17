import java.lang.Math;

class PerfectNumber{
    public static int _sumOfFactors(int _num){
        if(_num ==1){
            return 0;
        }
        int _sum = 1;
        for(int i=2; i<=Math.sqrt(_num); i++){
            if(i*i == _num){
                _sum += Math.sqrt(_num);
                break;
            }
            if(_num%i == 0){
                if(i == _num/i){
                    _sum += i;
                }else{
                    _sum += i + _num/i;
                }
            }
        }
        return _sum;
    }
    public static void main(String[] args) {
        System.out.println("Is 4 a Perfect Number ? "+((4 == _sumOfFactors(4))?"Yes":"No"));
        System.out.println("Is 6 a Perfect Number ? "+((6 == _sumOfFactors(6))?"Yes":"No"));
        System.out.println("Is 1 a Perfect Number ? "+((1 == _sumOfFactors(1))?"Yes":"No"));
    }
}