#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/
public:
	int a;
	Lingkaran(int pJarijari):
		a(pJarijari)
	{
		cout << "lingkaran di buat" << a << "\n" << endl;
	}

	void input() 
	{
		int r;
		cout << "masukan jari-jari :\n" << endl;
		cin >> r;
		setX(r);
	}
	float Luas(int r) 
	{
		return 3.14 * r * r;
	}
	float Keliling(int r) 
	{ 
		return 3.14 * r;
	}

};
class Bujursangkar :public bidangDatar { /*lengkapi disini*/
public:
	int a;
	Bujursangkar(int pSisi) :
		a(pSisi)
	{
		cout << "bujursangkar di buat" << a << "\n" << endl;
	}

	void input() {
		cout << "masukan sisi : " << endl;
		int s;
		cin >> s;
		setX(s);
	}
	float Luas(int s)
	{
		return 3.14 * s * s;
	}
	float Keliling(int s)
	{
		return 3.14 * s;
	}
};
int main() { /*lengkapi disini*/ }
