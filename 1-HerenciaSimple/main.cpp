#include <iostream>
using std::cout;
using std::endl;

class Padre
{
    protected:
        int x;
    
    public:
        ~Padre()
        {
            cout << "Desde destructor Padre" << endl;
        }
        Padre(){}
        Padre(int x1)
        {
            x = x1;
            cout << "Desde constructor Padre" << endl;
        }

        void imprimir()
        {
            cout << "La variables x es " << x << endl;
        }

};

class Hija : Padre
{
    public :
        int y ;
         ~Hija()
        {
            cout << "Desde destructor Hija" << endl;
        }

        Hija(int x1, int y1) : Padre(x1)
        {
            y = y1;
            cout << "Desde constructor Hija" << endl;
        }

        void imprimir()
        {
            Padre::imprimir();
            cout << "Dentro de hija y : "<<  y << endl;
        }
};

int main()
{
    //Padre p(5);
    //p.imprimir();
    
    Hija h(10,20);
    h.imprimir();
   // p.x = 10; una cariable protegida no puede accesarse directamente
}