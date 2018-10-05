#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
void maquinasub(string fita){
    int estado = -1, pos = 0;
    while(estado != 8){
        cout<<pos;
        cout<<estado;
        if(estado == -1){
            pos++;
            estado++;
            
        }
        else if(estado == 0){
            if(fita[pos] == '*'){
                pos++;
            }
            else{
                estado = 1;
                pos++;
            }
        }
        else if(estado == 1){
            if(fita[pos] == '*'){
                pos++;
            }
            else{
                estado = 2;
                pos--;
            }
        }
        else if(estado ==2){
            if(fita[pos] == '*'){
                estado = 3;
                fita[pos] = '_';
                pos--;
            }
            else{
                estado = 6;
                pos--;
            }
        }
        else if(estado == 3){
            if(fita[pos] == '*'){
                pos--;
            }
            else{
                estado = 4;
                pos--;
            }
        }
        else if(estado == 4){
            if(fita[pos] == '*'){
                pos--;
            }
            else{
                estado = 5;
                pos++;
            }
        }
        else if(estado ==5){
            if(fita[pos] == '*'){
                estado = 0;
                fita[pos] = '_';
                pos++;
            }
        }
        else if(estado == 6){
            if(fita[pos] == '*'){
                pos--;
            }
            else if(fita[pos] == '_'){
                estado = 7;
                fita[pos] = '>';
                pos--;
            }
            else{
                estado = 8;
                pos++;
            }
        }
        else if(estado == 7){
            if(fita[pos] == '>'){
                fita[pos] = '_';
                pos++;
                estado = 8;
            }
            else{
                fita[pos] = '_';
                pos--;
            }
        }
     cout<<fita<<endl; 
     getchar();
    }
    fita.erase (std::remove(fita.begin(), fita.end(), '_'), fita.end());
    cout<<"Fim"<<endl;
    cout<<fita<<endl;
    getchar();
    return;
}

/*-----------------------------------------------------------------------------------------------------*/

string convertesub(int n){
    string s;
    for(int i=0;i<n;i++){
        s += '*';
    }
    cout<<s<<endl;
    return s;
}

/*-----------------------------------------------------------------------------------------------------*/

string montasub(string a,string b){
    return ('>' + a + '_' + b);
}

/*-----------------------------------------------------------------------------------------------------*/
void mensagemsub(){
    cout<<"Impossivel Subtrair, Primeiro numero é menor que o segundo!"<<endl;
    int i = getchar();;
    i = getchar();
}

/*-----------------------------------------------------------------------------------------------------*/
int sub(int v1, int v2){
    if(v2>v1){
        mensagemsub();
    }
    else{
        string fita = monta(converte(v1),converte(v2));
        Sub:maquinasub(fita);
    }
}

/*-----------------------------------------------------------------------------------------------------*/




