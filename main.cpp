#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "soma.h"
#include "sub.h"
#include "mult.h"
#include "div.h"

using namespace std;

int op(){
    system("clear");
    int op = 0;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"|      Maquina de Turing      |"<<endl;
    cout<<"|-----------------------------|"<<endl;
    cout<<"|      1 - Soma               |"<<endl;
    cout<<"|      2 - Subtração          |"<<endl;
    cout<<"|      3 - Multiplicação      |"<<endl;
    cout<<"|      4 - Divisão            |"<<endl;
    cout<<"|      0 - Sair               |"<<endl;
    cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cin>>op;
    system("clear");
    return op;
}

/*-----------------------------------------------------------------------------------------------------*/

int main()
{
    while(true){
        switch(op()){
        int v1,v2;
        case 1: cout<<"Insira a primeira parcela:";
            cin>>v1;
            cout<<"Insira a segunda parcela:";
            cin>>v2;
            soma(v1,v2);
        break;
        case 2: cout<<"Insira o minuendo:";
            cin>>v1;
            cout<<"Insira o subtraendo:";
            cin>>v2;
            sub(v1,v2);
        break;
        case 3: cout<<"Insira o fator:";
            cin>>v1;
            cout<<"Insira o multiplicador:";
            cin>>v2;
            mult(v1,v2);
        break;
        case 4: cout<<"Insira o dividendo:";
            cin>>v1;
            cout<<"Insira o divisor:";
            cin>>v2;
            divi(v1,v2);
        break;
        case 0: 
        return 0;
        }
    }
}
