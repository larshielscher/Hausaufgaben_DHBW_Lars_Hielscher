#include <stdio.h>
#include <string.h>

struct student
{
    //name
    char name[50];
    //anschrift
    char stadt[50];
    char strasse[100];
    int hausnummer;
    int plz;
    //größe
    double groesse;
    
    
};

void printStruct(struct student person){
    printf("person1.name = %s\n", person.name);
    printf("person1.stadt = %s\n", person.stadt);
    printf("person1.straße = %s\n", person.strasse);
    printf("person1.hausnummer = %d\n", person.hausnummer);
    printf("person1.plz = %d\n", person.plz);
    printf("person1.groesse = %lf\n", person.groesse);

}

int main(){

    //create obj
    
    struct student studenten[2];


    //fill with data
    strcpy(studenten[1].name,"Lars");
    strcpy(studenten[1].stadt,"Leutenbach");
    strcpy(studenten[1].strasse,"Seestraße");
    studenten[1].hausnummer = 12;
    studenten[1].plz = 71397;
    studenten[1].groesse = 1.80;

    strcpy(studenten[2].name,"Paul");
    strcpy(studenten[2].stadt,"Winnenden");
    strcpy(studenten[2].strasse,"Am Buchenbach");
    studenten[2].hausnummer = 3;
    studenten[2].plz = 71364;
    studenten[2].groesse = 1.70;
    
    
    for (int i = 1; i < 3; i++){
        printStruct(studenten[i]);
    }
    
}