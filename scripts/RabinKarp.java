//implementation of Rabin-Karp alogithm in java
class Main {
    public static final int PRIME_NO = 119;

    public static void main(String[] args) {
        String pattern = "abd";
        String testString = "abcabdabcabdaabd";
        solveRobinKarp(testString, pattern);
    }

    public static long calculateHash(String s) {
        long hashValue=0l;
        for(int i=0;i<s.length();i++){
            int charValue=s.charAt(i)-'a';
            hashValue+=(charValue*((long)Math.pow(PRIME_NO, i)));
        }
        return hashValue;
    }

    public static long recalculateHash(long currHashValue,int oldStart,int newEnd,String s,String pattern){
        
        int oldStValue=s.charAt(oldStart)-'a';
        int newEndValue=s.charAt(newEnd)-'a';
        currHashValue-=oldStValue;
        currHashValue/=PRIME_NO;
        currHashValue+=(newEndValue*((long)Math.pow(PRIME_NO, pattern.length()-1)));
        return currHashValue;
    }

    private static void solveRobinKarp(String testString, String pattern) {
        int plen=pattern.length();
        int slen=testString.length();
        long requiredHash=calculateHash(pattern);
        // System.out.println("required hash:"+requiredHash);
        long strHash=calculateHash(testString.substring(0, plen));        
        for(int st=0;st<(slen-plen);st++){
            String str=testString.substring(st,st+plen);
            // System.out.println("checking:"+str+"->"+strHash);
            if(strHash==requiredHash && str.equals(pattern)){
                System.out.println(st);
            }
            strHash=recalculateHash(strHash, st, st+plen, testString, pattern);
        }
    }
}