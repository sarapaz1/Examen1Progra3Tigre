#include <iostream>
#include <fstream>
#include <math.h>
#include <list>
#include <vector>
using namespace std;

class Usuario
{
public:
    string nombre;
    int edad;
    Usuario(string nombre, int edad)
    {
        this->nombre = nombre;
        this->edad = edad;
    }
};

void evaluar();

string getNombre(Usuario* usuario);
void escribir(string nombre_archivo, Usuario* usuario);
Usuario* leer(string nombre_archivo);
int contar(vector<int> numeros, int numero);
bool existeRepetida(list<string> cadenas);
vector<char> invertir(vector<char> letras);
