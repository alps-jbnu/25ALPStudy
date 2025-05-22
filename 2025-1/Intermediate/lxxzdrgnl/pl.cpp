import java.util.Scanner;

public
class MultiplyThree {
   public
    static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter three integers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        try {
            if (a < 0 || b < 0 || c < 0)
                throw new IllegalArgumentException("음수 입력 오류");

            long result = (long)a * b * c;
            if (result > Integer.MAX_VALUE || result < Integer.MIN_VALUE)
                throw new ArithmeticException("오버플로 발생");

            System.out.println("Result = " + result);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        sc.close();
    }
}