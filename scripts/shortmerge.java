public class ArrayMerge {
    public static void main(String[] args) {
        int[] array1 = {1, 2, 3};
        int[] array2 = {4, 5, 6};

        int[] mergedArray = mergeArrays(array1, array2);

        System.out.println("Merged Array: " + Arrays.toString(mergedArray));
    }

    public static int[] mergeArrays(int[] arr1, int[] arr2) {
        int length1 = arr1.length;
        int length2 = arr2.length;
        int[] merged = new int[length1 + length2];

        System.arraycopy(arr1, 0, merged, 0, length1);
        System.arraycopy(arr2, 0, merged, length1, length2);

        return merged;
    }
}
