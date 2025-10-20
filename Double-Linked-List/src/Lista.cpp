#include "Lista.h"

Lista::Lista(Nodo *sigPos,Nodo *antPos){
    this->head=sigPos;
    this->tail=antPos;
}

Lista::Lista(){
    head=nullptr;
    tail=nullptr;
}

//Insertar

//Inicio
void Lista::insertarInicio(Alumno a1){
	Nodo*aux=new Nodo(a1,nullptr);

	if(head==nullptr){
		head=aux;
		tail=aux;
	}
	else{
		aux->sig=head;
		head->ant=aux;
		head=aux;
	}
}

//Posicion
void Lista::insertarMedio(Alumno a1,int pos){
	Nodo*aux=new Nodo(a1,nullptr);
	int contador=0;
	int pos1=0;

	if (head==nullptr){
        head=aux;
	}
	else{
          Nodo *tmp=head;
          while(tmp!=nullptr){
                    tmp=tmp->sig;
                    contador++;
            }
            if(pos-1>contador){
                cout<<"Posicion esta fuera de la lista"<<endl;
            }
            else{
                    Nodo *tmp=head;
                    while(pos1<pos-1){
                            tmp=tmp->sig;
                            pos1++;
                    }
                    if(pos-1==0){
                            aux->sig=head;
                            head->ant=aux;
                            head=aux;
                            }
                    else if(pos1==contador){
                            aux->ant=tail;
                            tail->sig=aux;
                            tail=aux;
                            }
                    else if(pos1>0 && pos1<contador){
                            aux->ant=tmp->ant;
                            aux->sig=tmp;
                            tmp->ant->sig=aux;
                            tmp->ant=aux;
                            }
                    else if(pos1==contador-1){
                            aux->ant=tmp->ant;
                            aux->sig=tmp;
                            tmp->ant->sig=aux;
                            tmp->ant=aux;
                    }
                    cout<<"\nRegistrado con éxito"<<endl;
                }
	     }
}

//Final


//Final
void Lista::insertarFinal(Alumno a1){
    Nodo*aux=new Nodo(a1,nullptr);

    if(head==nullptr){
        head=aux;
        tail=aux;
    }
    else{
        tail->sig=aux;
        tail=aux;
    }
}

//Eliminacion

//Eliminar Por Nombre
void Lista::eliminarName(string borrar){
    Nodo *tmp=head;
	Nodo *tmpAnt=nullptr;
	bool band=true;

	if(tmp==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        while(tmp and band){
            if(tmp->dato.name==borrar){
                band=false;
            }
            else{
                tmpAnt=tmp;
                tmp=tmp->sig;
            }
        }

     if (tmp==nullptr){
			cout<<"Dato No Encontrado"<<endl;
		}
		else if(tmp==head){
			head=head->sig;
			delete tmp;
		}
		else if(tmp==tail){
			tmp->sig=nullptr;
			tail=tmpAnt;
			delete tmp;
		}
		else{
			tmp->ant->sig=tmp->sig;
			tmp->sig->ant=tmp->ant;
			delete tmp;
		}
    }
}

//Eliminar Por Edad
void Lista::eliminarEdad(int borrar1){
    Nodo *tmp=head;
	Nodo *tmpAnt=nullptr;
	bool band=true;

	if(tmp==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        while(tmp and band){
            if(tmp->dato.edad==borrar1){
                band=false;
            }
            else{
                tmpAnt=tmp;
                tmp=tmp->sig;
            }
        }

     if (tmp==nullptr){
			cout<<"Dato No Encontrado"<<endl;
		}
		else if(tmp==head){
			head=head->sig;
			delete tmp;
		}
		else if(tmp==tail){
			tmp->sig=nullptr;
			tail=tmpAnt;
			delete tmp;
		}
		else{
			tmp->ant->sig=tmp->sig;
			tmp->sig->ant=tmp->ant;
			delete tmp;
		}
    }
}

//Eliminar Todo
void Lista::eliminarTodo(void){
    Nodo *tmpAnt=nullptr;
    if(head==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        while(head!=nullptr){
            tmpAnt=head;
            head=head->sig;
            delete tmpAnt;
        }
        cout<<"Lista eliminada con exito"<<endl;
    }
}

//Busquedas

//Busqueda Por Nombre
void Lista::buscarName(string buscar){
    Nodo *tmp=head;
	bool band=true;

	if(tmp==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        while(tmp and band){
            if(tmp->dato.name==buscar){
                band=false;
                cout<<"Dato Encontrado!!"<<endl;
                cout<<"Nombre: "<<tmp->dato.name<<endl;
				cout<<"Edad: "<<tmp->dato.edad<<endl;
            }
            else{
                tmp=tmp->sig;
            }
        }
        if(tmp==nullptr)
            cout<<"Ese Estudiante NO Existe!!"<<endl;
    }
}

//Buscar Por  Edad
void Lista::buscarEdad(int buscar1){
    Nodo *tmp=head;
	bool band=true;

	if(tmp==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        while(tmp and band){
            if(tmp->dato.edad==buscar1){
                band=false;
                cout<<"Dato Encontrado!!"<<endl;
                cout<<"Nombre: "<<tmp->dato.name<<endl;
				cout<<"Edad: "<<tmp->dato.edad<<endl;
            }
            else{
                tmp=tmp->sig;
            }
        }
        if(tmp==nullptr)
            cout<<"Ese Estudiante NO Existe!!"<<endl;
    }
}

//Ver

//Ver Primer Elemento
void Lista::verFirst(void){
    Nodo *tmp=head;
    if(tmp==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        cout<<"Nombre:"<<tmp->dato.name<<endl;
        cout<<"Edad:"<<tmp->dato.edad<<endl;
    }
}

//Ver Ultimo Elemento
void Lista::verLast(void){
    Nodo *tmp=tail;
    if(head==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        cout<<"Nombre:"<<tmp->dato.name<<endl;
        cout<<"Edad:"<<tmp->dato.edad<<endl;
    }
}

//Mostrar Todo
void Lista::mostrarTodo(void){
    Nodo *tmp=head;
    if(tmp==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        while(tmp!=nullptr){
            cout<<"Nombre: "<<tmp->dato.name<<endl;
            cout<<"Edad: "<<tmp->dato.edad<<endl;
            cout<<"\n";
            tmp=tmp->sig;
        }
    }
}

//Tamaño
void Lista::tamanho(void){
    Nodo *tmp=head;
    int contador=0;

    if(head==nullptr)
        cout<<"Lista vacia"<<endl;
    else{
        while(tmp!=nullptr){
            contador++;
            tmp=tmp->sig;
        }
    }
    cout<<"Hay "<<contador<<" elementos en la Lista"<<endl;
}

//Vacia
void Lista::vacia(void){
    Nodo *tmp=head;

    if(tmp==nullptr)
        cout<<"La Lista está completamente vacia"<<endl;
    else
        cout<<"Hay elementos en la Lista"<<endl;
}
