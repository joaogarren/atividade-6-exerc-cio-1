#include <iostream>
using namespace std;

int main()
{
    int op;

    cout << "1. Batman" << endl;
    cout << "2. Mulher Maravilha" << endl;
    cout << "3. Superman" << endl;
    cout << "4. Flash" << endl;
    cout << "Digite sua opção: ";
    cin >> op;

    switch(op)
    {
        case 1:
            cout << "Batman,Habilidade:Alto preparo"<<endl;
            break;
            
        case 2:
            cout << "Mulher Maravilha,Habilidade:Resistencia"<<endl;
            break;
            
        case 3:
            cout << "Superman,Habilidade:Voo"<<endl;
            break;
            
        case 4:
            cout << "Flash,Habilidade:Super velocidade"<<endl;
            break;
        }
        
        return 0;
}