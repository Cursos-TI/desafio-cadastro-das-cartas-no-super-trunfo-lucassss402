 #include <stdio.h>

 int main (){
    char Estado;
    char Codigodacarta [01];
    char Nomedacidade[3];
    int População;
    float Areaemkm²;
    float Pib;
    int Numerodepontosturisticos;

    printf("Digite o Estado\n");
    scanf ("%s", &Estado);

    printf("Codigo da carta\n");
    scanf ("%s", &Codigodacarta);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &Nomedacidade);

    printf("Qual a População?\n");
    scanf ("%d", &População);

    printf("Qual a area da cidade em km²?\n");
    scanf("%f", &Areaemkm²);

    printf("Qual o Pib?\n");
    scanf("%f", &Pib);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &Numerodepontosturisticos);

   return 0;
   

   
   }

