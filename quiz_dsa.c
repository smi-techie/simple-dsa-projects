#include <stdio.h>  

#define MAX_QUESTIONS 5  

typedef struct {  
    char question[100];  
    char options[4][50];  
    char answer;  
} QuizQuestion;  

void displayQuestion(QuizQuestion q) {  
    printf("%s\n", q.question);  
    for (int i = 0; i < 4; i++) {  
        printf("%c. %s\n", 'A' + i, q.options[i]);  
    }  
}  

int main() {  
    QuizQuestion quiz[MAX_QUESTIONS] = {  
        {  
            "What is the capital of France?",  
            {"Paris", "London", "Berlin", "Madrid"},  
            'A'  
        },  
        {  
            "Which planet is known as the Red Planet?",  
            {"Earth", "Mars", "Jupiter", "Saturn"},  
            'B'  
        },  
        {  
            "What is the largest ocean on Earth?",  
            {"Atlantic Ocean", "Indian Ocean", "Arctic Ocean", "Pacific Ocean"},  
            'D'  
        },  
        {  
            "Who wrote 'Romeo and Juliet'?",  
            {"Mark Twain", "Charles Dickens", "William Shakespeare", "Jane Austen"},  
            'C'  
        },  
        {  
            "What is the smallest prime number?",  
            {"0", "1", "2", "3"},  
            'C'  
        }  
    };  

    int score = 0;  
    char answer;  

    printf("Welcome to the Quiz Game!\n\n");  

    for (int i = 0; i < MAX_QUESTIONS; i++) {  
        displayQuestion(quiz[i]);  
        
        printf("Your answer (A/B/C/D): ");  
        scanf(" %c", &answer); // Space before %c to ignore any newline character  

        if (answer == quiz[i].answer) {  
            printf("Correct!\n\n");  
            score++;  
        } else {  
            printf("Wrong! The correct answer was %c.\n\n", quiz[i].answer);  
        }  
    }  

    printf("Your final score: %d out of %d\n", score, MAX_QUESTIONS);  
    printf("Thank you for playing!\n");  

    return 0;  
}

