#include "Evaluador.h"

bool compareInv(vector<char> a, vector<char> b)
{
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[b.size()-1-i])
            return false;
    }
    return true;
}

void evaluar()
{
    double nota = 0;

    cout<<"getNombre():\t\t";
    if(getNombre(new Usuario("Lolo",20))=="Lolo"
          && getNombre(new Usuario("Ruru",50))=="Ruru"
          && getNombre(new Usuario("Lola",10))=="Lola"
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    escribir("archivo1", new Usuario("Rufo",100));
    escribir("archivo2", new Usuario("Lulo",200));
    escribir("archivo3", new Usuario("Lilo",300));

    cout<<"escribir() leer():\t";
    if(leer("archivo1")
       && leer("archivo1")->nombre == "Rufo"
       && leer("archivo1")->edad == 100
       && leer("archivo2")->nombre == "Lulo"
       && leer("archivo2")->edad == 200
       && leer("archivo3")->nombre == "Lilo"
       && leer("archivo3")->edad == 300
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(20);
    v1.push_back(20);
    v1.push_back(40);

    vector<int>v2;
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(200);
    v2.push_back(100);
    v2.push_back(100);

    cout<<"contar():\t\t";
    if(contar(v1,10)==1
       && contar(v1,20)==3
       && contar(v1,40)==1
       && contar(v1,50)==0
       && contar(v2,100)==3
       && contar(v2,200)==2
       && contar(v2,300)==0
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    list<string> l1;
    l1.push_back("A");
    l1.push_back("B");
    l1.push_back("C");
    l1.push_back("B");

    list<string> l2;
    l2.push_back("q");
    l2.push_back("w");
    l2.push_back("e");
    l2.push_back("r");
    l2.push_back("t");

    list<string> l3;
    l3.push_back("1");
    l3.push_back("2");
    l3.push_back("3");
    l3.push_back("1");

    list<string> l4;
    l4.push_back("z");
    l4.push_back("x");
    l4.push_back("c");

    list<string> l5;
    l4.push_back("m");

    cout<<"existeRepetida():\t";
    if(existeRepetida(l1)
       && !existeRepetida(l2)
       && existeRepetida(l3)
       && !existeRepetida(l4)
       && !existeRepetida(l5)
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    vector<char> i1;
    i1.push_back('q');
    i1.push_back('w');
    i1.push_back('e');
    i1.push_back('r');
    i1.push_back('t');

    vector<char> i2;
    i2.push_back('z');
    i2.push_back('x');
    i2.push_back('c');

    vector<char> i3;
    i3.push_back('a');
    i3.push_back('s');
    i3.push_back('d');
    i3.push_back('f');
    i3.push_back('g');
    i3.push_back('h');
    i3.push_back('j');

    cout<<"compare():\t\t";
    if(compareInv(invertir(i1),i1)
       && compareInv(invertir(i2),i2)
       && compareInv(invertir(i3),i3)
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/12"<<endl<<endl;
}
