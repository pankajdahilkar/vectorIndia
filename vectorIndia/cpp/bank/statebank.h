class State_Bank_Of_India
{
int accno;
string name;
float bal;
void Deposit(float);
int withdrawal(float);
void Balenq();
int verifypswd(const char *);
public:
State_Bank_Of_India();
~State_Bank_Of_India();
void menu();

int  transfer(int amt,State_Bank_Of_India &);
friend class Bank_Of_India;
};
