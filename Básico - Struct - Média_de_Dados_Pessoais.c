#include <stdio.h>
#include <locale.h>


typedef struct pessoa{
float peso,altura;
int idade;
}tpessoa;
void estatistica(tpessoa pessoas[], int idinicial,int idfinal,int it){
setlocale(LC_ALL, "Portuguese");
 int j=0;
 int cont = 0;
 float imc = 0;
 float alt = 0;
 float pes = 0;
 for(j=0;j<=it;j++){
 if (pessoas[j].idade >= idinicial && pessoas[j].idade <= idfinal){
 pes = pes + pessoas[j].peso;
 alt = alt + pessoas[j].altura;
 imc = imc + (pessoas[j].peso / (pessoas[j].altura * pessoas[j].altura));
 cont++;
 }


 }
 printf("\n número de pessoas nessas idades = %d",cont);
 printf("\n Média de peso = %f", pes/cont);
 printf("\n Média de altura = %f", alt/cont);
 printf("\n imc médio = %f", imc);

}
int main(){
 tpessoa pessoas[3];
 int i = 0;
 do{
 printf("Digite a idade da pessoa %d\n", i+1);
 scanf("%i",&pessoas[i].idade);
 if(pessoas[i].idade == -1)
 break;
 printf("digite a altura da pessoa %d\n",i+1);
 scanf("%f",&pessoas[i].altura);
 printf("digite o peso da pessoa %d\n",i+1);
 scanf("%f",&pessoas[i].peso);
 i++;
 }while(i<3 || pessoas[i].idade == -1);
 int id1,id2;
 printf("Qual intervalo de idades ?\n");
 scanf("%d %d",&id1,&id2);
 estatistica(pessoas, id1, id2, i-1);
}

