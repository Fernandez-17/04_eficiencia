#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std;
void Ord_array_derecha(int n, int array[] ){
	// por la derecha
	int aux;
	for (int i= 0 ; i< n-1 ; i++){
		for(int j= 0; j< n-i-1 ; j++){
			if (array[j] > array[j+1]){
				aux       = array[j];
				array[j]  = array [j+1];
				array[j+1]= aux;
			}
		}
	}
}
void Ord_seleccion_directa( int n,int array []){
	int menor, k;
	for ( int i=0 ; i <n-1 ;i++){
		menor = array [i];
		k = i;
		for (int j = i; j < n ; j++){
			
			if (array [j] < menor){
				menor = array [j];
				k = j;
			}
		}
		array [k] = array [i];
		array [i] = menor;
	} 
}
int main (){
	int tam;
	srand (time(0));
	int array [500];
	for (int i = 0; i < 500 ; i++){
		array [i] =  rand () % 7800-3900;
		cout <<"Numero "<< i+1<< " :  " <<array [i] << endl;
	}
	
	cout <<"                                                " <<time (0) << endl;
	//Ord_array_derecha(500,array);
	Ord_seleccion_directa(500,array);
	cout << endl;
	for (int i=0 ; i <500 ; i++){
		cout <<"Numero "<< i+1<< " :  " <<array [i] << endl;
	}
	return 0;
}

