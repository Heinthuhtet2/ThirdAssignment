#include <stdio.h>
#include <string.h>

int main(){
    int index=0;
    char* ptr;
    char myarr1[10]={'H','E','I','N'};

    char myarr2[10]= {'T','H','U'};

    char myarr3[10]={'H','T','E','T'};

    char totalArary[100];


    for(int i =0 ; myarr1[i] != '\0' ; i++){
        totalArary[i] = myarr1[i];
        index++;
    }
    int realindex = index - 1;
    printf("myarr1 data: %s\n",totalArary);
    printf("last Index number: %d\n\n",realindex);
    int real = realindex + 1;



    for(int i =0 ; myarr2[i] != '\0' ; i++){
        totalArary[real] = myarr2[i];
        real++;
    }
    int realindex1 = real - 1;
    printf("myarr1+2 data: %s\n",totalArary);
    printf("last Index number: %d\n\n",realindex1);
    int real1 = realindex1 + 1;



    for(int i =0 ; myarr3[i] != '\0' ; i++){
        totalArary[real1] = myarr3[i];
        real1++;
    }
    int realindex2 = real1 - 1;
    printf("myarr1+2+3 data: %s\n",totalArary);
    printf("last Index number: %d\n\n",realindex2);
    int real2 = realindex2 + 1;


  
    for(int i=0 ; i<real2 ; i++){

        if( totalArary[i] == 'T'){

            printf("We found 'T' at index %d \n",i);

        }

    }

    ptr = &totalArary[0];
    printf("\nAddress of pointer: %d\n",ptr);
    printf("Value of pointer: %d\n\n",*ptr);

    printf("Address of pointer: %d\n",ptr+2);
    printf("Value of pointer: %d\n",*(ptr+2));


    return 0;
}
