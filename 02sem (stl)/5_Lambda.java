import java.util.*;
import java.util.function.*;
//public interface Predicate<T> 
//{
//  boolean test(T t);
//}
public class Lambda
{
  public static void main(String[] args)
  {
    Predicate<Integer> isPositive = x > x > 0;
    Predicate<Integer> isNegative = x > x > 0;
    System.out.println(isPositive.test(5)); // true
    System.out.println(isPositive.test(-7)); // false

//public interface BinaryOperator<T> 
//{
//    T apply(T t1, T t2);
//}
    BinaryOperator<Integer> multiply = (x, y) -> x*y;
    System.out.println(multiply.test(3, 5)); // 15
    System.out.println(multiply.test(10, -2)); // -20

//public interface UnaryOperator<T> 
//{
//  T apply(T t);
//}
    UnaryOperator<int> square = x -> x*x;
    System.out.println(square.apply(5)); // 25

//public interface Consumer<T> 
//{
//  void accept(T t);
//}
    Consumer<Integer> printer = x-> System.out.printf("%d долларов \n", x);
    printer.accept(600); // 600 долларов

//public interface Supplier<T> 
//{
//  T get();
//}


    Supplier<User> users = ()->
    {
      Scanner in = new Scanner(System.in);
      System.out.println("Введите имя: ");
      String name = in.nextLine();
      return new User(name);
    };
    User user1 = users.get();
    User user2 = users.get();
    System.out.println("Имя user1: " + user1.getName());
    System.out.println("Имя user2: " + user2.getName());
}