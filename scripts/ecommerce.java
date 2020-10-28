/*
Write a program to create the simple inheritance for the E-commerce application where the base class is the Person class, and child class is Customer class. 
Assume the necessary attributes in the each class, and write the functions in each class. 
*/


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
	System.out.println("\t*************************************");
	System.out.println("\t\tCustomer's Name:"+name);
	System.out.println("\t\tCustomer's Address:"+address);
   }
}

class customer extends Person 
{
	String product,mobile,brand;
	int qty,price;
	public void getcustomer(String product,int qty,int price,String mobile,String brand)
	{
		this.product=product;
		this.qty=qty;
		this.price=price;
		this.mobile=mobile;
		this.brand=brand;
	}
	public void printdetials()
   	{
		System.out.println("\t\tCustomer phone number: "+this.mobile);
		System.out.println("\t\tBrand : "+this.brand);
		System.out.println("\t\tPurchased Product:"+this.product);
		System.out.println("\t\tPurchased Qty:"+this.qty);
		System.out.println("\t\tPrice of Product:"+this.price);
   	}
	public void totalprice()
	{
		System.out.println("\t\tTotal Price Is:"+(this.qty*this.price));
		System.out.println("\t*************************************");
	}
}
class ecommerce{
	public static void main(String args[]) 
   	{
      		Scanner scn=new Scanner(System.in);
      		System.out.println("\t\tEnter Name:");
		System.out.print("\t\t");
      		String name=scn.nextLine();
      		System.out.println("\t\tEnter Address:");
		System.out.print("\t\t");
      		String address=scn.nextLine();
      		System.out.println("\t\tEnter Mobile number:");
		System.out.print("\t\t");
      		String mobile=scn.nextLine();
		System.out.println("\t\tEnter Brand Name:");
		System.out.print("\t\t");
      		String brand=scn.nextLine();
      		System.out.println("\t\tEnter Product Name:");
		System.out.print("\t\t");
      		String product=scn.nextLine();
      		System.out.println("\t\tEnter Qty purchase:");
		System.out.print("\t\t");
      		int qty=scn.nextInt();
      		System.out.println("\t\tEnter Price of product:");
		System.out.print("\t\t");
      		int price=scn.nextInt();       
     		customer Custom1 = new customer();
      		Custom1.getdetails(name,address);
      		Custom1.getcustomer(product,qty,price,mobile,brand);
      		Custom1.print();
      		Custom1.printdetials();
      		Custom1.totalprice();
   	}
}