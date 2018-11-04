import java.util.Scanner;
 
 class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
 
    while (true) {
        long n = sc.nextLong();
        if (n < 0) break;
        System.out.println(Long.toString(n, 2));
    }
    }
 }
