#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUESTION_LENGTH 256
#define MAX_ANSWER_LENGTH 256


void trim_newline(char *str){
    size_t len=strlen(str);
    if(len>0 && str[len-1]=='\n'){
        str[len-1]='\0';
    }
}

int main(){
    FILE *qFile=fopen("question.txt","r");
    FILE *aFile =fopen("answer.txt","r");


    if (qFile == NULL || aFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char question[MAX_QUESTION_LENGTH];
    char answer[MAX_ANSWER_LENGTH];
    char userAnswer[MAX_ANSWER_LENGTH];
    int score = 0;
    int totalQuestions = 0;

    while (fgets(question, sizeof(question), qFile) && fgets(answer, sizeof(answer), aFile)) {
        trim_newline(question);
        trim_newline(answer);

        printf("%s\nYour answer: ", question);
        fgets(userAnswer, sizeof(userAnswer), stdin);
        trim_newline(userAnswer);

        if (strcmp(answer, userAnswer) == 0) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong. The correct answer is %s.\n", answer);
        }
        totalQuestions++;
    }

    fclose(qFile);
    fclose(aFile);
     printf("\nQuiz over! Your score is %d out of %d.\n", score, totalQuestions);
    return 0;


}