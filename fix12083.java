public class FactRec{
  public static int calculateFact(int n){
    if(n==0){
      return 1;
    }else{
      return n*calculateFact(n-1);
    }
  }

  public static void main(String[] args){
    int n;
    int result = calculateFact(n);
  }
}
  
