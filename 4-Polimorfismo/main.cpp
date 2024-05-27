#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Ave
{
    public:     
        virtual void volar() = 0;

};

class Aguila : public Ave
{
    private:
        string nombre;
    public :
        Aguila(string nom)  {nombre = nom;}
        void volar()
        { 
            cout << "Soy una Aguila" ;
           // Ave::volar();
            cout << "y soy la más rápida"  << endl;
        } 
        
};

class Pinguino : public Ave
{
    private:
        string nombre;
    public:
    Pinguino(string nom) {nombre = nom; }
    void volar()
    {
        cout << " Soy un pinguino y no vuelo!!!!" << endl;
    }
};

int main()
{
    //Ave avechucho("Manuel");
    //avechucho.volar();
    Aguila america("Los de coapa");
    //america.volar();
    Pinguino pingui("Cabo");
    //pingui.volar();

    //Ave *aveAp = &avechucho;
    //Ave *aveAp = &america;
    Ave *aveAp = &pingui;
    //aveAp->volar();

    vector<Ave *> parvada;
    parvada.push_back(&pingui);
    parvada.push_back(&america);

    for (int i = 0 ; i < parvada.size() ; i++)
    {
        parvada[i]->volar();
    }

    for (int i = 0 ; i < parvada.size() ; i++)
    {
       Aguila *apAg = dynamic_cast <Aguila *> (parvada[i]);
       if (apAg != 0)
            cout << i << " Soy una aguila" << endl;

        Pinguino *apPi = dynamic_cast <Pinguino *> (parvada[i]);
       if (apPi != 0)
            cout << i << " Soy un pinguino" << endl;
    }

    return 0;
}