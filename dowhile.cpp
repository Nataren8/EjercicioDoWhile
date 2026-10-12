#include <iostream>

using namespace std;

int main(){

    int opcion = 0;
    float deposito= 0.0;
    float retiro = 0.0;
    float saldo = 1000.0;

    do
    {
        cout<<"----Menu----"<<endl;
        cout<<"(1) Consultar saldo"<<endl;
        cout<<"(2) Depositar dinero"<<endl;
        cout<<"(3) Retirar dinero"<<endl;
        cout<<"(4) Salir"<<endl;

        cout<<"Ingrese la opcion que desea realizar: "<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            cout<<"Saldo en cuenta: "<< saldo<<endl;
                break;
        

        case 2:

            cout<<"¿Cuanto dinero desea depositar?: "<<endl;
            cin>>deposito;
            if (deposito < 1)
            {
                cout<<"no se puede depositar negativamente, deposite al menos 1$"<<endl;
            }else{

            saldo = saldo + deposito;
            deposito = 0.0;
            cout<<"dinero depositado"<<endl;
            }
            break;

        case 3:
        cout<<"¿Cuanto dinero desea retirar de su cuenta?: "<<endl;
        cin>>retiro;
        if (saldo < retiro)
        {
            cout<<"No se puede retirar mas de lo que tiene en su cuenta bancaria"<<endl;
        }else if (retiro < 1)
        {
            cout<<"no se aceptan numeros negativos, ingrese en positivo lo que necesita retirar";
        }
        else{
            saldo = saldo - retiro;
            retiro = 0.0;
            cout<<"retiro exitoso"<<endl;
        }
    
            break;

        case 4:
            cout<<"saliendo del programa......";
        break;

        default:
            break;
        }
        if (opcion > 4)
        {
            cout<<"ingrese una opcion valida del menu"<<endl;
        }
        
    } while (opcion != 4 );

    return 0;
    
}