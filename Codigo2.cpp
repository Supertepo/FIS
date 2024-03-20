#include <iostream>
#include<fstream>
#include<stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;
//Algoritmo para cifrar palabras con ROT 47.
char aZ[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

//funcion cifrado
void cifrado(){
	char txt[9000];
	int k, contarPalabras = 1;
	cin.ignore(); //para descartar los separadores
		cout<<"Ingrese el texto que deseas cifrar, ademas deberas ingresar tu nombre completo y correo electronico vigente al final del mismo: \n\n"<<endl;
		cin.getline(txt,9000);
		for(int i=0; i<strlen(txt); i++){
			for(int j=0; j<strlen(aZ); j++){
				if(txt[i]==aZ[j]){
					int aux=(j+47)%52;
					txt[i]=aZ[aux];
					break;
				}
			}
		}
		
	cout<<"\t \nEl texto cifrado es: \n\n"<<txt<<endl;
	cout<<"\n";
	cout<<"Archivo .txt de nombre cifrado.txt creado"<<endl;
//empezar a modificar el archivo o en su defecto crearlo en caso de no haber uno
	ofstream archivo;
	
	archivo.open("Cifrado.txt",ios::out); //abriendo el archivo
	
	if(archivo.fail()){ //comprobar
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	archivo<<"Cifrado \n"<<endl;
    archivo<<txt<<endl;
    archivo.close(); //cerrar el archivo
    
}
//funcion descifrado
void descifrado(){
	char txt[9000];
	cin.ignore();
	cout<<"ingrese el texto que que deseas descifrar:"<<endl;
	cin.getline(txt,9000);
	for(int i=0; i<strlen(txt); i++){
		for(int j=0; j<strlen(aZ); j++){
			if(txt[i]==aZ[j]){
				int aux;
				if((j-47)<0){
					aux=52+(j-47);
				}
				else{
					aux=(j-47)%52;
				}
				txt[i]=aZ[aux];
				break;		
			}
		}
	}
	cout<<"\t \nEl texto descifrado es: \n"<<txt<<endl;
	//empezar a modificar el archivo o en su defecto crearlo en caso de no haber uno
	ofstream archivo;
	
	archivo.open("descifrado.txt",ios::out); //abriendo el archivo
	
	if(archivo.fail()){ //comprobar
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	archivo<<"Descifrado"<<endl;
    archivo<<txt<<endl;
    
    archivo.close(); //cerrar el archivo
}

int main(){
	int opcion;
	string txt;
	do{
		cout<<"Elige una opcion"<<endl;
		cout<<"1.-Cifrar"<<endl;
		cout<<"2.-Descifrar"<<endl;
		cout<<"3.-Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1: cifrado();
			break;
			case 2: descifrado();
			break;
			case 3: 
			cout<<"Gracias por utilizar este programa, ten un gran dia."<<endl;
		}
		system("PAUSE");
	} while(opcion !=3);
	
}