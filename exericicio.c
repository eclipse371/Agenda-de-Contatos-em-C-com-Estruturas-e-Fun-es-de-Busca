#include <stdio.h>
#include <string.h>
#define T 2
typedef struct{
	char rua[100], cidade[100];
	int numero;
}endereco;
typedef struct{
	char telefone[100];
}telefone;
typedef struct{
	int dia, mes, ano;
}data;
typedef struct{
	char nome[100], email[100];
	endereco e;
	telefone t;
	data d;
}pessoa;


void preenche(pessoa a[]){
int i;
for(i=0 ; i<T ; i++){
	printf("Digite o nome: ");
	fflush(stdin);
	gets(a[i].nome);
	printf("Digite o e-mail: ");
	fflush(stdin);
	gets(a[i].email);
	printf("Digite o endereco(rua - numero - cidade): ");
	fflush(stdin);
	gets(a[i].e.rua);
    scanf("%d", &a[i].e.numero);
	fflush(stdin);
	gets(a[i].e.cidade);
    printf("Digite o telefone(00)00000-0000: ");
    fflush(stdin);
    gets(a[i].t.telefone);
    printf("Digite a data de aniversario(dia - mes - ano): ");
    scanf("%d%d%d", &a[i].d.dia,&a[i].d.mes,&a[i].d.ano);
}
}
void exibe(pessoa a[]){
	int i;
	for(i=0 ; i<T ; i++){
	printf("Nome:%s\nE-mail:%s\nEndereco:\nRua:%s\nNumero:%d\nCidade:%s\nTelefone:%s\nData:%.2d/%.2d/%d\n",a[i].nome,a[i].email,a[i].e.rua,a[i].e.numero,a[i].e.cidade,a[i].t.telefone,a[i].d.dia,a[i].d.mes,a[i].d.ano);
	}
}
void buscanome(pessoa a[]){
int i, achou;
char n[100];
printf("Digite o nome do contato que voce deseja buscar: ");
fflush(stdin);
gets(n);
for(i=0 ; i<T ; i++){
	if(strcmp(a[i].nome,n)==0){
	printf("\nNome:%s\nE-mail:%s\nEndereco:\nRua:%s\nNumero:%d\nCidade:%s\nTelefone:%s\nData:%.2d/%.2d/%2d\n",a[i].nome,a[i].email,a[i].e.rua,a[i].e.numero,a[i].e.cidade,a[i].t.telefone,a[i].d.dia,a[i].d.mes,a[i].d.ano);
    achou=1;
	}
}
if(achou==0){
	printf("Nao foi encontrado nenhum contato com este nome\n");
	
}
achou=0;
}
void buscames(pessoa a[]){
	int i, m, achou;
	printf("Digite o mes: ");
	scanf("%d", &m);
	for(i=0 ; i<T; i++){
		if(a[i].d.mes==m){
		printf("\nNome:%s\nE-mail:%s\nEndereco:\nRua:%s\nNumero:%d\nCidade:%s\nTelefone:%s\nData:%.2d/%.2d/%2d\n",a[i].nome,a[i].email,a[i].e.rua,a[i].e.numero,a[i].e.cidade,a[i].t.telefone,a[i].d.dia,a[i].d.mes,a[i].d.ano);
	    achou=1;
		}
	}
	if(achou==0){
		printf("Nao exista um contato que faca aniversario nesse mes");
	}
	achou=0;
}
void buscamesdia(pessoa a[]){
	int i, d, achou, m;
	printf("Digite o mes: ");
	scanf("%d", &m);
	printf("Digite o dia: ");
	scanf("%d", &d);
	for(i=0 ; i<T; i++){
		if(a[i].d.mes==m && a[i].d.dia==d){
		printf("\nNome:%s\nE-mail:%s\nEndereco:\nRua:%s\nNumero:%d\nCidade:%s\nTelefone:%s\nData:%.2d/%.2d/%d\n",a[i].nome,a[i].email,a[i].e.rua,a[i].e.numero,a[i].e.cidade,a[i].t.telefone,a[i].d.dia,a[i].d.mes,a[i].d.ano);
	    achou=1;
		}
	}
	if(achou==0){
		printf("Nao exista um contato que faca aniversario no dia e mes informado");
	}
	achou=0;
}

main(){
	pessoa a[T];
	int i, op, opp;
	printf("Deseja iniciar o programa ?\n1-sim\n2-nao: ");
	scanf("%d", &op);
	while(op==1 && opp!=6){
    printf("===MENU===\n1-Incluir contatos\n2-Mostrar contatos cadastrados\n3-Buscar um contato por nome\n4-Buscar um contato pelo mes de aniversario\n5-Buscar contatos pelo dia e mes de aniversario\n6-sair");
    scanf("%d", &opp);
    if(opp==1){
    	preenche(a);
    }else
    if(opp==2){
    	exibe(a);
    }else
    if(opp==3){
    	buscanome(a);
    }else
    if(opp==4){
    	buscames(a);
    }else
    if(opp==5){
    	buscamesdia(a);
}
    
	}
	printf("Programa finalizado");
	
	
}
	

	
	
	
	
	
	
	
	
	
	
	
	








