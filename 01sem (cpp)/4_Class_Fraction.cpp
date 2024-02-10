// 3 Интерфейс класса Fraction
// Представляющего рациональную дробь вида числитель/знаменатель

class Fraction
{
    private:
    int num, denom; 

    // Возвращает данную дробь с наименьшим общим знаменателем
    Fraction reduced( void );

    public:
        Fraction(void){}
        Fraction (int aNum, int aDenom): num( aNum ), denom( aDenom ){}
        ~Fraction(void){}
 
        // Методы доступа (inline!)
        int numerator( void ){return num;} 
        int denominator( void ){return denom;} 
        // Арифметические методы. 
        // Возвращает новую дробь, равную сумме данной дроби и aFraction
        Fraction add(Fraction aFraction);
        // Возвращает новую дробь, равную разности данной дроби и aFraction
        Fraction substract(Fraction aFraction);
        // Возвращает новую дробь, равную произведению данной дроби и aFraction
        Fraction multiply(Fraction aFraction);
        // Возвращает новую дробь, равную частному данной дроби и aFraction
        Fraction divide(Fraction aFraction);
        // Методы сравнения 
        // Возвращает ненулевое значение, если данная дробь меньше чем aFraction
        int lessthen(Fraction aFraction);
        // Возвращает ненулевое значение, если данная дробь больше чем aFraction
        int greaterthen(Fraction aFraction);
        // Возвращает ненулевое значение, если данная дробь равна aFraction
        int equal(Fraction aFraction);
        // Методы преобразования
        // Преобразует данную дробь в число с плавающей точкой
        float asFloat( void );
        // Методы пачати
        // Печатает данную дробь в формате num/denom
        void print( void ) {std::cout << ;
};
/* дописать класс и поддтердить тестом
Fraction test program results
frac1 =3/4
frac2 = 20/23
Sum of fraс1 and frac2 = frac3 = 149/92
Accessing methods test
frac3 numerator = 149 frac3 denominator = 92
Comparison methods
 frac2 greater than frac1
 frac1 less than frac3 
 frac4 equal to frac3
More arithmetic methods
Difference of frac1 and frac2 = -11/92 
Product of frac1 and frac2 = 15/23 
Quotient of frac2 / frac3 = 80/149
*/

int main(void)
{
    return 0;
}
