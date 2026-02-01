/*
	Desenvolvido por: Mikael Shumacher
	Data: 08/07/2025
	Versão: 0.0.1
 	Jogar poker via linha de comando no seu terminal.
*/
//Bibliotecas:
#include<stdio.h>
#include <raylib.h>


void init(){
	printf("=======================================================\n");
	printf("\tPoker feito em linguagem C\n");
	printf("\tDe: Mikael Shumacher\n");
	printf("=======================================================\n");

}


//Função principal: 
int main(){
	init();
	InitWindow(1080, 720, "Poker in C");
	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		// Processar logica do jogo

		//Desenhar na tela
		BeginDrawing();

		// Encerrar os desenhos
		EndDrawing();

	}
}
