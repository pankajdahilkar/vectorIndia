class Bank_Of_India
{
int accno;
string name;
float bal;
void Deposit(float);
int withdrawal(float);
void Balenq();
int verifypswd(const char *);
public:
Bank_Of_India();
~Bank_Of_India();
//void menu(State_Bank_Of_India &);
friend class State_Bank_Of_India;
void menu(State_Bank_Of_India &);
};

