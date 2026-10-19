#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Definir e iniciar variables
string nombreEmpleado;
int edadEmpleado, tipoEmpleado;
char generoEmpleado;
double sueldoEmpleado, horasEmpleadoPlantaDiariaLV=9.5, horasEmpleadoPlantaSabado=6, horasEmpleadoPlantaSemanalLV, horasEmpleadoPlantaSabadoMes, horasEmpleadoPlantaMes, sueldoEmpleadoPlantaHora, sueldoEmpleadoPlantaMinuto, sueldoEmpleadoPlantaSegundo, sueldoEmpleadoPlantaDiarioLV, sueldoEmpleadoPlantaSabado, sueldoEmpleadoPlantaSemanal, sueldoEmpleadoPlantaTotalSemanal, sueldoEmpleadoPlantaQuincenal, reporteEmpleadoPlanta;
double horasEmpleadoMedioTiempoDiariaLV=5.5, horasEmpleadoMedioTiempoSemanal=33, horasEmpleadoMedioTiempoMes=132, sueldoEmpleadoMedioTiempoHora, sueldoEmpleadoMedioTiempoMinuto, sueldoEmpleadoMedioTiempoSegundo, sueldoEmpleadoMedioTiempoDiarioLV, sueldoEmpleadoMedioTiempoSabado, sueldoEmpleadoMedioTiempoSemanalLV,sueldoEmpleadoMedioTiempoSemanalTotal, sueldoEmpleadoMedioTiempoQuincenal, reporteEmpleadoMedioTiempo;  

int main ()
{ 

    cout <<**********BIENVENIDO***********" << endl;
    cout <<__________Pillofon S.A.__________" << endl;

    cout << "Ingrese el nombre del empleado: ";
    getline(cin>>ws, nombreEmpleado);

    cout << "Ingrese la edad del empleado: ";
    cin >> edadEmpleado;
    while (edadEmpleado < 18 || edadEmpleado > 65) {
        cout << "Edad invalida. Ingrese nuevamente la edad: ";
        cin >> edadEmpleado;
    }
    cout << "Ingrese el genero del empleado (M/F): ";
    cin >> generoEmpleado;
    while (generoEmpleado != 'M' && generoEmpleado != 'F' && generoEmpleado != 'm' && generoEmpleado != 'f')    { {
        cout << "Datos incorrectos. Ingrese nuevamente el genero (M/F): ";
        cin >> generoEmpleado;
    }
    cout << "Ingrese el tipo de empleado" << endl;
    cout << "1. Empleado de planta" << endl;
    cout << "2. Empleado de medio tiempo" << endl;
    cout << "3. Empleado por contrato" << endl;
    cin >> tipoEmpleado;
    switch (tipoEmpleado)
    {
    case 1:
        cout << "Ingrese el sueldo del empleado: ";
        cin >> sueldoEmpleado;
        while (sueldoEmpleado < 16000) { 
            cout << "Sueldo invalido. Ingrese nuevamente el sueldo: ";
            cin >> sueldoEmpleado;
        }

        cout << "Empleado de planta" << endl;
        cout << "El empleado " << nombreEmpleado << " tiene " << edadEmpleado << " años, es de genero " << generoEmpleado << " y su sueldo es de $" << sueldoEmpleado << endl;

        //Calculo de las horas//
        horasEmpleadoPlantaSemanalLV = horasEmpleadoPlantaDiariaLV * 5;
        horasEmpleadoPlantaSabadoMes = horasEmpleadoPlantaSabado * 4;
        horasEmpleadoPlantaMes = horasEmpleadoPlantaSemanalLV + horasEmpleadoPlantaSabadoMes;
        
        //Calculo de los sueldos//
        sueldoEmpleadoPlantaHora = sueldoEmpleado / horasEmpleadoPlantaMes;
        sueldoEmpleadoPlantaMinuto = sueldoEmpleadoPlantaHora / 60;
        sueldoEmpleadoPlantaSegundo = sueldoEmpleadoPlantaMinuto / 60;
        sueldoEmpleadoPlantaDiarioLV = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaDiariaLV;
        sueldoEmpleadoPlantaSabado = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaSabado;
        sueldoEmpleadoPlantaSemanal = sueldoEmpleadoPlantaDiarioLV * 5;
        sueldoEmpleadoPlantaTotalSemanal = sueldoEmpleadoPlantaSemanal + sueldoEmpleadoPlantaSabado;
        sueldoEmpleadoPlantaQuincenal = sueldoMensual / 2;

        //Salida de los resultados//
        cout << "El empleado " << nombreEmpleado << " trabaja " << horasEmpleadoPlantaMes << " horas al mes, y el resultado del estudio de su sueldo es el siguiente: " <<endl;
        cout << "Sueldo por hora: $" << sueldoEmpleadoPlantaHora << endl;
        cout << "Sueldo por minuto: $" << sueldoEmpleadoPlantaMinuto << endl;
        cout << "Sueldo por segundo: $" << sueldoEmpleadoPlantaSegundo << endl;
        cout << "Sueldo diario de lunes a viernes: $" << sueldoEmpleadoPlantaDiarioLV << endl;
        cout << "Sueldo diario del sabado: $" << sueldoEmpleadoPlantaSabado << endl;
        cout << "Sueldo semanal: $" << sueldoEmpleadoPlantaSemanal << endl;
        cout << "Sueldo total semanal: $" << sueldoEmpleadoPlantaTotalSemanal << endl;
        cout << "Sueldo quincenal: $" << sueldoEmpleadoPlantaQuincenal << endl; 
        

        break;
    
    case 2: 
    cout << "Ingrese el sueldo del empleado: ";
        cin >> sueldoEmpleado;
        while (sueldoEmpleado < 16000) { 
            cout << "Sueldo invalido. Ingrese nuevamente el sueldo: ";
            cin >> sueldoEmpleado;
        }

        cout << "Empleado de medio tiempo" << endl;
        cout << "El empleado " << nombreEmpleado << " tiene " << edadEmpleado << " años, es de genero " << generoEmpleado << " y su sueldo es de $" << sueldoEmpleado << endl;
        
        //Calculo de las horas//
        sueldoEmpleadoMedioTiempoHora = sueldoEmpleado / horasEmpleadoMedioTiempoMes;
        sueldoEmpleadoMedioTiempoMinuto = sueldoEmpleadoMedioTiempoHora / 60;  
        sueldoEmpleadoMedioTiempoSegundo = sueldoEmpleadoMedioTiempoMinuto / 60;
        sueldoEmpleadoMedioTiempoDiarioLV = sueldoEmpleadoMedioTiempoHora * horasEmpleadoMedioTiempoDiariaLV;
        sueldoEmpleadoMedioTiempoSabado = sueldoEmpleadoMedioTiempoHora * horasEmpleadoPlantaSabado;
        sueldoEmpleadoMedioTiempoSemanalLV = sueldoEmpleadoMedioTiempoDiarioLV * 5;
        sueldoEmpleadoMedioTiempoSemanalTotal = sueldoEmpleadoMedioTiempoSemanalLV + sueldoEmpleadoMedioTiempoSabado;
        sueldoEmpleadoMedioTiempoQuincenal = sueldoEmpleado / 2;

        //Salida de los resultados//
        cout << "El empleado " << nombreEmpleado << " trabaja " << horasEmpleadoMedioTiempoMes << " horas al mes, y el resultado del estudio de su sueldo es el siguiente: " <<endl;
        cout << "Sueldo por hora: $" << sueldoEmpleadoMedioTiempoHora << endl;
        cout << "Sueldo por minuto: $" << sueldoEmpleadoMedioTiempoMinuto << endl;
        cout << "Sueldo por segundo: $" << sueldoEmpleadoMedioTiempoSegundo << endl;
        cout << "Sueldo diario de lunes a viernes: $" << sueldoEmpleadoMedioTiempoDiarioLV << endl;
        cout << "Sueldo diario del sabado: $" << sueldoEmpleadoMedioTiempo
        cout << "Sueldo semanal: $" << sueldoEmpleadoMedioTiempoSemanalLV << endl;
        cout << "Sueldo total semanal: $" << sueldoEmpleadoMedioTiempoSemanal
        cout << "Sueldo quincenal: $" << sueldoEmpleadoMedioTiempoQuincenal << endl;

        break;

    }
}