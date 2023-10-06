public class display10primenumbers {
    public static void main(String[] args) {
        int i, j, ct = 0;
        for (i = 2; i <= 20; i++) {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    ct++;
                }
            }
            if (ct == 0) {
                System.out.println(i);
            } else {
                ct = 0;
            }
        }

        

    }
}
