#include <stdio.h>
#include "mathFunct.h"


//Struct für komplexe Zahlen anlegen
struct complex {

double a;
double b;

};

int main(){
    
    //array mit drei complexen zahlen anlegen  0.Zahl = Ergebniss   1.Zahl = 1.Zahl   2.Zahl = 2.Zahl
    struct complex zahl[2];

    //temporäre Variablen für die Eingabe anlegen
    double temp;
    int eingabe;
    double resulta;
    double resultb;

    //eingabe von Nutzer anforden und werte in die arrays der complexen Zahlen schreiben
    printf("Eine Komplexe Zahl hat immer zwei Faktoren: a + bi\nGebe einen Wert fuer a, fuer die erste Zahl ein.\n");
    scanf("%lf",&temp);
    zahl[1].a = temp;
    printf("Gebe jetzt einen Wert fuer b, fuer die erste Zahl ein.\n");
    scanf("%lf",&temp);
    zahl[1].b = temp;
    printf("Gebe einen Wert fuer a, fuer die zweite Zahl ein.\n");
    scanf("%lf",&temp);
    zahl[2].a = temp;
    printf("Gebe jetzt einen Wert fuer b, fuer die zweite Zahl ein.\n");
    scanf("%lf",&temp);
    zahl[2].b = temp;
    
    printf("1. Zahl: %.2lf + %.2lfi\n",zahl[1].a,zahl[1].b);
    printf("2. Zahl: %.2lf + %.2lfi\n",zahl[2].a,zahl[2].b);


    //Auswahl der durchzuführenden Rechenoperation
    printf("Was moechtest du mit diesen zwei Zahlen machen? Moechtest du die Zahlen:\n1.Multiplizieren\n2.Dividieren\n3.Addieren\n4.Subtrahieren\n");
    scanf("%d",&eingabe);

    if (eingabe == 1){

        printf("Du moechtest die Zahlen also Multiplizieren.\n");
        multi(zahl[1].a,zahl[1].b,zahl[2].a,zahl[2].b,&resulta,&resultb);
        zahl[0].a = resulta;
        zahl[0].b = resultb;
        printf("Hier ist dein Ergebniss: %.2lf + %.2lfi\n",zahl[0].a,zahl[0].b);
    }
    else if (eingabe == 2){

        printf("Du moechtest die Zahlen also Dividieren.\n");
        div(zahl[1].a,zahl[1].b,zahl[2].a,zahl[2].b,&resulta,&resultb);
        zahl[0].a = resulta;
        zahl[0].b = resultb;
        printf("Hier ist dein Ergebniss: %.2lf + %.2lfi\n",zahl[0].a,zahl[0].b);
    }
    else if (eingabe == 3){

        printf("Du moechtest die Zahlen also Addieren.\n");
        add(zahl[1].a,zahl[1].b,zahl[2].a,zahl[2].b,&resulta,&resultb);
        zahl[0].a = resulta;
        zahl[0].b = resultb;
        printf("Hier ist dein Ergebniss: %.2lf + %.2lfi\n",zahl[0].a,zahl[0].b);
    }
    else if (eingabe == 4){

        printf("Du moechtest die Zahlen also Subtrahieren.\n");
        sub(zahl[1].a,zahl[1].b,zahl[2].a,zahl[2].b,&resulta,&resultb);
        zahl[0].a = resulta;
        zahl[0].b = resultb;
        printf("Hier ist dein Ergebniss: %.2lf + %.2lfi\n",zahl[0].a,zahl[0].b);
    }
    else
    {
        printf("Ungueltige Eingabe, bitte wähle aus einer der vier oben genannten Moeglichkeiten.\n(Du musst ihre jeweilige Nummer eintippen)\n");
    }
    






}