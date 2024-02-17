#include <cstdlib>
#include <iostream>
using namespace std;
#define  MAXSIZE 100
class IntArray
{
  private:
    int* data;
    unsigned size;
  
  protected:  
    void error(void) { throw "QQQ"; };
  
  public:
    IntArray();
    IntArray(unsigned size);
    void put(unsigned i, int value);
    int get(unsigned i);
    int operator [](unsigned i);
    friend ostream& operator <<(ostream& o, const IntArray& intArray);
};

IntArray::IntArray(void)
{
  size = MAXSIZE;
  data = new int[size];
  for (int i = 0; i < size; i++) { data[i] = 0; };
};

IntArray::IntArray(unsigned size)
{
  this->size = size;
  data = new int[size];
  for (int i = 0; i < size; i++) { data[i] = 0; };
};

void IntArray::put(unsigned i, int value)
{
  if (i >= size) error(); 
  data[i] = value;
};

int IntArray::get(unsigned i)
{
  if (i >= size) error(); 
  return data[i];
};

int IntArray::operator [](unsigned i)
{
  if (i >= size) error(); 
  return data[i];
};

ostream& operator <<(ostream& o, const IntArray& intArray)
{
  for (unsigned i = 0; i < intArray.size; ++i) { o << intArray.data[i] << " "; }
  return o;
};

int main(int argc, char** argv)
{
  IntArray a;
  a.put(1, 20);
  cout << a.get(1) << "\n";
  try
  {        
    a.put(300, 300);
  }
  catch (char const * q)
  {
    cout << q << "\n";
  };
  cout << a[1] << "\n";
  cout << a << "\n";
  return 0;
}