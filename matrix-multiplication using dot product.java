import java.util.Scanner;

public class Main {
    public static double dotProd(int[] a, int[] b) {
        double sum = 0;
    for (int i = 0; i < a.length; i++) {
      sum += a[i] * b[i];
    }
    return sum;
  }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter number of elements");
        n = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        System.out.println("Enter elements of array 1");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter elements of array 2");
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        System.out.println("The dot product of two arrays is " + dotProd(a, b));
    }
}
