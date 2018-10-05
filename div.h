#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
void maquinadivi(string fita){
    int estado = -1, pos = 0;
    while(estado != 21){
        cout<<estado<<endl;
        cout<<pos<<endl;
        if(estado == -1){
            pos++;
            estado++;
            
        }
        else if(estado == 0){
            if(fita[pos] == '*'){
                estado = 1;
                fita[pos] = '$';
                pos++;
            }
        }
        else if(estado == 1){
          if(fita[pos] == '*'){
              pos++;
          }
          else{
              estado = 2;
              pos++;
          }
        }
        else if(estado ==2){
            if(fita[pos] == '*'){
                pos++;
            }
            else{
                estado = 3;
                pos--;
            }
        }
        else if(estado == 3){
            if(fita[pos] == '*'){
                estado = 4;
                fita[pos] = '$';
                pos--;
            }
        }
        else if(estado == 4){
            if(fita[pos] == '*'){
                estado = 5;
                pos--;
            }
            else{
                estado = 10;
                pos++;
            }
        }
        else if(estado ==5){
            if(fita[pos] == '*'){
                pos--;
            }
            else if(fita[pos] == '$'){
                estado = 6;
                pos++;
            }
            else{
                pos--;
            }
        }
        else if(estado == 6){
            if(fita[pos] == '*'){
                estado = 7;
                fita[pos] = '$';
                pos++;
            }
            else{
                estado = 12;
                pos++;
            }
        }
        else if(estado == 7){
            if(fita[pos] == '*'){
                pos++;
            }
            else if(fita[pos] == '$'){
                estado = 3;
                pos--;
            }
            else{
                estado = 8;
                pos++;
            }
        }
        else if(estado == 8){
            if(fita[pos] == '*'){
                pos++;
            }
            else if(fita[pos] == '$'){
                estado = 3;
                pos--;
            }
            else{
                estado = 3; 
                pos--;
            }
        }
        else if(estado == 9){
            if(fita[pos] == '_'){
                estado = 10;
                pos++;
            }
        }
        else if(estado ==10){
            if(fita[pos] == '$'){
                estado = 10;
                fita[pos] = '*';
                pos++;
            }
            else{
                estado = 11;
                pos++;
            }
        }
        else if(estado == 11){
            if(fita[pos] == '*'){
                pos++;
            }
            else{
                estado = 5;
                fita[pos] = '*';
                pos--;
            }
        }
        else if(estado == 12){
            if(fita[pos] == '*'){
                pos++;
            }
            else if(fita[pos] == '$'){
                estado = 13;
                pos++;
            }
            else{
                estado = 20;
                fita[pos] = '>';
                pos--;
            }
        }
        else if(estado ==13){
           if(fita[pos] == '$'){
               pos++;
           }
           else{
               estado = 14;
               pos++;
           }
        }
        else if(estado == 14){
          if(fita[pos] == '*'){
              pos++;
          }
          else{
              estado = 15;
              pos++;
          }
        }
        else if(estado == 15){
            if(fita[pos] == '*'){
                pos++;
            }
            else{
                estado = 16;
                fita[pos] = '*';
                pos--;
            }
        }
        else if(estado == 16){
            if(fita[pos] == '>'){
                estado = 18;
                pos--;
            }
            else if(fita[pos] == '$'){
                estado = 17;
                pos--;
            }
            else{
                pos--;
            }
        }
        else if(estado == 17){
            if(fita[pos] == '*'){
                estado = 18;
                pos++;
            }
            else{
                pos--;
            }
        }
        else if(estado == 18){
            if(fita[pos] == '$'){
                estado = 19;
                fita[pos] = '*';
                pos++;
            }
        }
        else if(estado == 19){
           if(fita[pos] == '$'){
               estado = 13;
               pos++;
           }
           else{
               estado = 20;
               fita[pos] = '>';
               pos--;
           }
        }
        else if(estado == 20){
            if(fita[pos] == '>'){
                estado = 21;
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
    int p=0;
    for(int i=0; i< fita.size();i++){
        if(fita[i]=='>'){
            break;
        }
        p++;
    }
    fita.erase (fita.begin(), fita.begin()+p);
    cout<<"Fim"<<endl;
    cout<<fita<<endl;
    getchar();
    return;
}

/*-----------------------------------------------------------------------------------------------------*/

string convertedivi(int n){
    string s;
    for(int i=0;i<n;i++){
        s += '*';
    }
    cout<<s<<endl;
    return s;
}

/*-----------------------------------------------------------------------------------------------------*/

string montadivi(string a,string b){
    string ret = '>' + a + '_' + b; 
    for(int i = 0; i <=a.size(); i++){
        ret += '_';
    }
    return ret;
}

/*-----------------------------------------------------------------------------------------------------*/

void mensagemdiv(){
    cout<<"Impossivel Dividir, Primeiro numero é menor que o segundo!"<<endl;
    int i = getchar();;
    i = getchar();
}

/*-----------------------------------------------------------------------------------------------------*/

void mensagemdivzero(){
    cout<<"Impossivel Dividir por 0(mesmo eu achando que deveria da o valor que está sendo dividido)"<<endl;
    int i = getchar();;
    i = getchar();
}

/*-----------------------------------------------------------------------------------------------------*/
int divi(int v1, int v2){
    if(v2>v1){
        mensagemdiv();
    }
    else if(v2 == 0){
        mensagemdivzero();
    }
    else{
        string fita = montadivi(converte(v1),converte(v2));
        Divi:maquinadivi(fita);
    }
}
/*-----------------------------------------------------------------------------------------------------*/




