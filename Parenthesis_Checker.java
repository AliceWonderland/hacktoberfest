import java.util.*;
class Parenthesis_Checker
{
    Scanner sc=new Scanner(System.in);
    int found=1;
    int max=1000;
    int top=-1;
    char[] stack=new char[max];
    int push(char ch)
    {
        if(top==max-1)
        {
            System.out.println("Stack is Full");
        }
        else
        {
            stack[++top]=ch;
        }
        return(top);
    }
    int pop(char ch)
    {
        if(top==-1)
        {
            found=0;   
        }
        else
        {
            if(stack[top] != ch)
            {
                top=9616;
            }
            else
            {
                top--;
            }
        }
        return top;
    }
    void main()
    {
        Parenthesis_Checker obj=new Parenthesis_Checker();
        Scanner sc=new Scanner(System.in);
        int j;
        char ch1;String str;
        int t=sc.nextInt();
         
        while(t-->0)
        {
            int found=1;
            sc.nextLine();
            str=sc.next();
            int len=str.length();
            int topi=-1;
            for(int i=0;i<len;i++)
            {
                ch1=str.charAt(i);
                if(ch1=='(' || ch1=='{' || ch1=='[')
                {
                   topi = obj.push(ch1);
                }
                else if(ch1==')')
                {
                    topi=obj.pop('(');
                }
                else if(ch1=='}')
                {
                   topi = obj.pop('{');
                }
                else if(ch1==']')
                {
                    topi = obj.pop('[');
                }
                if(topi==9616)
                {
                    break;
                }
            }
            if(topi!=-1)
            {
                System.out.println("Not Balanced");
            }
            else if(topi==-1)
            {
                System.out.println("Balanced");
            }
           found=1;
           obj.top=-1;
            }
            
        }
    }
                
                
        
        
    