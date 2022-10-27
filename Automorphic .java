public class Main
{
	public static void main(String[] args) {
	   
	int n = 376, sq = n * n ;
    if(isAutomorphic(n) == 1)
        System.out.println("Num: "+ n + ", Square: " + sq + " - is Automorphic");
    else
        System.out.println("Num: "+ n + ", Square: " + sq + " - is not Automorphic");
	   
		
	}
	
	static int isAutomorphic(int n){
    int square = n * n;
    while(n != 0)
    {
        // means not automorphic number
        if(n % 10 != square % 10){
            return 0;
        }
        // reduce down numbers
        n /= 10;
        square /= 10;
    }
    // if reaches here means automorphic number
    return 1;
}
}
