#include <stdio.h>

typedef struct People{
    char * name ;
    int age;
}People;


typedef People* getPeople(char* name,int age);


People* cqy(char* name,int age);
void asx(getPeople *g);
int main(){
    asx(cqy);
    return 1;
}


void asx(getPeople *g){
    People *p =  g("cqy",27);
    printf("name:%s,age : %d",p->name,p->age);
}


People* cqy(char* name,int age){
    static People people = {
        "caiqiyuan",
        age
    };
    return &people;
}