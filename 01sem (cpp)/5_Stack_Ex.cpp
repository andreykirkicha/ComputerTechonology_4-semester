#include <iostream>
using namespace std;

class stack 
// Добавить возможность создавать стек заданной параметром конструктора глубины.
// Добавить в класс контроль переполнения, cоздавая исключительную ситуацию throw при переполнении.
// В программе перехватить созданную исключительную ситуацию try{} catch(type value){}
{
  int* stck;
  int maxSize;
  int tos;
public:
  stack(int size = 100);
  ~stack();
  void push(int i);
  int pop();
};

stack::stack(int size)
{
  maxSize = size;
  stck = new int[maxSize];
  tos = 0;
  cout << "Stack Initialized with size " << maxSize << "\n";
}

stack::~stack()
{
  delete[] stck;
  cout << "Stack Destroyed\n";
}

void stack::push(int i)
{
  if(tos == maxSize)
  {
    throw "Stack Overflow";
  }
  stck[tos] = i;
  tos++;
}

int stack::pop()
{
  if(tos == 0) 
  {
    throw "Stack Underflow";
  }
  tos--;
  return stck[tos];
}

int main()
{
  try 
  {
    stack a(10), b(10);

    for(int i = 0; i < 11; i++)
    {
      a.push(i);
    }

    cout << a.pop() << " ";
    cout << b.pop() << "\n";
  } 
  catch(const char* msg) 
  {
    cerr << "Exception caught: " << msg << endl;
  }

  return 0;
}
 
