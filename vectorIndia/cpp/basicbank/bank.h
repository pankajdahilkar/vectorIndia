class Bank
{
int accno;
string name;
float bal;
public:void Deposit(float);
int withdrawal(float);
void Balenq();
int verifypswd(const char *);
Bank();
~Bank();
void menu();
friend class shopping;
};
