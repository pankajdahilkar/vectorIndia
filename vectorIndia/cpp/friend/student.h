class student
{
static int cnt;
char id[10];
string name;
float marks[6];
public:
student();
~student();
void Display();
friend void faculty::UpLoadMarks(student &);
void UpLoadMarks(student &);
//friend class student;

void myfacultydetails(faculty f);
};
int student::cnt;
