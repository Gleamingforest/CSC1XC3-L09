/** 
   * @file student.h
   * @author Zihang Guo
   * @date 03/31/2023
   * @brief header file for student.c
   */
typedef struct _student 
{ 
  
  char first_name[50]; /**<char datatype>*/
  char last_name[50]; /**<char datatype>*/
  char id[11]; /**<char datatype>*/
  double *grades; /**<double datatype>*/
  int num_grades; /**<int datatype>*/
} Student;
/**  \brief adds a student's grade
   * @param student the specific student to which the grade is added
   * @param grade the grade being added
   * @return N/A 
   * @see struct _student
   */
void add_grade(Student *student, double grade);
/**  \brief calculates the average grade for a specific student
   * @param student the specific student to which the grade is added
   * @return average grade of the student
   * @see struct _student 
   */
double average(Student *student);
/**  \brief prints first and last name of student as well as their average grade
  * and student ID
   * @param student the specific student whose name is printed
   * @return N/A as this is a void function
   * @see struct _student
   */
void print_student(Student *student);
/**  \brief generates new student as well as a new random student ID based on their grade
   * @param grades the grades of the student being generated
   * @return new student name and ID
   * @see struct _student
   */
Student* generate_random_student(int grades); 
