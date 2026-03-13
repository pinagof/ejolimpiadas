#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int datos(int n, vector<string> &rachas, vector<int> &vl);
string op(vector<int> &vl, int lg);

int main(){
    int n, a;
    string temp, resul;
    vector<string> rachas;
    vector<int> vl;
    cout << "dime las rachas a analizar ";
    cin >> n;
    datos(n,rachas,vl);
    for (int i=0;i<n;i++){
        istringstream ss(rachas[i]);
        vl.clear();
        while(ss >> a){vl.push_back(a);}
        resul = op(vl, vl.size());
        cout << resul << "\n";
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

string op(vector<int> &vl, int lg){
    if (lg<1){return "No";}
    int mj=vl[0];
    int sum=vl[0];
    for (int j=0; j<lg; j++){
        sum=0;
        for(int i=j; i<lg; i++){
            sum+=vl[i];
            if (sum==0){return "Si";}
        }
    }
    return "No";
}