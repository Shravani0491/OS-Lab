#include<stdio.h>
#include<conio.h>
int mutex=1;
int full=0;
int empty=10;
int cnt=0;
int wait(int s)
{
while(s<=0);
s--;
return s;
}
int signal(int s)
{
s++;
return s;
}
void producer()
{
empty=wait(empty);
mutex=wait(mutex);
cnt++;
printf("Producer produces an item %d\n",cnt);
mutex=signal(mutex);
full=signal(full);
}
void consumer()
{

full=wait(full);
mutex=wait(mutex);
printf("Consumer consumes an item %d\n",cnt);
cnt--;
    mutex=signal(mutex);
empty=signal(empty);
}
void main()
{
int choice;
printf("1.Produce\n2.Consume\n3.Exit\n");
while(1)
{
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:if(empty==0)
{
printf("Buffer is full\n");
}
else{
producer();
}
break;
case 2:if(full==0)
{
printf("Buffer is empty\n");
}
else{
consumer();
}
break;
case 3:exit(0);
      break;
default:printf("Invalid choice\n");
}
}
getch();

}



