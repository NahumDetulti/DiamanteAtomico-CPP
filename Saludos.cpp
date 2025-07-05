```
#include "Saludos.h"
#include <iostream>
#include <time.h>
using namespace std;
Saludos::Saludos(){}
string Saludos::obtenerSaludo(){
    time_t ahora = time(0);
    tm* fechaActual = localtime(&ahora);
    int hora = fechaActual->tm_hour;
    if(hora < 12){
        return "Bienvenido al brillo de tu potencial - DiamanteAtomico, tu coach de transformación personal. ¿Qué área de tu vida quieres pulir hoy?";
    }else if(hora < 18){
        return "Hola, soy DiamanteAtomico. Estalla tu grandeza: ¿Qué objetivo quieres lograr conmigo?";
    }else{
        return "DiamanteAtomico: Transformación explosiva desde adentro hacia afuera. ¿Qué te trae a este punto de quiebre?";
    }
}
string Saludos::obtenerHoraDelDia(){
    time_t ahora = time(0);
    tm* fechaActual = localtime(&ahora);
    int hora = fechaActual->tm_hour;
    if(hora < 12){
        return "Buenos días";
    }else if(hora < 18){
        return "Buenas tardes";
    }else{
        return "Buenas noches";
    }
}
```
