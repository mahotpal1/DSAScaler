import java.util.*;
import java.lang.Math;

class IsPrime{
    public static boolean _isPrime(int _num){
        if(_num == 1){
            return false;
        }
        for(int i=2; i<=Math.sqrt(_num); i++){
            if(_num%i == 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        System.out.println("Is 6 a prime number ? \n"+(_isPrime(6)?"Yes":"No"));
        System.out.println("Is 11 a prime number ? \n"+(_isPrime(11)?"Yes":"No"));
    }
}