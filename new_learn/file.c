#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

    FILE *fp,*cfp;
    char read_data[100];
    char write_data[100]="Hello C Programming language.Again I Started this Programming Language ";
    // file Open syntax
    fp= fopen("new_file.txt","r");

    if(fp==NULL){
        printf(" The File is not opened ");
        exit(0);
    }
    else{
        printf("file is exit\n");

        //file data read to console
        while(fgets(read_data,100,fp)!=NULL){
            printf("\n%s\n",read_data);
        }
        //closing the file
        fclose(fp);
        printf("\ndata successfully read\n");
    }

    // File Create syntax
    cfp=fopen("read.txt","w");
    if(cfp==NULL){
        printf(" The File is not opened ");
        exit(0);
    }
    else{
        printf("\nfile is created successfully\n");
        // programming  string to input in file you created
        if(strlen(write_data)>0){
            // writing in the file in using fputs()
            fputs(write_data,cfp);
            fputs("\n",cfp);
        }
        //close file
        fclose(cfp);

        printf("Data is written in file successfully.\n the file is now closed");
    }


    return 0;

}