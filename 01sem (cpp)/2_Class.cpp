//  1 Перезагрузка конструктора.
#include <iostream>
#include <string>
using namespace std;

class First
{
  private: 
    int field1; // Подсчитывает кол-во обращений к классу First
    float field2, field3;
    void setField1(int anInt) { field1=anInt; }
  public:
  // Конструкторы и деструкторы
  First(void)
  { 
    cout << "\nln void constructor for First";
    setField1(0);
    field2 = 0.0; 
    field3 = 0.0;
  }
  First(float aField2, float aField3 = 0.0)
  {
    cout << "\nln 2-parameter constructor for First";
    setField1(0);
    field2 = aField2;
    field3 = aField3;
  }
  First(float aField2 = 0.0, float aField3)
  {
    cout << "\nln other 2-parameter constructor for First";
    setField1(0);
    field2 = aField2;
    field3 = aField3;
  }
  ~First(void){ cout << "\nln destructor for First"; }

  // Методы доступа
  int getFleld1( void ){ return ++field1; }
  float getField2( void ) { field1++; return field2; } 
  float getField3( void ) { field1++; return field3; }
  void setField2( float aFloat){ field1++; field2 = aFloat; } 
  void setField3( float aFloat) { field1++; field3 = aFloat; }
  void resetField1( void) { setField1(0); }
  
  // Операции над полями
  int compareFlelds( void ) { field1++; return field2 == field3; }

  // Методы печати
  void print( void ) 
  {
    field1++; //Печать это тоже доступ
    cout << "\n Number of accesses to this object = " << field1;
    cout << "\n Value of fleld2 = " << field2;
    cout << "\n Value of field3 = " << field3; 
  }
};

int main(void)
{
  First first1, first2(10.25), first3(12.6, -5.6);
  first1.print();
  first2.print();
  first3.print();
  first2.setField3(-8);
  first2.setField2(15.8);
  first2.print();
  first3.resetField1();
  first3.print();
  cout << endl << first1.compareFlelds();
  return 0;
}

/* Что если метод setField1 поместить в открытую часть, 
чтобы иметь возможность модификации поля field1. Что в этом плохого? */

/* Что если в конструктор с двумя параметрами добавить значение 
по умолчанию для поля field2 */

/*Написать программу тестирования и получить следующий результат 
ln void constructor for First
ln 2-parameter constructor for First
ln 2-parameter constructor for First
Test program results for class First
Print details of first1
Number of access to this object = 1
Value of fieid2 = 0.00
Value of fleld3 = 0.00
Print details of first2
Number of access to this object = 1
Value of field2 = 10.25
Value of field3 = 0.00
Print details of first3
Number of access to this object = 1
Value of field2 = 12.60
Value of field3 = -5.60 
Modify field3 of first2 and verify
Number of access to this object = 4 
Value of field2 = 15.80 
Value of field3 = -8.00
Reset and print first3
Number of access to this object = 1
Value of field2 = 12.60
Value of fields = -5.60
Compare field2 and field3 of first1
field2=fields
ln destructor for First
ln destructor for First
In destructor for First
*/

/* Видоизменить класс добавить конструктор,
 который будет присваивать второй параметр по умолчанию или явно,
 а третий будем указывать всегда. Протестировать изменения. */
