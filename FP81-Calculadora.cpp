//Fecha: 15 de Noviembre de 2017
//autor: Alan Emmanuel Valle García
//Práctica: no. 81
//Objetivo: Programacion modular

// Bibliotecas o librerias
#include <iostream>
#include <cmath>
using namespace std;

// Prototipos
void menu(void);  
float sumar (void); 
float restar (void); 
float multi (float, float);
float divi (float, float);
int residuo (void);
int pot (int, int);
float raiz (void);

// Programa principal
int main () {
    int opcion;
    float m1, m2;
    float d1, d2;
    int base, n;
    
    do {
      menu();
      cin >> opcion;
      switch (opcion)
      {
        case 1:  // suma
        cout << "================================================" << endl;
             cout << "Resultado de la suma = " << sumar() << endl;
             break;    
        case 2:  // resta
        cout << "================================================" << endl;
             cout << "Resultado de la resta = " << restar() << endl;
             break;
        case 3: // multiplicación
        cout << "================================================" << endl;
             cout << "Resultado de la multiplicacion = " << multi(m1,m2) << endl;
             break;
        case 4: // división
        cout << "================================================" << endl;
             cout << "Resultado de la division = " << divi(d1,d2) << endl;
             break;
        case 5: // residuo
        cout << "================================================" << endl;
             cout << "Residuo de la division = " << residuo() << endl;
             break;
        case 6: // potencia
        cout << "================================================" << endl;
             cout << "Resultado de la potencia = " << pot(base,n) << endl;
             break;
        case 7: // raíz cuadrada
        cout << "================================================" << endl;
             cout << "Resultado de la raiz cuadrada = " << raiz() << endl;
             break;
        case 0: // salida
        cout << "================================================" << endl;
             cout << "Seleccionaste salir..." << endl;
             break;
        default:
                cout << "Opcion no valida" << endl;
                break;
      } // switch
    system("pause");
   } while (opcion != 0);
    return(0);
} // Main

// definición o implementación de funciones
//==============================================================================
void menu (void)
{
     system("cls");
     cout << "Calculadora sencilla" << endl;
     cout << "================================================" << endl;
     cout << "1) sumar" << endl;
     cout << "2) restar" << endl;
     cout << "3) multiplicar" << endl;
     cout << "4) dividir" << endl;
     cout << "5) residuo" << endl; //modulo
     cout << "6) potencia" << endl;
     cout << "7) raiz cuadrada" << endl;
     cout << "0) SALIR" << endl;
     cout << "================================================" << endl;
     cout << "Digita tu opcion --> ";
} // menu
//==============================================================================
float sumar (void)
{
      float s1,s2;
      
      cout << "Sumando numeros reales" << endl;
      cout << "Primer numero = ";
      cin >> s1;
      cout << "Segundo numero = ";
      cin >> s2;
      return (s1+s2);
} // sumar
//==============================================================================
float restar (void)
{
	float r1, r2;
	
	cout << "Restando numeros reales" << endl;
	cout << "Primer numero = ";
	cin >> r1;
	cout << "Segundo numero = ";
	cin >> r2;
	
	return (r1-r2);	
} // restar
//==============================================================================
float multi (float m1, float m2)
{
	
	cout << "Multiplicando numeros reales" << endl;
	cout << "Primer numero = ";
	cin >> m1;
	cout << "Segundo numero = ";
	cin >> m2;
	
	return (m1*m2);
} // multiplicar
//==============================================================================
float divi (float d1, float d2)
{
	cout << "dividiendo numeros reales" << endl;
	cout << "Primer numero = ";
	cin >> d1;
	cout << "Segundo numero = ";
	cin >> d2;
	
	return (d1/d2);
} // dividir
//==============================================================================
int residuo (void)
{
	int rd1, rd2;
	
	cout << "Residuo de division de numeros enteros" << endl;
	cout << "Primer numero = ";
	cin >> rd1;
	cout << "Segundo numero = ";
	cin >> rd2;
	
	return (rd1%rd2);
} // residuo
//==============================================================================
int pot (int po1, int po2)
{
	cout << "Elevar un numero a una potencia" << endl;
	cout << "Numero base = ";
	cin >> po1;
	cout << "Potencia = ";
	cin >> po2;
	
	return (pow(po1, po2));
} // potencia
//==============================================================================
float raiz (void)
{
	float rt;
	
	cout << "Encontrar la raiz cuadrada de un numero" << endl;
	cout << "Numero = ";
	cin >> rt;
	
	return (sqrt(rt));
} // raíz cuadrada
// fin de archivo
