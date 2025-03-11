#include <iostream>

using namespace std;

float fungsiHitungRerata(float x, float y){
    return (x + y) / 2;
}

string fungsiCekStatusKelulusan(float a){
    if (a >= 75) {
        return "Lulus";
    }
    else {
        return "Tidak Lulus";
    }
}

int main(){
    float Nilai1, Nilai2, Rerata;
    cout << "Masukkan Nilai 1: ";
    cin >> Nilai1;
    cout << "Masukkan Nilai 2: ";
    cin >> Nilai2;
    
    cout << "Status kelulusan: " << fungsiCekStatusKelulusan(fungsiHitungRerata(Nilai1, Nilai2));
}