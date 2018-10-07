 
class Singleton 
{ 
	private static Singleton single_instance = null; 
	public String s; 

	private Singleton() 
	{ 
		s = "Hello World!"; 
	} 

	public static Singleton getInstance() 
	{ 
		if (single_instance == null) 
			single_instance = new Singleton(); 

		return single_instance; 
	} 
} 

class HelloWorld 
{ 
	public static void main(String args[]) 
	{ 
		Singleton x = Singleton.getInstance(); 

		System.out.println(x.s); 
	} 
} 
