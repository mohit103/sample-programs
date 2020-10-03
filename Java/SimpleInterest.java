import java.io.*;
public class SimpleInterest {
  public static void main(String args[]) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    double p, r, t;
    System.out.print("Please input the principle amount: ");
    p = Double.parseDouble(br.readLine());
    System.out.print("Please input the rate (%): ");
    r = Double.parseDouble(br.readLine());
    System.out.print("Please input the time in years: ");
    t = Double.parseDouble(br.readLine());
    Double si = p*r*t/100;
    System.out.println("The simple interest is: "+si);
    System.out.println("The final amount is: "+(p+si));
    }
   }
