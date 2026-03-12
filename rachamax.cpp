#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


int main(){
    int n, a, resultado;
    string temp;
    vector<string> rachas;
    vector<int> vl;
    cout << "dime las rachas a analizar ";
    cin >> n;
    while(cin.peek()=='\n'){cin.ignore();}
    for (int i=0;i<n;i++){
        getline(cin,temp);
        rachas.push_back(temp);
    }
    for (int i=0;i<n;i++){
        istringstream ss(rachas[i]);
    vl.clear();
    while(ss >> a){vl.push_back(a);}
    if(vl.size()>0){
        resultado=racha(vl,vl.size());
        cout << resultado <<"";
        }else{cout<< "0";}
    }
}

int racha