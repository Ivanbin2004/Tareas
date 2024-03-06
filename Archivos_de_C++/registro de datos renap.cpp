/*/Registro de naciniento
Error del sistemad e renap, todos los datos se perdieron...Gerente general de renap desea recapitular todos 
los datos de las personas que estan haciendo fila lo cual son de mas de 50 personas, i necesita ingreasar 
lso nombres, su vecindad y su fecha de naciminentotomando dia, mes, año.Para calcular si es mayor de edad o no.
Mostrar los datos obtenidos al gerente al finalizar los datos ingresados.
Usando vectores para guardar los doatos.
alex                          Juan
1/02/2024                 1/02/2024
coban A.V.               Carcha A.V
15 años menor de edad     18 años mayor de edad

 /*/
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int main() {
    const int CANTIDAD_PERSONAS = 50;
    vector<string> nombres(CANTIDAD_PERSONAS);
    vector<string> vecindades(CANTIDAD_PERSONAS);
    vector<int> diasNacimiento(CANTIDAD_PERSONAS);
    vector<int> mesesNacimiento(CANTIDAD_PERSONAS);
    vector<int> anosNacimiento(CANTIDAD_PERSONAS);
    vector<bool> esMayorEdad(CANTIDAD_PERSONAS);

    time_t now = time(0);
    tm* localTime = localtime(&now);
    int anoActual = 1900 + localTime->tm_year;
    

    cout << "INGRESE INFORMACION:" << endl;
    for (int i = 0; i < CANTIDAD_PERSONAS; ++i) {
        cout << "Persona " << i+1 << ":" << endl;
        cout << "Ingrese nombere: ";
        getline(cin >> ws, nombres[i]);
        cout << "Ingrese Vecindad: ";
        getline(cin >> ws, vecindades[i]);
        cout << "Ingrese fecha de nacimiento (dd mm aaaa): ";
        cin >> diasNacimiento[i] >> mesesNacimiento[i] >> anosNacimiento[i];
        cin.ignore();

    
        int edad = anoActual - anosNacimiento[i];
        if (localTime->tm_mon + 1 < mesesNacimiento[i] ||
            (localTime->tm_mon + 1 == mesesNacimiento[i] && localTime->tm_mday < diasNacimiento[i])) {
            edad--;
        }
        esMayorEdad[i] = (edad >= 18);

        cout << endl;
    }


    cout << "Datos obtenidos:" << endl;
    for (int i = 0; i < CANTIDAD_PERSONAS; ++i) {
        cout << "PERSONA " << i+1 << ":" << endl;
        cout << "NOMBRE: " <<endl<< nombres[i] << endl;
        cout << "VECINDAD: " <<endl<< vecindades[i] << endl;
        cout << "FECHA DE NACIMIENTO: " <<endl<< diasNacimiento[i] << "/" << mesesNacimiento[i] << "/" << anosNacimiento[i] << endl;
        cout << "_-_EDAD_-_  => "<<endl<< (esMayorEdad[i] ? "MAYOR DE EDAD" : "MENOR DE EDAD") << endl;
        cout << endl;
    }
    
    

    return 0;
}


