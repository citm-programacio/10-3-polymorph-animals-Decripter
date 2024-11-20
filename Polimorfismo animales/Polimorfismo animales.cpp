#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void habla()
    {
    };
};

class Gato : public Animal
{
public:
    void habla()
    {
        cout << "Miau " << endl;
    };
};

class Perro : public Animal
{
public:
    void habla()
    {
        cout << "Guau " << endl;
    };
};

int main()
{
    Gato* gat1 = new Gato;
    Perro* perr1 = new Perro;

    gat1->habla();
    perr1->habla();

}
