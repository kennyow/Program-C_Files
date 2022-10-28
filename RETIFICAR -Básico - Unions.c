typedef enum {SOLTEIRO, CASADO, DIVORCIADO} tEstadoCivil;
typedef struct {
 char rua[30];
 char numero[5];
 char cidade[20];
 char uf[3];
 char cep[10];
 } tEndereco;
typedef struct {
 short dia, mes, ano;
 } tData;
typedef struct {
 char nome[30];
 tEndereco endereco;
 tEstadoCivil estadoCivil;
 union {
 char nomeDoConjuge[30];
 short moraSozinho;
 tData dataDoDivorcio;
 } complemento;
} tEmpregado;
tEmpregado empregado;
if (empregado.estadoCivil == CASADO) {
 printf("%s", empregado.complemento.nomeDoConjuge);
} else if (empregado.estadoCivil == SOLTEIRO) {
 if (empregado.complemento.moraSozinho)
 printf("Mora sozinho");
 else
 printf("Nao mora sozinho");
} else if (empregado.estadoCivil == DIVORCIADO) {
 printf("%d", empregado.complemento.dataDoDivorcio.dia);
 printf("%d", empregado.complemento.dataDoDivorcio.mes);
 printf("%d", empregado.complemento.dataDoDivorcio.ano);
}
