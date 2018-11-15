class Bank
{
int accno;
string name;
float bal;
void Deposit(float);
int withdrawal(float);
void Balenq();
int verifypswd(const char *);
public:
Bank();
~Bank();
void menu();
friend class shopping;
};

