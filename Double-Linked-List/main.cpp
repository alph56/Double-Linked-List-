#include <iostream>
#include<locale.h>
#include "Lista.h"

using namespace std;

int main()
{
    //Idioma:Espa�ol
    setlocale(LC_CTYPE, "Spanish");

    //Objetos
    Lista *list=new Lista ();
    int opcion;
    Alumno a1;
    unsigned int pos;
    string borrar,buscar,nameAnt,nameSig;
    int borrar1,buscar1;

    //Men�
    do{
            system("cls");
            cout<<"\t\t\tRegistro de Estudiantes\n"<<endl;
            cout<<"\t\tMenu Principal"<<endl;
            cout<<"1.-Agregar estudiante"<<endl;
            cout<<"2.-Eliminar elementos"<<endl;
            cout<<"3.-Buscar estudiante"<<endl;
            cout<<"4.-Ver elementos"<<endl;
            cout<<"5.-Salir"<<endl;
            cout<<"Inserte una opci�n: ";
            fflush(stdin);
            cin>>opcion;

            switch(opcion){
                case 1:
                    system("cls");
                    int answer;
                    cout<<"\t\t\tMenu Agregar"<<endl;
                    cout<<"1.-Agregar al inicio"<<endl;
                    cout<<"2.-Agregar en posicion"<<endl;
                    cout<<"3.-Agregar al final"<<endl;
                    cout<<"4.-Regresar al menu principal"<<endl;
                    cout<<"Inserte una opcion: ";
                    fflush(stdin);
                    cin>>answer;
                    switch(answer){
                        case 1:
                            system("cls");
                            cout<<"\t----Registro al inicio----"<<endl;
                            cout<<"Ingrese el nombre: ";
                            cin>>a1.name;
                            cout<<"Ingrese la edad: ";
                            cin>>a1.edad;
                            list->insertarInicio(a1);
                            cout<<"Registrado con exito"<<endl;
                            system("pause");
                            break;
                        case 2:
                            system("cls");
                            cout<<"\t----Registro en posicion----"<<endl;
                            cout<<"Ingrese el nombre: ";
                            cin>>a1.name;
                            cout<<"Ingrese la edad: ";
                            cin>>a1.edad;
                            cout<<"Ingrese la posicion: ";
                            cin>>pos;
                            list->insertarMedio(a1,pos);
                            system("pause");
                            break;
                        case 3:
                            system("cls");
                            cout<<"\t----Registro al Final----"<<endl;
                            cout<<"Ingrese el nombre: ";
                            cin>>a1.name;
                            cout<<"Ingrese la edad: ";
                            cin>>a1.edad;
                            list->insertarFinal(a1);
                            cout<<"Registrado con exito"<<endl;
                            system("pause");
                            break;
                        case 4:
                            system("cls");
                            cout<<"Regresando al menu principal...."<<endl;
                            system("pause");
                            break;
                    }
                    break;

                case 2:
                    system("cls");
                    int resp;
                    cout<<"\t\t\tMenu Eliminar"<<endl;
                    cout<<"1.-Eliminar por nombre"<<endl;
                    cout<<"2.-Eliminar por edad"<<endl;
                    cout<<"3.-Eliminar Toda la Lista"<<endl;
                    cout<<"4.-Regresar al menu principal"<<endl;
                    cout<<"Inserte una opcion: ";
                    fflush(stdin);
                    cin>>resp;
                    switch(resp){
                        case 1:
                            system("cls");
                            cout<<"\t----Eliminacion por nombre----"<<endl;
                            cout<<"Ingrese el nombre a eliminar: ";
                            cin>>borrar;
                            list->eliminarName(borrar);
                            cout<<"Eliminado con exito"<<endl;
                            system("pause");
                            break;

                        case 2:
                            system("cls");
                            cout<<"\t----Eliminacion por edad----"<<endl;
                            cout<<"Ingrese la edad a eliminar: ";
                            cin>>borrar1;
                            list->eliminarEdad(borrar1);
                            cout<<"Eliminado con exito"<<endl;
                            system("pause");
                            break;

                        case 3:
                            system("cls");
                            int seguro;
                            cout<<"\t----Eliminar Toda la Lista----"<<endl;
                            cout<<"->Seguro(a) que quieres eliminar todo?"<<endl;
                            cout<<"1.-Si\t2.-No"<<endl;
                            cout<<"Inserte su respuesta: ";
                            fflush(stdin);
                            cin>>seguro;
                            switch(seguro){
                                case 1:
                                    system("cls");
                                    cout<<"Bueno....si tu lo dices"<<endl;
                                    list->eliminarTodo();
                                    system("pause");
                                    break;
                                case 2:
                                    system("cls");
                                    cout<<"Ya ves, piensalo bien"<<endl;
                                    system("pause");
                                    break;
                                default:
                                    system("cls");
                                    cout<<"Opcion NO valida"<<endl;
                                    system("pause");
                                    break;
                            }
                            break;

                        case 4:
                            system("cls");
                            cout<<"Regresando al menu principal...."<<endl;
                            system("pause");
                            break;

                        default:
                            system("cls");
                            cout<<"Opcion NO valida"<<endl;
                            break;
                    }
                    break;

                case 3:
                    system("cls");
                    int busqueda;
                    cout<<"\t\t\tMenu Buscar"<<endl;
                    cout<<"1.-Buscar por nombre"<<endl;
                    cout<<"2.-Buscar por edad"<<endl;
                    cout<<"3.-Regresar al menu principal"<<endl;
                    cout<<"Inserte una opcion: ";
                    fflush(stdin);
                    cin>>busqueda;
                    switch(busqueda){
                        case 1:
                            system("cls");
                            cout<<"\t----Busqueda por nombre----"<<endl;
                            cout<<"Ingrese el nombre a buscar: ";
                            cin>>buscar;
                            list->buscarName(buscar);
                            system("pause");
                            break;
                        case 2:
                            system("cls");
                            cout<<"\t----Busqueda por edad----"<<endl;
                            cout<<"Ingrese la edad a buscar: ";
                            cin>>buscar1;
                            list->buscarEdad(buscar1);
                            system("pause");
                            break;
                        case 3:
                            system("cls");
                            cout<<"Regresando al menu principal...."<<endl;
                            system("pause");
                            break;
                        default:
                            system("cls");
                            cout<<"Opcion NO valida"<<endl;
                            system("pause");
                            break;

                    }
                    break;

                case 4:
                    system("cls");
                    int ver;
                    cout<<"\t\t\tMenu Ver Elementos"<<endl;
                    cout<<"1.-Ver el Primer Elemento de la Lista"<<endl;
                    cout<<"2.-Ver el Ultimo Elemento de la Lista"<<endl;
                    cout<<"3.-Ver Toda la Lista"<<endl;
                    cout<<"4.-Ver Tamano de la Lista"<<endl;
                    cout<<"5.-Comprobar si esta vacia"<<endl;
                    cout<<"6.-Regresar al Menu Principal"<<endl;
                    cout<<"Inserte una opcion: ";
                    fflush(stdin);
                    cin>>ver;
                    switch(ver){
                        case 1:
                            system("cls");
                            cout<<"\t----Ver Primero----"<<endl;
                            list->verFirst();
                            system("pause");
                            break;
                        case 2:
                            system("cls");
                            cout<<"\t----Ver Ultimo----"<<endl;
                            list->verLast();
                            system("pause");
                            break;
                        case 3:
                            system("cls");
                            cout<<"\t----Lista de Estudiantes----"<<endl;
                            list->mostrarTodo();
                            system("pause");
                            break;
                        case 4:
                            system("cls");
                            cout<<"\t----Tamano de la Lista----"<<endl;
                            list->tamanho();
                            system("pause");
                            break;
                        case 5:
                            system("cls");
                            cout<<"\t----Esta vacia la Lista?"<<endl;
                            list->vacia();
                            system("pause");
                            break;
                        case 6:
                            system("cls");
                            cout<<"Regresando al Menu Principal...."<<endl;
                            system("pause");
                            break;
                        default:
                            system("cls");
                            cout<<"Opcion NO valida"<<endl;
                            system("pause");
                            break;
                    }
                    break;
                case 5:
                    system("cls");
                    cout<<"Saliendo...."<<endl;
                    break;
                default:
                    system("cls");
                    cout<<"Opcion NO valida"<<endl;
                    system("pause");
                    break;
            }
    }while(opcion!=5);

    return 0;
}
