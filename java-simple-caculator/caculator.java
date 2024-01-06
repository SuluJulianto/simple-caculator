import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a math operation: ");
        String calculate = scanner.nextLine();

        if (calculate.contains("+")) {
            String[] numbers = calculate.split("\\+");
            int answer = Integer.parseInt(numbers[0].trim()) + Integer.parseInt(numbers[1].trim());
            System.out.println(calculate + " = " + answer + "\nYour answer is " + answer);
        } else if (calculate.contains("-")) {
            String[] numbers = calculate.split("-");
            int answer = Integer.parseInt(numbers[0].trim()) - Integer.parseInt(numbers[1].trim());
            System.out.println(calculate + " = " + answer + "\nYour answer is " + answer);
        } else if (calculate.contains("**")) {
            String[] numbers = calculate.split("\\*\\*");
            int base = Integer.parseInt(numbers[0].trim());
            int exponent = Integer.parseInt(numbers[1].trim());
            int answer = 1;
            for (int i = 0; i < exponent; ++i) {
                answer *= base;
            }
            System.out.println(calculate + " = " + answer + "\nYour answer is " + answer);
        } else if (calculate.contains("*")) {
            String[] numbers = calculate.split("\\*");
            int answer = Integer.parseInt(numbers[0].trim()) * Integer.parseInt(numbers[1].trim());
            System.out.println(calculate + " = " + answer + "\nYour answer is " + answer);
        } else if (calculate.contains("//")) {
            String[] numbers = calculate.split("//");
            int answer = Integer.parseInt(numbers[0].trim()) / Integer.parseInt(numbers[1].trim());
            System.out.println(calculate + " = " + answer + "\nYour answer is " + answer);
        } else if (calculate.contains("/")) {
            String[] numbers = calculate.split("/");
            float answer = Float.parseFloat(numbers[0].trim()) / Float.parseFloat(numbers[1].trim());
            System.out.println(calculate + " = " + answer + "\nYour answer is " + answer);
        } else if (calculate.contains("%")) {
            String[] numbers = calculate.split("%");
            int answer = Integer.parseInt(numbers[0].trim()) % Integer.parseInt(numbers[1].trim());
            System.out.println(calculate + " = " + answer + "\nYour answer is " + answer);
        } else {
            System.out.println("The math operation is not recognized.");
        }
    }
}
