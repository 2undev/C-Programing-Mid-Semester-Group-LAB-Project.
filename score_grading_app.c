#include <stdio.h>

int main(){
  int studentScore;  // variable to store the student score.
 
  char studentGrade; // variable that will display the student grade on the console
  
  
  printf("Enter your score: "); // Prompts the user to enter a score.

  
  scanf("%d", &studentScore); // Reads the score entered into the input from the user.
 
  
    // Checks the studentScore against the specified ranges of conditions and assigns a grade.
    if (studentScore >= 80 && studentScore <= 100) {
        studentGrade = 'A';
    } else if (studentScore >= 70 && studentScore <= 79) {
        studentGrade = 'B';
    } else if (studentScore >= 60 && studentScore <= 69) {
        studentGrade = 'C';
    } else if (studentScore >= 50 && studentScore <= 59) {
        studentGrade = 'D';
    } else if (studentScore >= 0 && studentScore <= 49) {
        studentGrade = 'F';
    } else {
        printf("Invalid score\n");
        return 1;
    }

    printf("The grade is: %c\n", studentGrade);

    return 0;
}
