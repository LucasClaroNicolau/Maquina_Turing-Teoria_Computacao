#include <iostream>
#include <stdio.h>
using namespace std;
void maquinasoma(string fita){
    int estado = -1, pos = 0;
    while(estado != 3){
        if(estado == -1){
            pos++;
            estado++;
            
        }
        else if(estado == 0){
            if(fita[pos] == '*'){
                pos++;
            }
            else{
                pos++;
                estado++;
            }
            
        }
        else if(estado == 1){
            if(fita[pos] == '*'){
                fita[pos] = '_';
                pos--;
                estado++;
            }
            else{
                fita[pos] = '*';
                pos++;
                estado++;
            }
            
        }
        else if(estado ==2){
            if(fita[pos] == '_'){
                fita[pos]='*';
                pos++;
                estado = 0 ;
            }
            else{
                estado=3;
            }
        }
     cout<<fita<<endl; 
     getchar();
    }
    cout<<"Fim"<<endl;
    getchar();
}

/*-----------------------------------------------------------------------------------------------------*/

string converte(int n){
    string s;
    for(int i=0;i<n;i++){
        s += '*';
    }
    cout<<s<<endl;
    return s;
}

/*-----------------------------------------------------------------------------------------------------*/

string monta(string a,string b){
    return ('>' + a + '_' + b);
}

/*-----------------------------------------------------------------------------------------------------*/
int soma(int v1, int v2){
    string fita = monta(converte(v1),converte(v2));
    Soma:maquinasoma(fita);
}

/*-----------------------------------------------------------------------------------------------------*/




