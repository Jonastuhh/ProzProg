#include <stdio.h>

int main (){
    
int a=1,n=9,b,m=n;
    while (n>0) {
        b=-n+2;                 //b wird hochgezählt, nur Werte über 1 werden angezeigt
        while (m>0) {
            
            if (b<1) {
                printf("  ");
            }
            
            else
                printf("%d ",b);
            m=m-1;
            b=b+1;              //b wird hochgezählt bis es die Zeilennummer erreicht hat
            
        }
        b=b-2;                  //Mitte erreicht, b wird einmalig erniedriegt
        
        while (b>0) {
            printf("%d ",b);
            b=b-1;
            
        }
        printf("\n");           //Zeile wird abgeschlossen
        n=n-1;                  //wichtig für die Anzahl der Leerzeichen und die Anzahl der Zeichen
        m=n+a;                  //ergibt immer Anfangs-n
        a=a+1;                  //zählt die aktuelle Zeile
    }
    
}
