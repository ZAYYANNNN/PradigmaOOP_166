#ifndef MANUSIA_H
#define MANUSIA_H
#include <iostream>
#include "jantung.h"
using namespace std;

class manusia {
public:
	string name;
	jantung varJantung;

	manusia(string pName) :name(pName)
	{
		cout << "jono hidup\n";
	}
	~manusia() {
		cout << "jono mati\n";
	}
};
#endif

