//Wap to implement Queue using array
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
# define max 50

 //class Definition
 class queue
  {
    public:
    int data[max];
    int front,rear;
    queue()
     {
       front=-1;
       rear=-1;
     }

    //Function Definition for push operation
    void add()
     {
       int x;
       cout<<"\n\t\tEnter the data :-";
       cin>>x;
       if(rear==max-1)
	{
	 cout<<"\n\tQueue Overflow";

	}
       else
	{  front=0;
	  rear++;
	  data[rear]=x;
	}
      cout<<"\n\t\tData Added Successfully";
    }

 //Function Definition for deletion in Queue
  void del()
   {
     if((rear==-1)&&(front==-1))
      {
       cout<<"\n\t\tQueue Underflow";

      }
     else
      {
	    int x=data[front];
	    front++;
       cout<<"\n\t\tElement Deleted successfully";
       cout<<"\n\t\tDeleted Element is:-"<<x;
      }
   }

 //Function Definition for traversal
 void traversal()
  {
    if((rear==-1)&&(front==-1))
     {
      cout<<"\n\t\tList is Empty";
     }
    else
     {

      for(int i=front;i<=rear;i++)

	cout<<"\n\t\tElements in Stack are :-- "<<data[i];

     }
  }
 };

 //Main Function
 void main()
  {
    queue ob;         //Object Declaration
    int ch;
    do
     {
       cout<<"\n\t\t\t******************QUEUE*****************";
       cout<<"\n\t\t1.Add";
       cout<<"\n\t\t2.Delete";
       cout<<"\n\t\t3.Traversal";
       cout<<"\n\t\t4.Exit";
       cout<<"\n\t\tEnter your choice :-";
       cin>>ch;
       switch(ch)
	{
	  case 1:clrscr();
		 ob.add();
		 getch();
		 clrscr();
		 break;

	  case 2:clrscr();
		 ob.del();
		 getch();
		 clrscr();
		 break;

	  case 3:clrscr();
		 ob.traversal();
		 getch();
		 clrscr();
		 break;

	  case 4:clrscr();
		 exit(1);
		 break;

	  default:clrscr();
		  cout<<"\n\t\tInvalid Choice";
		  getch();
		  clrscr();
		  break;
	}
     }while(ch!=4);
  getch();
 }