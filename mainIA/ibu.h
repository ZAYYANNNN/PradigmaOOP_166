#ifndef IBU_H
#define IBU_H
#include <iostream>
#include "anak.h"
#include <vector>
using namespace std;

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "Ibu \"" << nama << "\" tidak ada\n";
	}
	