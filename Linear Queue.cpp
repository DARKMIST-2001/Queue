#include<iostream>
using namespace std;
class linearqueue{
private:
    int front;
    int rear;
    int myarr[5];

    public:
        linearqueue()
        {
            front=-1;
            rear=-1;
            for(int i=0;i<5;i++)
            {
                myarr[i]=0;
            }
        }
        bool isEmpty()
        {
            if(front==-1 && rear==-1)
            {
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull()
        {
            if(rear==5-1)
            {
                return true;
            }
            else {
                return false;
            }
        }

        void enqueue(int x)
        {
           if(isFull())
           {
               cout<<"Queue is Full!"<<endl;
               return;
           }
           else if(isEmpty())
           {
               rear=0;
               front=0;
               myarr[rear]=x;
           }
           else{
            rear ++;
            myarr[rear]=x;
           }
        }

        int dequeue()
        {
            int y=0;
            if(isEmpty())
            {
                cout<<"Queue is Empty!"<<endl;
                return 0;
            }
           else if(front==rear)
            {
                y=myarr[front];
                myarr[front]=0;
                rear=-1;
                front=-1;
                return y;
            }
            else{
                y=myarr[front];
                myarr[front]=0;
                front++;
                return y;
            }
        }

        void Display()
        {
            for(int i=0;i<5;i++)
                    {
                        cout<<myarr[i]<<" ";
                    }

        }

};

int main()
{
     int x,y;
linearqueue q1;
    q1.enqueue(5);
    q1.enqueue(7);
    q1.enqueue(-3);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.Display();

return 0;

}

