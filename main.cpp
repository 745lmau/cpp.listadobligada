#include <iostream>
#include "listaligadadoble.h"

using namespace std;

int main(){

	ListaDobleLigada<int> enteros;

	enteros.push_front(3);
	enteros.push_front(2);
	enteros.push_front(1);

	enteros << 1 << 5 << 1;

	enteros.print();

	cout << endl << "Cantidad: "<< enteros.size() << endl << endl;

	enteros.remove_if(1);

    enteros.print();

    cout << endl << "Cantidad: "<< enteros.size() << endl << endl;

	enteros.~ListaDobleLigada();
    return 0;
}
