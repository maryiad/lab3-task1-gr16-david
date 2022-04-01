/* main.c */
#include <stdio.h>

/* Source file with structure
* StudentData
*/

struct StudentData{
  char *stu_name;
  int stu_id;
  int stu_age;
};
int main ()
{
  /* student is the variable of stucture StudentData*/
  struct StudentData student;
  /* Assinging the values to StudentData*/
  student.stu_name = "Maryia";
  student.stu_id = 123456;
  student.stu_age = 45;

  /* Displaying the values of struct memeber */
	printf ("Hello, %s!", student.stu_name);
  printf("\nStudent Id is: %d", student.stu_id);
  printf("\nStudent Age is: %d", student.stu_age);
	printf ("\nGoodbye!");
  return 0;
}