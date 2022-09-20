// Libreria estandar de salida y entrada de datos.
#include<iostream>
// El using namespace std nos sirve para no esta utilizando siempre std::cout, std::in, std::endl, std::string, entre otros más
// además de que nos ayuda a mantener el codigo más limpio.
using namespace std;

int main (int argc, char *argv[]) {

//	Especifica el atributo de color de la salida de consola.
//		
//		Los atributos de color estan especificados con DOS digitos hexadecimales (el primero
//		corresponde al segundo plano; el segundo al primer plano). Los d�gitos
//		pueden coincidir con cualquiera de los siguientes valores:
//		
//		0 = Negro       8 = Gris
//		1 = Azul        9 = Azul claro
//		2 = Verde       A = Verde claro
//		3 = Aguamarina  B = Aguamarina claro
//		4 = Rojo        C = Rojo claro
//		5 = Purpura     D = Purpura claro
//		6 = Amarillo    E = Amarillo claro
//		7 = Blanco      F = Blanco brillante

	system("color 02"); //color 1*numero color de la pantalla 2*numero color de la letra

	// cout es para la salida de datos.
	cout<<"hola mundo"<<endl;
	system("pause");
	
	// Tipos de datos
	// Entero (Solo numeros entero que no posean decimales)
	int number = 0;
	// Float (Nos permite usar decimales)
	float floatNumber = 0.0;
	// char (Solo acepta un unico caracter)
	char character = 'a';
	// string (Nos permite tener una cadena de caracteres, es una funcion de char que nos permite ir añadiendo caracter "sin un limite" como el char que solo es de uno)
	string characterString = "Hola espero que estes teniendo un buen dia";
	
	// Variable auxiliares para la opcion
	int option = 99;
	char alternative = '0';
	
	do { // Hacer
		system("cls"); // Limpia la pantalla por lo que no dejaba ver el hola mundo y puse un system("pause") antes.
		cout<<"\t\t******Menu*******"<<endl
		     <<"1. Agregar un numero entero"<<endl
		     <<"2. Agregar un numero flotante"<<endl
		     <<"3. Ver el datos char o cambiarlo"<<endl
		     <<"4. Ver el saludo de la cadena de caracter"<<endl
		     <<"0. Salir del programa"<<endl
		     <<"Elija la opcion que decea? >>";
		cin>>option;
		switch (option) {
			case 1 :
				cout<<"El numero en la variable number es "<<number<<endl
				    <<"Ingrese el nuevo numero de la variable number"<<endl
				    <<">> ";
				cin>>number;
				
				cout<<"El nuevo numero de la variable number es "<<number<<endl;
				system("pause");
				break;
			case 2 :
				cout<<"El numero en la variable float number es "<<floatNumber<<endl
				     <<"Ingrese el nuevo numero de la variable float number"<<endl
				     <<">> ";
				cin>>floatNumber;
				
				cout<<"El nuevo numero de la variable float number es "<<floatNumber<<endl;
				system("pause");
				break;
			case 3 :
				cout<<"La variable character tiene el caracter "<<character<<endl
				    <<"Decea cambiar el caracter de la variable character"<<endl
				    <<"(S o 1). Para cambiar "<<endl<<"(N o 0) Para no cambiar"<<endl
				    <<">> ";
				cin>>alternative;
				if (alternative == 'S' || alternative == 's' || alternative == '1') {
					cout<<"Ingrese el nuevo caracter"<<endl
					    <<">> ";
					cin>>character;
					cout<<"El nuevo caracter de la variable character es "<<character<<endl
					    <<"Gracias!!!"<<endl;
				} else if (alternative == 'N' || alternative == 'n' || alternative == '0') {
					cout<<"Has decidido no cambiar el caracter"<<endl;
					cout<<"Gracias!!!"<<endl;
				} else {
					cout<<"Te has confundido de opcion"<<endl;
				}
				system("pause");
				break;
			case 4 :
				cout<<characterString<<endl;
				system("pause");
				break;
			case 0 :
				break;
			default :
				break;
		}
	} while (option != 0);  // Mientras option sea diferente de 0
	
	// Para pausar la aplicacion es con un getch creo no me acuerdo muy bien o con system("pause")
	system("pause");
	// Para que la función principal no nos devuelva basura o algo random.
	return 0;
}

