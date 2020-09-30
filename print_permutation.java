public class print_permutation{
    public static void main(String[] args){
        int[] a=  {1,2,3,4,5};
        int n = a.length;
        print_permutation(a,0 , n);
    }
    static ArrayList<ArrayList<Integer>> al ;
    public static void print_permutation(int[] a,int i ,int n){
        ArrayList<ArrayList<Integer>> temp = new ArrayList<ArrayList<Integer>>();
        for(ArrayList<Integer> a1 : al){
            temp.add(a1.add(a[i]));
        }
    }
}