//myself lopamudra panda,it is a java program we can send email using the STMT server of gmail.For sending the email using JavaMail API,you need to load the 2 jar files and those jar files are-mail.jar,activation.jar
//Date-7.october.2018
import java.util.Properties;//importing the util package    
import javax.mail.*;    
import javax.mail.internet.*;for accessing the internet connection    
class Mailer{  //starting of the class Mailer
    public static void send(String from,String password,String to,String sub,String msg)//send is a method,having 5 parameter,return type is void so that it will return nothing,public is the access specifier and static is the access modifier,public here as it is list restricted,static as because static block will execute first

{//starting of the body of the send()  
          //Get properties object    
          Properties props = new Properties(); //   properties is a class,pros is its reference and also the object of that class
          props.put("mail.smtp.host", "smtp.gmail.com");//by the props object we are calling the put(),and passing the 2 argument and both argument are passing in the form of string within the double cote     
          props.put("mail.smtp.socketFactory.port", "465");//by the props object we are calling the put(),and passing the 2 argument and both argument are passing in the form of string within the double cote         
          props.put("mail.smtp.socketFactory.class",//by the props object we are calling the put(),and passing the 2 argument and both argument are passing in the form of string within the double cote         
                    "javax.net.ssl.SSLSocketFactory");// by the props object we are calling the put(),and passing the 2 argument and both argument are passing in the form of string within the double cote        
          props.put("mail.smtp.auth", "true");// by the props object we are calling the put(),and passing the 2 argument and both argument are passing in the form of string within the double cote        
          props.put("mail.smtp.port", "465");// by the props object we are calling the put(),and passing the 2 argument and both argument are passing in the form of string within the double cote        
          //get Session   
          Session session = Session.getDefaultInstance(props,    
           new javax.mail.Authenticator() //Session is a class,its reference is session,through the object session we are calling the method getDefaultInstance and passing 2 arguments,props that is the object of the Properties class,another argument is new javax.mailAuthenticator. 
           {    
           protected PasswordAuthentication getPasswordAuthentication()//here we are using the protected access specifier,the access modifier is the non static so that it will execute after the static block execution,getPasswordAuthentication is the method name,this method is the user defined method


           { //starting of the body of the getPasswordAuthentication()
           return new PasswordAuthentication(from,password);it will return the new PasswordAuthentication(from,password),here 2 argument are passig from and password
  
           }ending of the body of the getPasswordAuthentication()   
          });   
          //compose message    
          try {//starting of the try block    
           MimeMessage message = new MimeMessage(session); here MimeMessage is the class name message is the reference of that class and object also,session is the parameter here i am passing
    
           message.addRecipient(Message.RecipientType.TO,new InternetAddress(to)); //by the message object we are calling the addRecipient(),and passing 2 argument Message.RecipientType.TO,new InternetAddress(to) 
           message.setSubject(sub); //by the message object we are calling the setSubject() and passing the parameter as sub 
           message.setText(msg);//by the message object we are calling the setText() and passing the argument msg
           //send message  
           Transport.send(message);//by Transport we are calling the send(message)    
           System.out.println("message sent successfully"); //it is the print statement which will prin in the screen,println is used so that the message will sow and then control moves to the next line,if we write print the message message will show and the control will not move to the next line,message sent successfully is the message which will show on the screen,that will be pass as a string within double cote 
        }
 catch (MessagingException e) {//it is the catch block,here we are handeling the exceptionso that there will not be any error of our program,e is the object here

    

throw new RuntimeException(e);//here is the throw block we are here thowing the RuntimeException so that the compiler will handel this exception

}    
             
    }  
}  
public class SendMailSSL//publis is the access specifier as we know public is least restricted access specifier,here one class is created so class key word is used,and name of the class is SendMailSSL
  {    
 public static void main(String a[])//here the main method,the purpose of taking the access specifier is that the public is the least restricted specifier,if we use this specifier so there will not be any restriction of inheriting the class,static is the access specifier,we know that the static block will be executed first and we want that the control will first findout the main method and go for its execution so we take it as static,void is the retirn type of the main(),so that the method will not return any thing,String a[] is the argument of the main(),a is the name of the array and that array is string type.

      {    
     //from,password,to,subject,message  
     Mailer.send("from@gmail.com","xxxxx","to@gmail.com","hello javatpoint","How r u?");  
     //change from, password and to  
 }    
}    
As you 