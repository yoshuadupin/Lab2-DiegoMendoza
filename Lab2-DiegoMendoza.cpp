#include<iostream>
#include<cmath>
using namespace std;

void  ordenarArreglo(int );
void cubos(int);


int main(){
	int n; 
	 cout<<"Ingrese el tamano:";
	cin>>n; 
   // ordenarArreglo( n);
	cubos(n); 
}


void cubos(int n ){
	
		int cont=1;
		int i = 1;
		int suma=0;
		for(int k = 1 ;cont<=4;k+=2){
			if(i<=cont){
				suma +=k;
				i++;
			}else{
				cout<<suma<<"\n";
				i=1;
				cont++;
				suma=0;
				suma+=k;
			}				
		}
	}
//Primer Ejercicio
void ordenarArreglo( int n){
	int arreglo[n]; 

	for(int i = 0 ;i<n ; i++){
		cout<<"Ingrese un valor para el indice "<<i<<": ";
		cin>>arreglo[i];
	}
   for(int i = n; i>=0 ; i--){
      for(int k = 0 ; i< n && k+1<n; k++){
         if(arreglo[k]>arreglo[k+1]){

            int mayor =arreglo[k];
            int menor = arreglo[k+1];
            arreglo[k]=menor;
            arreglo[k+1]=mayor;

         }else{
            cout<<"No hizo el cambio";    
         }   
      }   
   }   
   for(int i = 0 ; i<n ;i++){
      cout<<arreglo[i]<<",\n";
   
   }
   cout<<"El elemento menor del arreglo es:"<<arreglo[0]<<"\n";
   cout<<"El elemento mayor del arreglo es"<<arreglo[n-1]<<"\n";
   cout<<"La diferencia entre estos dos"<<arreglo[n-1]-arreglo[0];
   
}

