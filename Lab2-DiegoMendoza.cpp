#include<iostream>
#include<cmath>
using namespace std;

void  ordenarArreglo(int );
void cubos(int);
void tercerEjercicio();

int main(){
	int opcion;
	cout<<"Ingrese el ejercicio que desea ve\n1.Ordenar Arreglo	\n	2.Cubos de los numeros\n3.Ejercicio de ver que hace:";
	cin>>opcion;
	int n; 
	 
   // ordenarArreglo( n);
	switch(opcion){
		case 1:
			cout<<"Ingrese el tamano del arreglo:";
			cin>>n;
			ordenarArreglo(n);
			break;
		case 2:
			cout<<"Ingrese la cantidad de cubos que quieren ver:";
			cin>>n;
			cubos(n);

			break;
		case 3:
			cout<<"Ejercicio 3:";
		default:
			cout<<"bye bye";
			
	}

}

//Segundo Ejercicio
void cubos(int n ){
	
		int cont=1;
		int i = 1;
		int suma=0;
		for(int k = 1 ;cont<=4;k+=2){
			if(i<=cont){
				cout<<k<<"+";
				suma +=k;
				i++;
			}else{
				cout<<"+"<<k<<"="<<suma<<"\n";
				i=2;
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
//Tercer ejercicio
void tercerEjercicio(){
 int n, m;

 do {

   cin >> n >> m;

 } while ((n < 0) || (m < 0));
//Los numeros deben ser mayores de 0 para salir del ciclo
 

 int x = 0;

 
//Mientras sea distinto de 0
 while (m != 0) {

   if (m % 2 != 0)
	   x = x + n;//Suma el primer numero a X
	
	n = n + n;//Suma dos veces el primer numeo a n
	m = m / 2;//A m lo divide entre dos

 	}
 

 

 cout << "El resultado es " << x << endl;//muestra el resultado que  es la suma del primer numero con x que es 0;
}
 // Fin del código
