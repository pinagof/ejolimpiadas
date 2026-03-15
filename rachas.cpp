#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int racha(vector<int> &vl, int largo);
int datos(int n, vector<string> &rachas, vector<int> &vl);

int main(){
    int n, a, resultado;
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
    if(vl.size()>0){
        resultado=racha(vl,vl.size());
        cout <<"" << resultado <<" ";
        }else{cout<< "0";}
    }
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

int racha(vector<int> &vl, int largo){
    if (largo<1) {return 0;}
    int mr=vl[0];
    int sum=vl[0];
    for(int i=1; i<largo; i++){
        if(sum+vl[i]<vl[i]){
            sum=vl[i];
        }
        else{
            sum+=vl[i];
        }
    }
    if(sum>mr){
        mr=sum;
    }
    return mr; 
}