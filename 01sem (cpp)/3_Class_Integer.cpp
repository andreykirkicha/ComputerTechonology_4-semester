// 2. Класс Integer
#include <iostream>

class Integer
{
  private: 
  int value;

  public:
  // Конструкторы и деструктор
  Integer (void): value(0) {}
  Integer( int anint): value( anint) { }
  ~Integer( void){ }
  // Методы доступа
  int getValue( void ) { return value; } 
  void setValue( int aValue) { value=aValue; }
  // Методы сравнения
  int equal( const Integer& anInt){ return value == anInt.value; } 
  int greater( const Integer& anInt){ return value > anInt.value; }
  int lessthen( const Integer& anInt){ return value < anInt.value; }
  // Арифметические методы
  Integer add( const Integer& anInt)
  { return Integer(value+anInt.value);}
  Integer subtract( const Integer& anInt)
  { return Integer( value - anInt.value); }
  Integer multiply( const Integer& anInt)
  { return Integer( value*anInt.value); }
  Integer divide( const Integer& anInt) 
  { return Integer( value/anInt.value); }
  //Деление на ноль за пользователем.
  void print(void) { std::cout << value; }
};

/*Написать тестовую программу.*/
int main(void)
{
  Integer int1, int2(1);
  std::cout << int1.getValue() << "\n";
  int1.setValue(1);
  std::cout << int1.getValue() << "\n";
  int2.setValue(1);
  std::cout << int2.getValue() << "\n\n";

  std::cout << int1.greater(int2) << "\n";
  std::cout << int1.equal(int2) << "\n";
  std::cout << int1.lessthen(int2) << "\n\n";

  int1 = int1.add(int2);
  std::cout << int1.getValue() << "\n";
  int1 = int1.subtract(int2);
  std::cout << int1.getValue() << "\n";
  int2.setValue(3);
  int1 = int1.multiply(int2);
  std::cout << int1.getValue() << "\n";
  int1 = int1.divide(int2);
  std::cout << int1.getValue() << "\n";
  return 0;
}