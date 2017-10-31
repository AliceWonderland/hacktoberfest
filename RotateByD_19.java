/*Rotate an array with n elements by d elements.
 * Method 1: Store the d elts in an array of size d. Move the remaining elts to front and
 * add these d elts at the end. TC=O(n) SC=O(d)
 * Method 2: Use single temp variable and then move one position to left.
 * TC=O(nd) SC=O(1)
 * Method 3: Use gcd=gcd(arr.length,d) and divide the array into the blocks of size gcd.
 * Use single variable to rotate the elements. TC=O(n) SC=O(1)
 * Method 4: Using reversal of 1st d elts, then reversal of remaining elts.
 * Then reverse the resultant array. TC=O(n) SC=O(1)
 */
public class RotateByD_19 {
	public static void main(String[]args)
	{
		int arr[]={1,2,3,4,5};
		int d=2;
		System.out.println("Using method 1: ");
		rotateEltsLeftByD_method1(arr,d);
		int arr2[]={1,2,3,4,5};
		System.out.println("Using method 2: ");
		rotateEltsLeftByD_method2(arr2,d);
		int arr3[]={1,2,3,4,5};
		System.out.println("Using method 3: ");
		rotateEltsLeftByD_method3(arr3,d);
		int arr4[]={1,2,3,4,5};
		System.out.println("Using method 4: ");
		rotateEltsLeftByD_method4(arr4,d);
	}

	private static void rotateEltsLeftByD_method4(int[] arr4, int d) {
		int size=arr4.length;
		reverseArray(arr4,0,d-1);
		reverseArray(arr4,d,size-1);
		reverseArray(arr4,0,size-1);
		
		System.out.println("Rotated array is: ");
		for(int i=0;i<arr4.length;i++)
		{
			System.out.println(arr4[i]);
		}
	}

	private static void reverseArray(int[] arr, int start, int end) {
		int temp;
		while(start<end)
		{
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			
			start++;
			end--;
		}
		
	}

	private static void rotateEltsLeftByD_method3(int[] arr3, int d) {
		int gcd_rotate=gcd(arr3.length,d);
		System.out.println("gcd: "+gcd_rotate);
		int insideBlockIndex1,insideBlockIndex2,temp;
		for(int gcd_index=0;gcd_index<gcd_rotate;gcd_index++)
		{
			temp=arr3[gcd_index];
			insideBlockIndex1=gcd_index;
			while(true)
			{
				insideBlockIndex2=insideBlockIndex1+d;
				if(insideBlockIndex2>=arr3.length)
					insideBlockIndex2=insideBlockIndex2-arr3.length;
				if(insideBlockIndex2 == gcd_index)
					break;
				arr3[insideBlockIndex1] = arr3[insideBlockIndex2];
				insideBlockIndex1 = insideBlockIndex2;
			}
			arr3[insideBlockIndex1]=temp;
		}
		
		System.out.println("Rotated array is: ");
		for(int i=0;i<arr3.length;i++)
		{
			System.out.println(arr3[i]);
		}
		
		
	}

	private static int gcd(int a, int b) {
		if(b==0)
			return a;
		return gcd(b,a%b);
		
	}

	private static void rotateEltsLeftByD_method2(int[] arr, int d) {
		int temp;
		for(int i=0;i<d;i++)
		{
			temp=arr[0];
			for(int j=1;j<arr.length;j++)
			{
				arr[j-1]=arr[j];
//				System.out.println(arr[j-1]);
			}
			arr[arr.length-1]=temp;
//			System.out.println(arr[arr.length-1]);
				
		}
		
		System.out.println("Rotated array is: ");
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
		
		
	}

	private static void rotateEltsLeftByD_method1(int[] arr,int d) {
		int arr_d[]=new int[d];
		for(int i=0;i<arr.length;i++)
		{
			if(i<d)
				arr_d[i]=arr[i];
			else
			{
				arr[i-d]=arr[i];
			}
				
		}
		
		for(int j=0;j<d;j++)
		{
			arr[arr.length-d+j]=arr_d[j];
		}
		
		System.out.println("Rotated array is: ");
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
		
	}
}
