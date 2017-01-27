#include<iostream>
using namespace std;

void  ordenarArreglo(int );



int main(){
	int n; 
	 cout<<"Ingrese el tamano:";
	cin>>n; 
    ordenarArreglo( n); 
}


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

