

public class smallestElement {
    public static int minOf(int a[]){
        if (a.length == 0) return -1;
        int minIndex = 0;
        for (int i = 1; i <a.length ; i++) {
            if (a[i]<a[minIndex]){
                minIndex = i;

            }

        }
        return minIndex;
    }
    public static void main(String[] args) {
        int[] a = {2,1,4,6,0};
//        int key = 6;
        int index = minOf(a);
        System.out.println(a[index]);

    }
}



