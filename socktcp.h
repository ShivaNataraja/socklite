#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
/*
Variavél do socket
*/
int sock;
// Estrutura de dados
struct sockaddr_in dados;
// Ip do cliente ou servidor
char ip[100];
// Porta do cliente ou servidor
int porta;
// Servições para cliente
int con;
// Serviços restritos para servidor

// Função Bind();
int bin;
criar(){

sock = socket(AF_INET,SOCK_STREAM,0);
if(sock == -1){
printf("Erro na criação de socket ");


}

}
conecta(){
dados.sin_family = AF_INET;
dados.sin_port = htons(porta);
dados.sin_addr.s_addr = inet_addr(ip);
con = connect(sock, (struct sockaddr 
*)&dados, sizeof(struct sockaddr));
if(con < 0){
printf("Erro na conexão ") ;


}
}

escuta(int backlog){
listen(sock,backlog);
}

