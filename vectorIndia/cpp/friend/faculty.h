class faculty
{
static int cnt;
int id;
string name;
string subject;
public:
faculty();
~faculty();
void Display();
void UpLoadMarks(student &);
friend class student;
};
int faculty::cnt;
