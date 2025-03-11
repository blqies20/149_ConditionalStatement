#include <iostream>

using namespace std;

float fungsiHitungLuasBerparameter(float a, float b){
    return a * b;
}

int main(){
    float Panjang, Lebar;
    cout << "Masukkan Panjang: ";
    cin >> Panjang;
    cout << "Masukkan Lebar: ";
    cin >> Lebar;
    cout << "Luas Persegi Panjang: " << fungsiHitungLuasBerparameter(Panjang, Lebar);
}