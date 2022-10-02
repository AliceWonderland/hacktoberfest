package linux_kernel;
import java.util.Scanner;
public class FirstNumbersCalculator {


    /* stampa i numeri primi minori di n da tastiera
     * usando metodi
     */

    public class StampaPrimi
    {
        public static void main(String[] args)
        {
            int n;

            n = leggiPositivo();

            for(int k=2; k<n; k++)
            {
                if(primo(k)) // true se k e' primo, false altrimenti
                    stampa(k);
            }
        }

        public static int leggiPositivo()
        {
            Scanner lettore;
            lettore = new Scanner(System.in);
            int valore;
            do {
                System.out.print("digita un numero maggiore di 0: ");
                valore = lettore.nextInt();
            } while(valore<=0);
            return valore;
        }

        public static boolean primo(int n)
        {
            if(n==2) // 2 e' primo
                return true;

            if(n%2 == 0) // i numeri pari non sono primi (il caso n = 2 e' stato gia' trattato)
                return false;

            int divisore = 3;
            while(divisore <= Math.sqrt(n))
            {
                if(n%divisore == 0)
                    return false; // ha trovato un divisore
                divisore += 2; // continuo solo con i divisori dispari
            }
            return true; // solo se il ciclo arriva fino alla fine, quindi non ha trovato
            // alcun divisore
        }

        public static void stampa(int n) // solo per evitare di dover scrivere sempre System......
        {
            System.out.println(n);
        }
    }
}
