import java.util.*;
class Person 
{
	String name,address;
	
   public void getdetails(String name, String address) {
		this.name=name;
		this.address=address;
   }
   public void print()
   {
	System.out.println("Customer Name:"+name);
	System.out.println("Customer Address:"+address);
   }
}

class customer extends Person 
{
	String product,mobile;
	int qty,price;
	public void getcustomer(String product,int qty,int price,String mobile)
	{
		this.product=product;
		this.qty=qty;
		this.price=price;
		this.mobile=mobile;
	}
	public void printdetials()
   	{
		System.out.println("Mobile number of Person"+this.mobile);
		System.out.println("Purchased Product:"+this.product);
		System.out.println("Purchased Qty:"+this.qty);
		System.out.println("Price of Product:"+this.price);
   	}
	public void totalPrice()
	{
		System.out.println("Total Amount:"+(this.qty*this.price));
	}
}
class ecommerce{
	public static void main(String args[]) 
   	{
      		Scanner scn=new Scanner(System.in);
      		System.out.println("Enter Name:");
      		String name=scn.nextLine();
      		System.out.println("Enter Address:");
      		String address=scn.nextLine();
      		System.out.println("Enter Mobile number:");
      		String mobile=scn.nextLine();
      		System.out.println("Enter Product Name:");
      		String product=scn.nextLine();
      		System.out.println("Enter Qty purchase:");
      		int qty=scn.nextInt();
      		System.out.println("Enter Price of product:");
      		int price=scn.nextInt();       
     		customer demo = new customer();
      		demo.getdetails(name,address);
      		demo.getcustomer(product,qty,price,mobile);
      		demo.print();
      		demo.printdetials();
      		demo.totalPrice();
   	}
}