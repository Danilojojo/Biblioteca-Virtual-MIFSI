#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Estructura de Biblioteca
struct Libro {
    string titulo;
    string autor;
    string genero;
    int fecha_public;
    //string estado;
    bool prestado;
};
  
    vector<Libro> biblioteca;
        
  //Funcion para agregar libros
  bool agregarlibro(vector<Libro>&Libros){
      Libro nuevoLibro;
      cout<<"1. AGREGAR LIBRO\n"<<endl;
      cout<<"Esta opcion te permite, agregar libros al catalogo, ingresando los datos que se te solicitan a continuacion\n"<<endl;
      cout<<"Ingresar titulo del libro: ";
      getline(cin, nuevoLibro.titulo);
      cout<<"Ingresar el autor del libro: ";
      getline(cin, nuevoLibro.autor);
      cout<<"Ingrese el genero del libro: ";
      getline(cin, nuevoLibro.genero);
      cout<<"Ingrese anio de publicacion (ejemplo : 1998): ";
      cin>>nuevoLibro.fecha_public;
      cout<<"Ingrese el estado del libro (1 Disponible, 0 Prestado): ";
      
      //crear una variable temporal que guarde el valor
      int estado;
     cin>>estado;
     cout<<"\n"<<endl;
      //crear una condicion
      //si la variable == 1 entonces 
      if(estado== 1){
          nuevoLibro.prestado = false;
      }
      //si la variable == 0 entonces nuevoLibro.prestado = false;
      if(estado== 0){
          nuevoLibro.prestado = true;
      }
      cin.ignore();
      
      Libros.push_back(nuevoLibro);
      system("cls");
      cout<<"Libro agregado exitosamente.\n"<<endl;
      cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
      return true;
  }
  
  //Función para buscar libros por título 
  bool buscarlibro(string titulobuscado){
      for(int i = 0;i<biblioteca.size();i++){
          if(biblioteca[i].titulo==titulobuscado){
        system("cls");
        cout<<"\nTitulo: "<<biblioteca[i].titulo<<endl;
        cout<<"Autor: "<<biblioteca[i].autor<<endl;
        cout<<"Genero: "<<biblioteca[i].genero<<endl;
        cout<<"Anio de publicacion: "<<biblioteca[i].fecha_public<<endl;
        
        cout<<"Estado: "<<(biblioteca[i].prestado ? "Prestado" : "Disponible")<<endl;
        
        
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
            
			 return true;
          }
         
      }
  
      return false;
      
  }
  
  //Función para buscar libros por género
  bool buscarlibrog(string generobuscado){
      for(int i = 0;i<biblioteca.size();i++){
          if(biblioteca[i].genero==generobuscado){
        system("cls");
        cout<<"\nTitulo: "<<biblioteca[i].titulo<<endl;
        cout<<"Autor: "<<biblioteca[i].autor<<endl;
        cout<<"Genero: "<<biblioteca[i].genero<<endl;
        cout<<"Anio de publicacion : "<<biblioteca[i].fecha_public<<endl;
        cout<<"Estado: "<<(biblioteca[i].prestado ? "Prestado" : "Disponible")<<endl;
        cout<<"\n"<<endl;
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
        
       return true;
          }
         
      }
  
      return false;
  }
  
  //Funcion para enlistar libros
  void  Lista_de_libro (vector<Libro>&biblioteca){
     	cout<<"Lista de libros:"<<endl<<" ";
     	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
     for(int i = 0;i<biblioteca.size();i++){
        
        cout<<"Codigo: "<<i+1<<" |";
        cout<<"Titulo: "<<biblioteca[i].titulo<<"| ";
        cout<<"Autor: "<<biblioteca[i].autor<<"| ";
        cout<<"Genero: "<<biblioteca[i].genero<<"| ";
        cout<<"Anio de publicacion: "<<biblioteca[i].fecha_public<<"| ";
        cout<<"Estado: "<<(biblioteca[i].prestado ? "Prestado" : "Disponible")<<endl;
        cout<<"---------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
  }
  }
  
  //Funcion para editar libros
   void editarlibro(vector<Libro>&biblioteca){
          Lista_de_libro(biblioteca);
          int opcion;
		cout<<"Ingrese el codigo del libro que desea editar: ";
      cin>>opcion;
      cin.ignore();
      cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
      if(opcion<1 || opcion > biblioteca.size()){
      cout<<"Opcion Incorrecta, vuelva a ingresar una opcion: "<<endl;
      cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
      return; 
      }
        cout<<"Seleccione lo que desea editar del libro:"<<endl;
        cout<<"Para acceder a la opcion que desea, debe ingresar el numero con el que se identifica. \n"<<endl;
        cout<<"1. Editar informacion del libro: "<<endl;
        cout<<"2. Cambiar estado del libro: "<<endl;
        cout<<"\n--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
       
	    int edition;
        cout<<"Ingrese el numero de la opcion que desea editar: ";
        cin>>edition;
        cin.ignore();
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    system("cls");
	if (edition==1){
		cout<<"\nIngrese los datos que se le piden a continuacion, para editar el libro.\n"<<endl;
        cout << "\nIngrese el nuevo titulo del libro: ";
        getline(cin, biblioteca[opcion-1].titulo);
        cout << "Ingrese el nuevo autor del libro: ";
        getline(cin, biblioteca[opcion-1].autor);
        cout << "Ingrese el nuevo genero del libro: ";
        getline(cin, biblioteca[opcion-1].genero);
        cout << "Ingrese el nuevo Anio de publicacion (ejemplo : 1998): ";
        cin >> biblioteca[opcion-1].fecha_public;
        
    	}
    if(edition==2){
      
    int estado;
    cout<<"\n2. CAMBIAR ESTADO DEL LIBRO\n"<<endl;
    cout<<"\nIngrese el nuevo estado del libro (1 Disponible, 0 Prestado): ";
    cin>>estado;
    
      //crear una condicion
      //si la variable == 1 entonces 
      if(estado== 1){
         biblioteca[opcion-1].prestado =false;
      }
      //si la variable == 0 entonces nuevoLibro.prestado = false;
      if(estado== 0){
           biblioteca[opcion-1].prestado = true;
      }
      
    }
    system("cls");
        cin.ignore(); // Limpiar el buffer de entrada
        cout << "\nInformacion del libro actualizada correctamente.\n" << endl;
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

	}  
    
   
  int main (){
        
        string titulobuscado;
        string generobuscado;
   	cout<<"\nBIBLIOTECA VIRTUAL MIFSI\n"<<endl;
   	cout<<"\nBIENVENIDO A MIFSI!.\n"<<endl;
    cout<<"Somos una entidad que promueve la lectura en la comunidad educativa."<<endl;
    cout<<"Le ofrecemos un amplio catalogo de libros."<<endl;
    cout<<"\nSi quieres aventura, lanzate a la lectura."<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    
    
   	
    // Libros por default
    Libro libro1 = {"El nombre del viento", "Patrick Rothfuss", "Fantasia", 2007, false};
    Libro libro2 = {"1984", "George Orwell", "Distopia", 1949, false};
    biblioteca.push_back(libro1);
    biblioteca.push_back(libro2);
     
    
   
    int opcion = 0;
    while (opcion != 6) {
    system("pause");
		cout<<"Sistema de Gestion de Biblioteca\n"<<endl;
    	cout<<"Estimado usuario, a continuacion se le presentan una serie de opciones a elegir dentro de nuestra biblioteca virtual"<<endl;
		cout<<"Para acceder a la opcion que desea, debe ingresar el numero con el que se identifica."<<endl;
		cout<<"Si desea salir del programa ingrese el numero 6.\n"<<endl;
		

        cout << "Menu de opciones:" << endl;
        cout << "1. Agregar libro" << endl;
        cout << "2. Buscar libro" << endl;
        cout << "3. Listar libros" << endl;
        cout << "4. Editar libro" << endl;
        cout << "5. Desarrolladores"<<endl;
        cout << "6. Salir\n" << endl;
		
        cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout << "Ingrese el numero de la opcion que desea utilizar: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada
       	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
        system("cls");
		switch (opcion) {
            case 1:
          //      agregar libro
       
      agregarlibro(biblioteca);
                      break;
            // Buscar libro
			case 2:
            int option;
            cout<<"2. BUSCAR LIBRO."<<endl;
            cout<<"Esta opcion te permite buscar libros dentro de nuestro catalogo, a traves del titulo o el genero del libro."<<endl;
            cout<<"Para acceder a la opcion que deseas, debes ingresar el numero con el que se identifica.\n"<<endl;
            cout<<"1. Buscar por titulo: "<<endl;
            cout<<"2. Buscar por genero: "<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
            cout<<"Ingresa el numero de la opcion con la que deseas realizar la busqueda:  ";
			cin>>option;
            cin.ignore();
			cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                switch(option){
                case 1:
                cout<<"Ingresa el titulo del libro: ";
                getline(cin, titulobuscado);
                cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                if(buscarlibro(titulobuscado)==true){
                }
                else{
                	system("cls");
                cout<<"No encontrado"<<endl;
                cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
				 }
                break;
                case 2:
                cout<<"Ingresa el genero del libro: ";
                getline(cin, generobuscado);
                cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                if(buscarlibrog(generobuscado)==true){
               }
              else{
              	system("cls");
                cout<<"No encontrado"<<endl;
                cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;              
				}
                break; 
                case 3:
             
                break;
                }
      
                break;
            case 3:
         //       Para listar libro
        cout<<"\n3. LISTAR LIBROS."<<endl;
  		cout<<"Esta opcion te permite, observar a traves de una lista, los libros existentes en nuestro catalogo.\n"<<endl;
        Lista_de_libro(biblioteca);
    	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
			    break;
           case 4:
           	//Editar libros
        cout<<"\n4. EDITAR LIBRO."<<endl;
    	cout<<"Este apartado te permite editar los datos o disponibilidad de los libros, accediendo al codigo del mismo."<<endl;
    	cout<<"A continuacion se te presenta las opciones de edicion."<<endl;
		cout<<"Para acceder a la opcion que deseas, debes ingresar el numero con el que se identifica.\n"<<endl;
        editarlibro(biblioteca);
               
			    break;
            case 5:
            cout<<"\nDESARROLLADORES  \n"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"Danilo Urizar"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"Felisa Barreno"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"Israel Alarado"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"Martin Tax"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"Selena Ixtan"<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
			break;
            
			case 6:
            cout << "Saliendo del programa..." << endl;
                break;
			    
            default:
                cout << "Opcion invalida. Por favor ingrese una opcion valida." << endl;
                break;
        }
    }
    system("pause");
    return 0;  
  }
