#include <iostream>
using std::cout;
using std::endl;

class Padre1
{
    public:
    Padre1()
    {
        cout << "Dentro constructor PAdre1" << endl;
    }
    ~Padre1()
    {
        cout << "Dentro Desctructor PAdre1" << endl;
    }
    void imprimir()
    {
        cout << "Dentro imprimir de PAdre 1" << endl;
    }
};
class Padre2
{
    public:
    Padre2()
    {
        cout << "Dentro constructor PAdre2" << endl;
    }
    ~Padre2()
    {
        cout << "Dentro Desctructor PAdre2" << endl;
    }
    void imprimir()
    {
        cout << "Dentro imprimir de PAdre 2" << endl;
    }
};
class Hijo : public Padre1, public Padre2
{
    public:
    Hijo()
    {
        cout << "Dentro constructor Hijo" << endl;
    }
    ~Hijo()
    {
        cout << "Dentro Desctructor Hijo" << endl;
    }
   /* void imprimir()
    {
        cout << "Dentro imprimir de Hijo" << endl;
    }
    */
};

class A
{
 public: 
  void imprimir()
  {
    cout << "DEntro de imorimir en clase A" << endl;
  }
};
class B :virtual public A{};
class C :virtual public A
{

};

class D : public B, public C
{};

int main()
{
    D obj;
    obj.imprimir();
    //Hijo h;
    //h.Padre2::imprimir();
    
    return 0;
}