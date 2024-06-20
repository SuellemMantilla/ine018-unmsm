#include <iostream>
using namespace std;
int main(){
    int puntuacion;
    cout << "Ingrese la puntuación obtenida: ";
    cin >> puntuacion;  
    if(puntuacion >= 90){
        cout << "Excelente" << endl;
    }else if(puntuacion >= 75){
        cout << "Buen trabajo" << endl;
    }
    else{
        cout << "Tú puedes, mejora" << endl;
    }
  return 0;
}
