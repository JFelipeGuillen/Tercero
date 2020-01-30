#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
// Ordenamiento por intercambio -- Estructura de datos

int main(){
	int A[8];
	int pos,Aux;
	cout<<"\t----------Ordenamiento por intercambio----------";
	for(int i=0;i<8;i++){
		cout<<"\nIngrese un valor: ";
		cin>>A[i];
		}
	for(int i=0;i<8;i++){
	    	pos=i;
		Aux=A[i];
		while((pos>0)&&(A[pos-1]>Aux)){
			A[pos]=A[pos-1];
			pos--;	
		}
		A[pos]=Aux;
	}
	for(int i=0;i<8;i++){
		cout<<A[i]<<" || ";
	}
  	cout<<"\n\n\tGrupo #4\n\nGuillen Miraba Jose Felipe\nGutierrez Leon Dennis Orlando\nJaramillo Ramirez Valeria Nicole";
  getch();
  return 0;
}

