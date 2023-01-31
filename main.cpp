#include <iostream>
#include <cstdlib>

using namespace std;

float LeerNumeros(string mensaje)
{
    float datoLeido(0);
    do
    {
        cout << endl << mensaje;
        cin >> datoLeido;
        if(cin.fail()==true){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << endl << "Tipo de dato incorrecto...\n";
            system("pause");
            continue;
        }
        else{
            break;
        }
    } while (true);
    return datoLeido;
}

float sumarNumeros(float dato1, float dato2)
{
    return(dato1 + dato2);
}

void toPrint(float dato1, float dato2)
{
    cout << endl << "La suma de " << dato1 << " + " << dato2 << " = " << sumarNumeros(dato1,dato2);
}

int main()
{
    float primerNum(0), segundoNum(0), datoResultante(0);
    primerNum = LeerNumeros ("Ingrese el primer numero: ");
    segundoNum = LeerNumeros ("Ingrese el segundo numero: ");
    datoResultante = primerNum + segundoNum;
    cout << endl << ("La suma es: ") << datoResultante;
    cout << endl;
    return 0;
}
