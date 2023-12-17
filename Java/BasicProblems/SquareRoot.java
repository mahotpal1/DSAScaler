class SquareRoot{
    public static int solve(int _num){
        int itr=1;
        while(itr*itr < _num){
            itr++;
        }
        if(itr*itr == _num) {
            return itr;
        }else{
            return -1;
        }
    }
    public static void main(String[] args) {
        System.out.println("Perfect Square root of 144 : " + solve(144));
        System.out.println("Perfect Square root of 15 : " + solve(15));
    }
}