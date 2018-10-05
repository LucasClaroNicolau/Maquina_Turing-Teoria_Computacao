#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
void maquinamult(string fita){
    int estado = -1, pos = 0;
    while(estado != 12){
        cout<<estado<<endl;
        cout<<pos<<endl;
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
                fita[pos] = '&';
                pos--;
            }
            else if(fita[pos] == '&'){
                estado = 2;
                pos--;
            }
            else{
                estado = 10;
                pos++;
            }
        }
        else if(estado == 3){
            if(fita[pos] == '*'){
                pos--;
            }
            else if(fita[pos] == '&'){
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
            else if(fita[pos] == '_'){
                estado = 10;
                pos++;
            }
            else if(fita[pos] == '&'){
                estado = 3;
                pos--;
            }
            else{
                estado = 5;
                pos++;
            }
        }
        else if(estado ==5){
            if(fita[pos] == '*'){
                estado = 6;
                fita[pos] = '$';
                pos++;
            }
            else{
                estado = 9;
                pos--;
            }
        }
        else if(estado == 6){
            if(fita[pos] == '*'){
                pos++;
            }
            else{
                estado = 7;
                pos++;
            }
        }
        else if(estado == 7){
            if(fita[pos] == '_'){
                estado = 8;
                pos++;
            }
            else{
                pos++;
            }
        }
        else if(estado == 8){
            if(fita[pos] == '*'){
                pos++;
            }
            else{
                estado = 3;
                fita[pos] = '*';
                pos--;
            }
        }
        else if(estado == 9){
            if(fita[pos] == '>'){
                estado = 0;
                pos++;
            }
            else{
                estado = 9;
                fita[pos] = '*';
                pos--;
            }
        }
        else if(estado ==10){
            if(fita[pos] == '_'){
                estado = 11;
                fita[pos] = '>';
                pos--;
            }
            else{
                pos++;
            }
        }
        else if(estado == 11){
            if(fita[pos] == '>'){
                estado = 12;
                fita[pos] = '_';
                pos++;
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

string convertemulti(int n){
    string s;
    for(int i=0;i<n;i++){
        s += '*';
    }
    cout<<s<<endl;
    return s;
}

/*-----------------------------------------------------------------------------------------------------*/

string montamult(string a,string b){
    string ret = '>' + a + '_' + b; 
    for(int i = 0; i <= (a.size()*b.size()); i++){
        ret += '_';
    }
    return ret;
}


/*-----------------------------------------------------------------------------------------------------*/
int mult(int v1, int v2){
    string fita = montamult(converte(v1),converte(v2));
    Mult:maquinamult(fita);
    
}
/*-----------------------------------------------------------------------------------------------------*/




