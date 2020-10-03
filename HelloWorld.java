import java.io.*;
public class HelloWorld {
  public static void main(String args[]) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Hello, World!");
    System.out.println("This is not an ordinary HelloWorld program, it also greets the end user!");
    String name =br.readLine();
    System.out.println("Hello, "+name+"!");
    }
   }
