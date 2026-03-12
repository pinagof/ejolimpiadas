#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


int main(){
    int n;
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

}