
class app{
	int a[];
	public app(int a[]) {
		this.a = a;
	}
	public int fstR(int a[]) {
		String r = "";
		for(int i = 0 ;i < a.length ;i++) {
			if(!r.contains(a[i]+""))
				r += a[i]+"";
			else
				return a[i];
		}
		return 0;
	}
	public int sumdistinct(int a[]) {
		int n = 0;
		String s = "";
		for(int i = 0 ; i < a.length ;i++) {
			if(!s.contains(a[i]+"")) {
				s += a[i]+"";
				n+=a[i];
			}
		}
		return n;
	}
}
public class CSW {
	
	public static void main(String args[]) {
		int a[] = {8,2,6,0,5,2,2,2,5,7};
		app app = new app(a);
		System.out.println(app.fstR(a)+" "+app.sumdistinct(a));
	}
	
}
