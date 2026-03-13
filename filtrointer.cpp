#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int datos(int n, vector<string> &rachas, vector<int> &vl);

int main(){
    int n, a, resul;
    string temp;
    vector<string> rachas;
    vector<int> vl;
    cout << "dime las rachas a analizar ";
    cin >> n;
    datos(n,rachas,vl);
    for (int i=0;i<n;i++){
        istringstream ss(rachas[i]);
    vl.clear();
    while(ss >> a){vl.push_back(a);}
    }
    if (vl.size()==0){
        cout << ""<<resul<<"\n";
    }else { cout <<"No\n";}
    

}

    int datos(int n, vector<string> &rachas, vector<int> &vl){
    string temp; 
    while(cin.peek()=='\n'){cin.ignore();}
    for (int i=0;i<n;i++){
        getline(cin,temp);
        rachas.push_back(temp);
    }
    return 0;
}

int suma(vector<int> &vl, int lg){
    if (lg<1){return 0;}
    int mj=vl[0];
    int sum=vl[0];
    for (int j=0; j<lg; j++){
        for(int i=j; i<lg; i++){


        }
    }

}