#include<stdio.h>
#include<stdlib.h>

int main()
{
    int CPT,CPPC,TPT,TCPPC,RCT;
    printf("Ingrese la cantidad de pasajes en clase turista: ");
    scanf("%d",&CPT);
    printf("Ingrese la cantidad de pasajes en primera clase: ");
    scanf("%d",&CPPC);
    TPT=8800*CPT;
    TCPPC=(8800+8800*30/100)*CPPC;
    RCT=TPT+TCPPC;
    printf("La recaudacion total del vuelo es: $%d", RCT);

    return 0;
}
