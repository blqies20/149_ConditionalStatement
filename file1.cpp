#include <iostream>

using namespace std;

float Panjang, Lebar, Luas;
void prosedurHitungLuas(){
    Luas = Panjang * Lebar;
}

void prosedurInputData(){
    cout << "Masukkan panjang: ";
    cin >> Panjang;
    cout << "Masukkan lebar: ";
    cin >> Lebar;
}

void prosesOutputData(){
    cout << "Luas persegi panjang:" << Luas;
}

int main(){
    prosedurInputData();
    prosedurHitungLuas();
    prosesOutputData();
}