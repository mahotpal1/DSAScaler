import java.lang.*;

class CountOfPrimes{
    public static int countPrime(int x){
        if(x == 1){
            return 0;
        }
        int count=0;
        for(int i=2; i<=x; i++){
            boolean flag = true;
            for(int j=2; j<=Math.sqrt(i); j++){
                if(i%j == 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        System.out.println("Total count of prime from 1 to 19 -> "+countPrime(19));
        System.out.println("Total count of prime from 1 to 1 -> "+countPrime(1));
    }
}