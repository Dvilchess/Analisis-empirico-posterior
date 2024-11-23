#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


void imprimir (int [], int n);
void shell (int [], int n);

int main()
{
    int total = 400001;
    int num[total];
    srand(time(NULL));
    for (int i = 1; i<=total;i++){
        num[i]= rand()%1001;
    }

    shell(num,total);
    imprimir(num,total);


}

void shell (int a[], int n){

    int ints,i,aux;
    bool band;

    ints = n;

    while (ints>1){
        ints =  (ints/2);
        band = true;

        while(band==true){
            band = false;
            i=0;
            while((i+ints)<= n){
                if (a[i]>a[i+ints]){
                    aux=a[i];
                    a[i]=a[i+ints];
                    a[i+ints]=aux;
                    band=true;

                }
                i++;
            }
        }
    }

}

void imprimir(int a[], int n){
    for(int i =0; i<n;i++)
        printf("%d\n", a[i]);
}
