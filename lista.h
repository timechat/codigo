#include "nodo.h"
class Lista{
	private:
	Nodo *cab;    
	Lista(){
		cab=NULL;
	}
	int esvacia(){
		return(cab==NULL)?1:0;
	}
	void insertaFinal(int x){
		Nodo *p, *q;
		p=p->creaNodo(x);
		if (esvacia()){
			cab=p;
			return;
		}
		q=cab;
		while(q->getSigu()!=NULL){
			q=q->getSigu();
		}
		q->conecta(p);
	}
	void insertaPrinc(int x){
		Nodo *p,*q;
		p=p->creaNodo(x);
	
	if (esvacia()){
		cab=p;
		return;
	}
	q=cab;              
	p->conecta(q);
	cab=p;
}
void insertaOrden(int x){
		Nodo *p,*q,*ant;
		p=p->creaNodo(x);
	if (esvacia()){
		cab=p;
		return;
	}
	q=cab;
	if(p->getDato()<q->getDato()){  
    p->conecta(q);
    cab=p;
    return;
}
ant =q;
while(q!=NULL && q->getDato()< p->getDato()){ 
ant=q;
q=q->getSigu();	
}
if(q==NULL){
ant->conecta(p);
} else{ 
p->conecta(q);
}
}

void desplegar(){
	Nodo *q;
	if (esvacia()){
		cout<<" Lista Vacia ";
		return;
	}
	q=cab;
	while(q!=NULL){
	cout<<q->getSigu()<<endl;
	q=q->getSigu();	
	}
}
void suma(){
	Nodo *q=cab;
	int s=0;
	while(cab!=NULL){
		s=s+q->getDato();
		q=q->getSigu();
	}
	cout<<"la suma es iguala a : "<<s<<endl;
	return s;
}

void sumarecur(Nodo *q){
	if(q == NULL){
		return q;
	}
	return q->getDato()+sumarecur(q->getSigu());
}
Nodo getCab(){
	return cab;
}
void eliminar (int x){
	Nodo *q , *ant;
	if(esvacia()){
		cout<<"la lista esta vacia "<<endl;
		return;
	}
q=cab;
if(q->getDato()==x){
	cab=q->getSigu();
	free(q);
}
else{
	ant=q;
	while(q!=NULL && q->getDato()!=x){
		ant=q;
		q=->getSigu();
	}
	if(q!=NULL){
		ant->conecta(q->getSigu()); // conectar ant a q 
		free(q);
	}
	else{
		cout<<"Dato no esta ";
	}
}

}

};

