//Escriba un algoritmo en C++, que calcule si la //sumatoria de una matriz es número primo o no. La dimensión de la matriz debe ser indicada por el usuario,
// es decir el define cuantas columnas y cuantas filas necesita. Luego el mismo debe ingresar todos los valores y luego hacer la sumatoria.
#include <iostream>
#include <conio.h>


using namespace std;

int main (){
	int m,n,i;
  	int resultado=0,cont=0;
	cout<< "mi programa permite que el usuario ingrese vectores y estos se sumen "<< endl;
	cout<<"************************************"<< endl;
	cout<< " ingrese el numero de filas "<<endl;
	cin>>m;
	cout << " ingrese el numero de columnas"<< endl;
	cin>>n;





	int matriz1 [m][n], matriz2 [m][n];
	cout<< "ingrese los valores de su primera matriz"<< endl; 
	for (int i=0; i<m ; i++){
		for (int j=0; j<n; j++){
		
			cout<<" ingrese sus valores"<<endl;
			cin>> matriz1[i][j];
		
	}
	}
	
	
	
	cout<< "ingrese los valores de su segunda  matriz"<< endl; 
	for (int i=0; i<m ; i++){
		for (int j=0; j<n; j++){
		
			cout<<" ingrese sus valores"<<endl;
			cin>> matriz2[i][j];
		
			}}
			cout<<"\n";
 			cout<<"La matriz 1 es: "<<endl;
 				for(int i=0;i<m;i++){
  				for(int j=0;j<n;j++){
  				 cout<<matriz1[i][j]<<" ";
  			}}


			cout<<"\n";
 			cout<<"La matriz dos es: "<<endl;
 			for(int i=0;i<m;i++){
 			    for(int j=0;j<n;j++){
   				cout<<matriz2[i][j]<<" ";
   
 					 }
 				}

			cout<<"La suma de las dos matrices es:"<<endl;
 			for(int i=0;i<m;i++){
  			for(int j=0;j<n;j++){    
  		   		resultado = matriz1[i][j]+matriz2[i][j];
						 }}
			

// numero primo

for (i=1;i<=resultado;i++){
		if(resultado%i==0){
			cont++;
		}
	}
	
	if(cont>2){
		cout<<"\n El numero no es primo: "<<resultado <<endl;
	}
	else{
		cout<<"\n El numero es primo: "<< resultado  <<endl;
	}			 
					
			
					
			

	    getch ();
		return 0;
	
}
