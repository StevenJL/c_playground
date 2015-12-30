#include <stdlib.h>
#include <string.h>
#define MAX_INPUT_LINE_LENGTH 100
#define MAX_NUM_STUDENTS 10
#define MAX_NUM_SCORES 20

// main functions
void generate_student_stats(void);
void generate_aggregate_student_stats(void);
void generate_single_student_stats(int current_student);
int generate_student_id(void);
void save_student_scores(char input[]);
void display_aggregate_student_stats(void);

// helper functions
float find_average(int current_student);
int find_min(int current_student);
int find_max(int current_student);

// Global vars
int student_scores[MAX_NUM_STUDENTS][MAX_NUM_SCORES];
int num_students;
int num_scores;

// debugging
void print_array(void)
{
  int current_student, current_score, indx;
  for (current_student = 0; current_student < num_students; current_student++)
  {
    indx = 0;
    current_score = student_scores[current_student][indx];
    while(current_score != -1)
    {
      printf("%d ", current_score);
      indx++;
      current_score = student_scores[current_student][indx];
    }
    printf("\n");
  }
  return;
}

int main(void)
{
  num_students = 0;

  char input[MAX_INPUT_LINE_LENGTH];
  while(fgets(input, sizeof(input), stdin)) 
  {
    save_student_scores(input); 
  }

  generate_student_stats();
  generate_aggregate_student_stats();

  return 0;
}

void generate_aggregate_student_stats(){
  float sum;
  int current_student, current_score, min, max, num_scores;
  min = 100;
  max = 0;
  sum = 0;
  num_scores = 0;

  for (current_student = 0; current_student < num_students; current_student++) 
  {
    int indx;
    indx = 0;
    current_score = student_scores[current_student][indx];
    while(current_score != -1)
    {
      if(current_score < min)
        min = current_score;
      if(current_score > max)
        max = current_score;
      sum = sum + (float)current_score; 
      num_scores++;
      indx++;
      current_score = student_scores[current_student][indx];
    }
  }

  printf("Average for all students: %.2f\n", (sum/(float)num_scores));
  printf("Min for all students: %d\n", min);
  printf("Max for all students: %d\n", max);


}

void generate_student_stats()
{
  int current_student;
  for (current_student = 0; current_student < num_students; current_student++) 
  {
    generate_single_student_stats(current_student);
  }
}

void generate_single_student_stats(int current_student)
{
  printf("Student id: %d\n", generate_student_id());
  printf("Student Average: %.2f\n", find_average(current_student));
  printf("Student Min: %d\n", find_min(current_student));
  printf("Student Max: %d\n", find_max(current_student));
  printf("\n");
   
  current_student++;
}

int find_min(int current_student)
{
  int min, indx, current_score;
  min = 100;
  indx = 0;
  while(1)
  {
    current_score = student_scores[current_student][indx];
    if(current_score == -1)
      break;
    if (current_score < min)
      min = current_score;
    indx++;
  }
  return min;
}

int find_max(int current_student)
{
  int max, indx, current_score;
  max = 0;
  indx = 0;
  while(1)
  {
    current_score = student_scores[current_student][indx];
    if(current_score == -1)
      break;
    if (current_score > max)
      max = current_score;
    indx++;
  }
  return max;
}

float find_average(int current_student)
{
  float total; 
  int indx, num_scores; 

  total = 0;
  indx = 0;
  num_scores = 0;
  while(1)
  {
    if(student_scores[current_student][indx] == -1)
      break;
    total = total + (float)student_scores[current_student][indx];
    num_scores++;
    indx++;
  }
  return total/((float)num_scores);
}

void save_student_scores(char input[])
{
  if(strcmp(input, "\n") == 0)
    return;

  int is_empty;
  int indx = 0;
  char * p;
  p = strtok(input, " ");
  while(p != NULL)
  {
    if(!isspace(*p))
    {
      student_scores[num_students][indx] = atoi(p);
      p = (strtok(NULL, " "));
      indx++;
    } else
      break;
  }
  student_scores[num_students][indx] = -1;
  num_students++;
  return;
}

int generate_student_id(void)
{
  static int id = 1000;
  return id++;
}

