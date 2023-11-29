#include <stdio.h>
#include <math.h>

int main(){
    int Meses;
    double Lucro;
    double Montante;
    double Juros;

    scanf("%d", &Meses);
    scanf("%lf", &Lucro);
    scanf("%lf", &Juros);

    for (int i = 1; i <= Meses; i++){
        Montante = Lucro * (1 + Juros) * ((pow(1 + Juros, i)) - 1) / Juros;
        printf("Montante ao fim do mes %d: R$ %.2lf\n", i, Montante);
    }

    return 0;
}