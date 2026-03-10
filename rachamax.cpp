#include <iostream>
using namespace std;
void pbn(){
    int n;
    cout << "Cuantas pruebas me vas a dar ";
    cin >> n;
    int vl[n];
    for(int i=0; i<n; i++){
        cout << "Dame los valores de la prueba " << i+1 << ": ";
        cin >> vl[i];
    }
   
}

int main(){
    pbn();
    return 0;

    
}