// Program treba izracunat ekponent broja be koristenja pow naredbe

#include<stdio.h>
int main()
{

    int br, exp, exp1;
    long int rezultat = 1;

    printf("Unesi broj i njegov ekponent:");
    scanf("%d%d",&br, &exp);

    exp1 = exp;   // spremamo originalnu vrijednost za daljnje koristenje.

    // isto kao while((--exp)!=-1)
    while(exp-- > 0)
    {
        rezultat *= br; // pomnozi br sam sasobom exp puta
    }

    printf("\n Konacno rjesenje je %d^%d = %ld", br, exp1, rezultat);
    return 0;
}
