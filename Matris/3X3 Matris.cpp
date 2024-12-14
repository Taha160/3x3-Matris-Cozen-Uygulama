#include <iostream>

using namespace std;

int main(){
	int a11, a12,a13,a21, a22,a23, a31, a32, a33, b11, b12, b13,b21, b22,b23, b31, b32, b33;
	string islem;
	char durum;
do{
cout << "3x3 A Matrisinin degerlerini giriniz : " << endl;
cout << "a11 : ";
cin >> a11;
cout << "a12 : ";
cin >> a12;
cout << "a13 : ";
cin >> a13;
cout << "a21 : ";
cin >> a21;
cout << "a22 : ";
cin >> a22;
cout << "a23 : ";
cin >> a23;
cout << "a31 : ";
cin >> a31;
cout << "a32 : ";
cin >> a32;
cout << "a33 : ";
cin >> a33;
cout << "A matrisi : " << endl;
cout << "|" << a11 << "|"<< "|" << a12 << "|"<< "|" << a13 << "|" << endl;
cout << "|" << a21 << "|"<< "|" << a22 << "|"<< "|" << a23 << "|" << endl;
cout << "|" << a31 << "|"<< "|" << a32 << "|"<< "|" << a33 << "|" << endl;
cout << "3x3 B Matrisinin degerlerini giriniz : " << endl;
cout << "b11 : ";
cin >> b11;
cout << "b22 : ";
cin >> b12;
cout << "b13 : ";
cin >> b13;
cout << "b21 : ";
cin >> b21;
cout << "b22 : ";
cin >> b22;
cout << "b23 : ";
cin >> b23;
cout << "b31 : ";
cin >> b31;
cout << "b32 : ";
cin >> b32;
cout << "b33 : ";
cin >> b33;
cout << "B matrisi : " << endl;
cout << "|" << b11 << "|"<< "|" << b12 << "|"<< "|" << b13 << "|" << endl;
cout << "|" << b21 << "|"<< "|" << b22 << "|"<< "|" << b23 << "|" << endl;
cout << "|" << b31 << "|"<< "|" << b32 << "|"<< "|" << b33 << "|" << endl;
cout << "Yapilacak islemi seciniz(toplama,carpma,determinant):"<< endl;
cin >> islem;
if(islem == "toplama"){
cout << "A ve B Matrisinin Toplami : " << endl;
cout << "|" << a11+b11 << "|"<< "|" << a12+b12 << "|"<< "|" << a13+b13 << "|" << endl;
cout << "|" << a21+b21 << "|"<< "|" << a22+b22 << "|"<< "|" << a23+b23 << "|" << endl;
cout << "|" << a31+b31 << "|"<< "|" << a32+b32 << "|"<< "|" << a33+b33 << "|" << endl;}
else if(islem == "carpma"){
cout << "A ve B Matrisinin Carpimi : " << endl;
cout << "|" << (a11*b11)+(a12*b21)+(a13*b31) << "|" << (a11*b12)+(a12*b22)+(a13*b32) << "|" << (a11*b13)+(a12*b23)+(a13*b33) << "|" << endl;
cout << "|" << (a21*b11)+(a22*b21)+(a23*b31) << "|" << (a21*b12)+(a22*b22)+(a23*b32) << "|" << (a21*b13)+(a22*b23)+(a23*b33) << "|" << endl;
cout << "|" << (a31*b11)+(a32*b21)+(a33*b31) << "|" << (a31*b12)+(a32*b22)+(a33*b32) << "|" << (a31*b13)+(a32*b23)+(a33*b33) << "|" << endl;}
else if(islem == "determinant"){
int detA = a11 * (a22 * a33 - a23 * a32) - a12 * (a21 * a33 - a23 * a31) + a13 * (a21 * a32 - a22 * a31);
        cout << "A Matrisinin Determinanti : " << detA << endl;	}
cout << "Islemlerinize devam etmek istiyor musunuz(E/H) ? " << endl;
cin >> durum;} while(durum == 'E');
return 0;}
