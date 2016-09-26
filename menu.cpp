#include <iostream>
#include "lista.h"


using namespace std;

int main(){
	do{
	
	Lista l;
	int x,opc,opc2;
	
	cout<<"**************************\n";
	cout<<"*** 1.- insertar *********\n"; 
	cout<<"*** 2.- suma	(normal y recursiva) ********\n"; 
	cout<<"*** 3.- contar nodos (normal y recursivo) ***********\n";// falta codigo
	cout<<"*** 4.- desplegar (normal y resusivo) ********\n"; // falta codigo
	cout<<"*** 5.- desplegar desde la cabeza (normal y recursivo) ***********\n";//falta 
	cout<<"*** 6.- desplegar inversa (normal y recursivo) ***********\n";//falta
	//cout<<"*** 7.- promedio  ********\n";//flata
	cout<<"*** 8.- buscar (norml y recursivo)***********\n";//falta
	cout<<"*** 9.- eliminar   ***********\n";
	cout<<"*** 10.- eliminar 1 solo eleme ***********\n"; // Cuando queda sólo un elemento por borrar
	cout<<"*** 11.- eliminar principio  ***********\n";
	cout<<"*** 12.- eliminar medio  ***********\n";
	cout<<"*** 13.- eliminar final  ***********\n";	
	cout<<"*** 14.- salir  ***********\n";
	cout<<"**************************\n";
		
	cout<<" teclea una opcion \n ";
	cin>>opc;
	
	switch(opc!=1){
	case :
		cout<<"la suma es : "<<	s=l.suma( ) <<endl;
		cout<<"la suma recursiva  es: ";
		s=l.sumarecur(l.getSigu());
		break;
		case 2:
			
			break;
			
		case 3:
			break;
			
		case 4:
			break;
	case 5: 
	cout<<"los datos son : ";
	l.desplegar();
	break;
	case 6:
			cout<<"la inversa de la lista es : ";
			l.inversa();
			break;
	case 7:
		cout<<" el promedio es :";
		l.promedio();
		break;
		
		case 8:
			cout<<"ingrese el numero a buscar : ";
			cin>>x;
			l.buscar(x);
			break;
	case 9:
			break;
		case 10:
			break;
			case 11:
		break;
		    case 12:
			break;
		case 13:
			break;
			
	case 14:
		break;
		default: cout<<" opcion invalida \n";
		
	
	}system ("pause");
		
	
	if (opc==1){
	
		int x,opc3;
		Lista l;
		
		cout<<" 1.- Principio "<<endl;//completado y revisar
		cout<<" 2.- Final "<<endl;//completado y revisar
		cout<<" 3.- Orden"<<endl;//completado y revisar
		
		cout<<" teclea una opcion : ";
		cin>>opc3;
		
		switch (opc3){
			case 1:
				cout<<"teclea un numero : ";
				cin>>x;
				l.insertaPrinc(x);
				break;
				case 2:
					cout<<"teclea un nuemro : ";
					cin>>x;
					l.insertaFinal(x);
					break;
					case 3:
						cout<<"teclea un nuemro :";
						cin>>x;
						l.insertaOrden(x);
						break;
						case 4:
							break;
							default: cout<<" opcion invalida \n";
	
}while(opc3!=4);

}
}

}





