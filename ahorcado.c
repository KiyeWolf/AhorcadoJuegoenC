#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void Llamarahorcado(int);
void ahorcado1();
void ahorcado2();
void ahorcado3();
void ahorcado5();
void ahorcado6();
void ahorcado7();
void ahorcado8();
int Bienvenida();
int Verificador_de_Numero();
int Azar(int);
void Guionizar(char[],char[]);
void MostrarPal(char[]);
int Verificarycambiar(char[],char,char[],int, char[]);
void Mayus(char[]);
int main()
{

    int opcion,dificultad, vidas=8, gano=0;
    //Hasta 29 caracteres la palabra
    char letra, palabra[30]= {""}, palabraescondida[30], usadas[30]= {""};
    char ListaFacil[10][30] = {"CASA","PERRO","FLOR","LUNA","SOL","ARBOL","LIBRO","MESA","SILLA","AGUA"};
    char ListaIntermedia[10][30]= {"AMIGO","FAMILIA","ESCUELA","TRABAJO","CIUDAD","PAIS","COMIDA","BEBIDA","DEPORTE","MUSICA"};
    char ListaDificil[10][30]= {"HIPOPOTAMO","MURCIELAGO","ORNITORRINCO","ELECTROENCEFALOGRAMA","ESTERNOCLEIDOMASTOIDEO","OTORRINOLARINGOLOGO","PSICOPOMPO","QUIROPRACTICO","SUBCONSCIENTE","IDIOSINCRASIA"};
    srand(time(NULL));
    opcion = Verificador_de_Numero();


    if (opcion>=1 && opcion<=3)
    {
        dificultad=opcion;
        if (dificultad==1)
        {
            strcat(palabra,ListaFacil[Azar(10)]);
        }
        else
        {
            if (dificultad==2)
            {
                strcat(palabra,ListaIntermedia[Azar(10)]);
            }
            else
            {
                strcat(palabra,ListaDificil[Azar(10)]);
            }
        }

    }
    else
    {
        system("cls");
        Beep(1000,200);

        printf("\n---------------------------------------------------------------\n");
        printf("\n\nPorfavor Ingresa la palabra a elegir Minimo 3 y hasta 29 caracteres:\t\t");
        fflush(stdin);
        gets(palabra);
        Mayus(palabra);
    }
    Guionizar(palabraescondida,palabra);
    //Inicio del juego

        do
        {
            system("cls");
            Beep(500,250);
            printf("\n");
            MostrarPal(palabraescondida);
            printf("\n");
            Llamarahorcado(vidas);
            printf("\n\t A B C D E F G H\n\tI J K L M O P Q R\n\t S T U V X Y Z");
            printf("\nLetras ya usadas:%s",usadas);
            printf("\n");
            Beep(500,250);
            printf("\nIngresa tu letra: ");
            fflush(stdin);
            scanf("%c", &letra);
            letra=toupper(letra);

            vidas = Verificarycambiar(palabra,letra,palabraescondida, vidas, usadas);
            if ((strcasecmp(palabra,palabraescondida))==0)
            {
                gano=1;
            }
        }
        while(vidas!=0 && gano==0);

        if (gano)
        {
            system("cls");
            system("color 20");
            Beep(100,500);
            system("color 2");
            printf("\n---------------------------------------------------------------\n");
            printf("\n\n\t GANASTE!\n");
            printf("\n---------------------------------------------------------------\n\n");
            Beep(150,200);
            system("color 20");
            Beep(50,500);
            system("color 2");
            Beep(150,200);
            Beep(300,150);
            system("pause");
            Beep(150,200);
            printf("\n---------------------------------------------------------------\n");
            printf("\n\n\t Vidas restantes: %d\n\n", vidas);
            system("pause");
            Beep(150,200);
            printf("\n---------------------------------------------------------------\n");
            printf("La palabra era %s tal cual como supiste.\n\n\n\t\tFIN DEL PROGRAMA\n", palabra);

        }
        else
        {
            system("cls");
            system("color 40");
            printf("\n\n");
            ahorcado8();
            Beep(800,100);
            system("color 2");
            printf("\n---------------------------------------------------------------\n");
            printf("\n\tOH NO! Una lastima.\n");
            printf("\n---------------------------------------------------------------\n\n");
            Beep(800,100);
            system("pause");
            printf("\n---------------------------------------------------------------\n\n");
            Beep(150,200);
            printf("La palabra era %s. Quizas la proxima vez puedas ganar\n\n", palabra);
            system("pause");
            printf("\n---------------------------------------------------------------\n");
            Beep(150,200);
            printf("\n\n\n\t\tFIN DEL PROGRAMA\n");
        }

}
int Bienvenida()
{
    int opcion;
    system("color 2");
    Beep(1000,200);
    printf("\n---------------------------------------------------------------\n");
    printf("\n\t\t\t\Hola");
    printf("\n\t Bienvenido al Juego del Ahorcado.\n");
    printf("\n---------------------------------------------------------------\n");
    Beep(500,200);
    Beep(1200,100);
    system("pause");
    Beep(500,200);
    system("cls");
    printf("\n\tPara comenzar elige una de las siguientes opciones:\n\n");
    printf("\t 1.\t FACIL \n\n\t 2.\t INTERMEDIO\n\n\t 3.\t DIFICIL\n\n\t 4.\t ELEGIR UNA PALABRA: MODO 1 VERSUS 1\n\n");
    printf("Ingresa el numero correspondiente de la opcion a seleccionar:\t ");
    scanf("%d", &opcion);
    return opcion;
}
int Verificador_de_Numero()
{
    int opcion;
    opcion = Bienvenida();
    do
    {
        if ((opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4))
        {
            system("cls");
            system("color 4");
            printf("\n---------------------------------------------------------------\n");
            printf("\n  X Por favor ingrese una de las opciones solicitadas\n");
            printf("\n---------------------------------------------------------------\n");
            Beep(800,100);
            system("pause");
            system("cls");
            opcion = Bienvenida();
        }
    }
    while((opcion!=1) && (opcion!=2) && (opcion!=3) && (opcion!=4));
    return opcion;
}
void ahorcado2()
{
    printf("                          ***************\n"
           "                          *             *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                **************************\n"
           "                *                        *\n"
           "                **************************\n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n");

}
void ahorcado1()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n                **************************\n                *                        *\n                **************************\n\n\n\n\n\n\n                                                            ");
}
void ahorcado3()
{
    printf("                          ***************\n"
           "                        *****           *\n"
           "                          *             *\n"
           "                          *             *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                                        *\n"
           "                **************************\n"
           "                *                        *\n"
           "                **************************\n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n");

}
void ahorcado4()
{
    printf("                                                             "
           "                                                             "
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                          ***************                    \n"
           "                        *****           *                    \n"
           "                          *             *                    \n"
           "                          *             *                    \n"
           "                        * * *           *                    \n"
           "                       *     *          *                    \n"
           "                       *     *          *                    \n"
           "                        *   *           *                    \n"
           "                         ***            *                    \n"
           "                                        *                    \n"
           "                                        *                    \n"
           "                                        *                    \n"
           "                                        *                    \n"
           "                                        *                    \n"
           "                                        *                    \n"
           "                                        *                    \n"
           "                                        *                    \n"
           "                                        *                    \n"
           "                **************************                   \n"
           "                *                        *                   \n"
           "                **************************                   \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n"
           "                                                             \n");
}
void ahorcado5()
{
    printf("                                                            "
           "                                                            "
           "                                                            \n"
           "                                                            \n"
           "                                                            \n"
           "                          ***************                  \n"
           "                        *****           *                  \n"
           "                          *             *                  \n"
           "                          *             *                  \n"
           "                        * * *           *                  \n"
           "                       *     *          *                  \n"
           "                       *     *          *                  \n"
           "                        *   *           *                  \n"
           "                         ***            *                  \n"
           "                          *             *                  \n"
           "                          *             *                  \n"
           "                          *             *                  \n"
           "                          *             *                  \n"
           "                          *             *                  \n"
           "                                        *                  \n"
           "                                        *                  \n"
           "                                        *                  \n"
           "                                        *                  \n"
           "                **************************                 \n"
           "                *                        *                 \n"
           "                **************************                 \n");

}
//ref
void ahorcado6()
{
    printf("                                                            "
           "                                                            "
           "                                                            \n"
           "                                                            \n"
           "                                                            \n"
           "                          ***************                  \n"
           "                        *****           *                  \n"
           "                          *             *                  \n"
           "                          *             *                  \n"
           "                        * * *           *                  \n"
           "                       *     *          *                  \n"
           "                       *     *          *                  \n"
           "                        *   *           *                  \n"
           "                         ***            *                  \n"
           "                          *             *                  \n"
           "                        * * *           *                  \n"
           "                       *  *  *          *                  \n"
           "                     **   *   **        *                  \n"
           "                          *             *                  \n"
           "                                        *                  \n"
           "                                        *                  \n"
           "                                        *                  \n"
           "                                        *                  \n"
           "                **************************                 \n"
           "                *                        *                 \n"
           "                **************************                 \n");

}
void ahorcado7()
{
    printf("                                                            "
           "                                                            "
           "                                                            \n"
           "                                                            \n"
           "                                                            \n"
           "                          ***************                  \n"
           "                        *****           *                  \n"
           "                          *             *                  \n"
           "                          *             *                  \n"
           "                        * * *           *                  \n"
           "                       *     *          *                  \n"
           "                       *     *          *                  \n"
           "                        *   *           *                  \n"
           "                         ***            *                  \n"
           "                          *             *                  \n"
           "                        * * *           *                  \n"
           "                       *  *  *          *                  \n"
           "                     **   *   **        *                  \n"
           "                          *             *                  \n"
           "                         * *            *                  \n"
           "                        *   *           *                  \n"
           "                       *     *          *                  \n"
           "                      *       *         *                  \n"
           "                **************************                 \n"
           "                *                        *                 \n"
           "                **************************                 \n");

}
void ahorcado8()
{
    printf("                                                            "
           "                                                            \n"
           "                                                            \n"
           "                                                            \n"
           "                                                            \n"
           "                          ***************                  \n"
           "                        *****           *                  \n"
           "                          *             *                  \n"
           "                          *             *                  \n"
           "                        * * *           *                  \n"
           "                       * X X *          *                  \n"
           "                       *     *          *                  \n"
           "                        * - *           *                  \n"
           "                         ***            *                  \n"
           "                          *             *                  \n"
           "                        * * *           *                  \n"
           "                       *  *  *          *                  \n"
           "                     **   *   **        *                  \n"
           "                          *             *                  \n"
           "                         * *            *                  \n"
           "                        *   *           *                  \n"
           "                       *     *          *                  \n"
           "                      *       *         *                  \n"
           "                **************************                 \n"
           "                *                        *                 \n"
           "                **************************                 \n");

}

int Azar(int cantidad)
{
    int indice = rand() % cantidad;
    return indice;
}
void Guionizar(char ptapada[], char  p[])
{
    int tamano, i;
    tamano=strlen(p);
    for (i=0; i<tamano; i++)
    {
        ptapada[i]='_';
    }
}
void MostrarPal(char p[])
{
    int i, tam;
    tam=strlen(p);
    printf("\t\t");
    for(i=0; i<tam; i++)
    {
        printf("%c ",p[i]);
    }
}

int Verificarycambiar(char pal[], char letra, char palguion[], int vidasantes, char letrasmalas[])
{
    int i, tam,flag=0,vidasahora;
    char caracter[2];//una sola letra y nulo
    tam = strlen(pal);

    for (i=0; i<tam; i++)
    {
        if (pal[i]==letra)
        {
            palguion[i]=letra;
            flag=1;

        }
    }
    if (flag==0)
    {
        caracter[0]=letra;
        strcat(letrasmalas,caracter);
        strcat(letrasmalas,", ");
        vidasahora=vidasantes-1;
    }
    else
    {
        vidasahora=vidasantes;
    }
    return vidasahora;
}
void Llamarahorcado(int cual)
{
    switch(cual)
    {
    case 7:
        ahorcado1();
        break;
    case 6:
        ahorcado2();
        break;
    case 5:
        ahorcado3();
        break;
    case 4:
        ahorcado4();
        break;
    case 3:
        ahorcado5();
        break;
    case 2:
        ahorcado6();
        break;
    case 1:
        ahorcado7();
        break;
    case 0:
        ahorcado8();
        break;
    default:
        printf("");
    }
}
void Mayus(char palabra[])
{
    int len,i;

    len = strlen(palabra);
    for(i=0;i<len;i++)
    {
        palabra[i]=toupper(palabra[i]);
    }
}
