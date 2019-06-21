//client 
class Cient
        {
             public static void main(String b[])
                        {
                            Socket s2=new Socket("localhost",9999);
                            InputStream is1=s2.getInputStream();
                            BufferedReader br2=new BufferedReader();
                            OutputStream os2=s2.getOutputStream();
                            PrintStream ps2=new PrintStream(os2);
                            String str="Hello Server";
                            ps2.println(str);
                            str=br.readLine();
                            System.out.println("from server"+str);
                            os2.close();
                            is2.close();
                            s2.close();
}
}