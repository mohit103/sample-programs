import java.io*;
public class SimpleInterest() {
  public static void main(String args[]) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    double p, r, t;
    p = Double.parseDouble(br.readLine());
    r = Double.parseDouble(br.readLine());
    t = Double.parseDouble(br.readLine());
    Double si = p*r*t/100;
    System.out.println(si);
    }
   }
