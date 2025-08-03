#include <iostream>
#include <cmath>
using namespace std;

// el bicho siu
//  Funciones matemáticas básicas
double suma(double a, double b){
    return a + b;
}

double resta(double a, double b){
    return a - b;
}

double multiplicacion(double a, double b){
    return a * b;
}

double division(double a, double b){
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Error: División por cero no permitida." << endl;
        return 0;
    }
}

// Funciones matemáticas avanzadas
double potencia(double base, double exponente){
    return pow(base, exponente);
}

double raizCuadrada(double numero)
{
    if (numero >= 0)
    {
        return sqrt(numero);
    }
    else
    {
        cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << endl;
        return 0;
    }
}

double logaritmo(double numero){
    if (numero > 0)
    {
        return log10(numero);
    }
    else
    {
        cout << "Error: El logaritmo solo está definido para números positivos." << endl;
        return 0;
    }
}

double logaritmoNatural(double numero){
    if (numero > 0)
    {
        return log(numero);
    }
    else
    {
        cout << "Error: El logaritmo natural solo está definido para números positivos." << endl;
        return 0;
    }
}

void mostrarMenu(){
    cout << "\n=== CALCULADORA CIENTÍFICA ===" << endl;
    cout << "Operaciones disponibles:" << endl;
    cout << "+ : Suma" << endl;
    cout << "- : Resta" << endl;
    cout << "* : Multiplicación" << endl;
    cout << "/ : División" << endl;
    cout << "^ : Potencia" << endl;
    cout << "r : Raíz cuadrada" << endl;
    cout << "l : Logaritmo base 10" << endl;
    cout << "n : Logaritmo natural" << endl;
    cout << "q : Salir" << endl;
    cout << "================================" << endl;
}

int main(){
    double num1, num2, resultado;
    char operacion;
    bool continuar = true;

    cout << "¡Bienvenido a la Calculadora Científica!" << endl;

    while (continuar)
    {
        mostrarMenu();
        cout << "\nIngrese la operación que desea realizar: ";
        cin >> operacion;

        switch (operacion)
        {
        case '+':
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
            resultado = suma(num1, num2);
            cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
            break;

        case '-':
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
            resultado = resta(num1, num2);
            cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
            break;

        case '*':
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
            resultado = multiplicacion(num1, num2);
            cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
            break;

        case '/':
            cout << "Ingrese el dividendo: ";
            cin >> num1;
            cout << "Ingrese el divisor: ";
            cin >> num2;
            resultado = division(num1, num2);
            if (num2 != 0)
            {
                cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
            }
            break;

        case '^':
            cout << "Ingrese la base: ";
            cin >> num1;
            cout << "Ingrese el exponente: ";
            cin >> num2;
            resultado = potencia(num1, num2);
            cout << "Resultado: " << num1 << " ^ " << num2 << " = " << resultado << endl;
            break;

        case 'r':
            cout << "Ingrese el número para calcular su raíz cuadrada: ";
            cin >> num1;
            resultado = raizCuadrada(num1);
            if (num1 >= 0)
            {
                cout << "Resultado: √" << num1 << " = " << resultado << endl;
            }
            break;

        case 'l':
            cout << "Ingrese el número para calcular su logaritmo base 10: ";
            cin >> num1;
            resultado = logaritmo(num1);
            if (num1 > 0)
            {
                cout << "Resultado: log₁₀(" << num1 << ") = " << resultado << endl;
            }
            break;

        case 'n':
            cout << "Ingrese el número para calcular su logaritmo natural: ";
            cin >> num1;
            resultado = logaritmoNatural(num1);
            if (num1 > 0)
            {
                cout << "Resultado: ln(" << num1 << ") = " << resultado << endl;
            }
            break;

        case 'q':
            cout << "¡Gracias por usar la calculadora! Hasta pronto." << endl;
            continuar = false;
            break;

        default:
            cout << "Operación no válida. Por favor, seleccione una opción del menú." << endl;
            break;
        }

        if (continuar)
        {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}
