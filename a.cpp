#include <iostream>
#include <cstring>

using namespace std;

struct pacientes{
   string nome;
   char sexo;
   float altura;
   float peso;
};

int main(){ 
      int tam;
      cin >> tam;
      pacientes* dados = new pacientes[tam];
         for(int i=0; i<tam; i++){
            cin >> dados[i].nome >> dados[i].sexo >> dados[i].altura >> dados[i].peso;
         }
   //pessoa mais pesada
      float maior=dados[0].peso;
         for(int i=0; i<tam; i++){
            if (dados[i].peso > maior){
               maior=dados[i].peso;
            }
         }
         for(int i=0; i<tam; i++){
            if (dados[i].peso == maior){
               cout << dados[i].nome;
               cout << endl;
            }
         }
   //peso ideal
         for(int i=0; i<tam; i++){
            float pesoidealH=0;
            float pesoidealM=0;
            if(dados[i].sexo == 'H'){
               pesoidealH = (72.7*dados[i].altura)-58;
            }
            if(dados[i].sexo == 'M'){
               pesoidealM = (62.1*dados[i].altura)-44.7;
            }
            if(dados[i].peso>pesoidealH and dados[i].sexo == 'H'){
               cout << dados[i].nome << " " << (pesoidealH-dados[i].peso);
               cout << endl;
            }
            if(dados[i].peso>pesoidealM and dados[i].sexo == 'M'){
               cout << dados[i].nome << " " << (pesoidealM-dados[i].peso);
               cout << endl;
            }
         }
      delete[] dados;
  return 0;
    }