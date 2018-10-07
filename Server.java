import java.io.*;
import java.net.*;
//class Server
class Server
      {
      public static void main(String a[])throws Exception
                   {
                    
                     ServerSocket ss=new ServerSocket(8989);
                     Socket s=ss.accept();
                     BufferReader br=new BufferedReader(s.getInputStream());
                     PrintStream ps=new PrintStream(s.getOutputStream());
                     BufferedReader kb=new BufferedReader(new InputStreamReader(System.in));
                     String sndstr="",rcvstr="";
                     while(!rcvstr.equals("stop"))
                            {
                                rcvstr=br.readLine();
                                System.out.println("from clint"+rcvstr);
                                sndstr=kb.readLine();
                                ps.println(sndstr);
                             }
                   kb.close();
                   ps.close();
                   br.close();
                   s.close();
                   ss.close();
              }
       }

                             
                             
           


                  
