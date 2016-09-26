//lista ligadas simples  
#include <stdlib.h>
class Nodo {
	int dato;
	Nodo *sigu;
public :
Nodo *creaNodo(int x){
	Nodo *p;
	p=(Nodo *)malloc(sizeof(Nodo)); // p=new Nodo();
	p->dato=x;
	p->sigu=NULL;
	return p;
}
int getDato(){
	return dato;
}
Nodo *getSigu(){
	return sigu;
}
void conecta(Nodo *otro){
	sigu=otro; 
}

};


