#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>

// Chatbot basico usando linguagem C

// Comandos
// Qual o seu nome?
// Qual o nome do instrutor?
// Qual o melhor navegador?
// Que horas é agora?
// Qual a melhor musica?
// Qual a sua idade? (Ainda em teste)
// Tchau

char usuario[];
int main(int argc, char* argv[])
{   //system("exit"); tesando
    printf("Ola, sou assistente virtual do Diogo. Como posso ajudar?\n");
    gets(usuario);
    while(1)
    {
        printf("Ainda nao aprendi isso :(, tente outra coisa: \n ");
        gets(usuario);
        if (strcmp(usuario,"Tchau")==0)
        {
            //system("exit"); testando
            printf("Tchauzinho, ate a proxima\n");
            break;
        }
        else if(strcmp(usuario, "Qual o seu nome?")==0)
        {
            printf("Meu nome e Jarvis\n");
        }
        else if(strcmp(usuario, "Qual o nome do instrutor?")==0)
        {
            printf("Darlan, garoto de programa\n");
        }
        else if(strcmp(usuario, "Qual o melhor navegador?")==0)
        {
            printf("Aqui esta mestre, google chrome\n");
            system("start chrome");
        }
        else if(strcmp(usuario,"Que horas e agora?")==0)
        {
         time_t s, val =1 ;
         struct tm* current_time;
         s = time(NULL);
         current_time = localtime(&s);
         printf("Minha idade e %02d horas:%02d minutos:%02d segundos\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
        }
        else if(strcmp(usuario,"Qual a melhor musica?")==0)
        {
            printf("A melhor musica ja sera reproduzida mestre\n");
            system("start https://www.youtube.com/watch?v=o1tj2zJ2Wvg&ab_channel=GunsN%27RosesGunsN%27RosesCanaloficialdoartista");
        }
        else if(strcmp(usuario, "Qual a sua idade?")==0)
        {
            float tempo;
            time_t t_ini, t_fim;
            int i, j;
            t_ini = time(NULL);
            for(i=0; i < 50000; i++)
            {
                for(j = 0; j < 50000; j++);
            }
            t_fim = time(NULL);

            tempo + difftime (t_fim, t_ini);

            printf("Eu tenho %f\n de idade", tempo);
        }
        else if(strcmp(usuario, "")==0){
            printf("Ainda nao aprendi isso :(");
        }
    }

    return 0;
}
