#include<iostream>
#define MAX 5
using namespace std;
template <class qele>
class Queue
{
	qele Q[MAX];
	int front,rear;
	public:
	Queue();
	~Queue();
	void ENQ(qele);
	qele DEQ();
	int isFull();
	int isEmpty();
	void operation();

};

	template <class qele>
Queue <qele> :: Queue()
{
	front=-1;
	rear=-1;
}

	template <class qele>
Queue <qele> ::~ Queue()
{
}


	template <class qele>
void  Queue <qele> :: ENQ(qele data)
{
	if(front==-1)
		front=0;
	rear++;
	Q[rear]=data;
}

	template <class qele>
qele Queue<qele> :: DEQ()
{
	qele temp;
	temp = Q[front++];
	if(front == rear+1)
	{
		front=-1;
		rear=-1;
	}
	return temp;
}

	template <class qele>
int Queue<qele> :: isFull()
{
	if(rear ==MAX-1)
		return 1;
	return 0;
}

	template <class qele>
int Queue<qele> :: isEmpty()
{
	if(front ==-1)
		return 1;
	return 0;
}

	template <class qele>
void Queue<qele> :: operation()
{
	int choice;
	qele data;
	while(1)
	{
		cout<<"1.Enq 2.Deq 3.Exit "<<endl;
		cout<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"Enter data =";
			       cin>>data;
			       if(isFull())
				       cout<<"Queue is full"<<endl;
			       else 
				       ENQ(data);	
			       break;
			case 2 :if(isEmpty())
					cout<<"Queue is Empty"<<endl;
				else 
					cout<<"Data = "<<DEQ()<<endl;
				break;
			case 3 : return;
			default : cout<<"Enter valid choice"<<endl;
		}

	}
}

int main()
{
	Queue <int> Iobj;
	Iobj.operation();

	Queue <char> Cobj;
	Cobj.operation();

	Queue <string> Sobj;
	Sobj.operation();

	Queue <float> Fobj;
	Fobj.operation();


}
