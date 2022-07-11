int size=5;
int in=0;
int out=0;
int buffer[5];
void main()
{
    int ch, item;
    void producer();
    void consumer();
    clrscr();
    while(1)
    {
    printf("1. Producer\n2. Consumer \n3. Exit \nChoice: ");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1:
	producer();
	break;
	case 2:
	consumer();

	break;
	case 3:
	exit(0);
	default:
	printf("enter proper choice: \n");
    }
    }
}
void producer()
{
	int pitem;
	
            if((in+1)%size==out)
	printf("Buffer is full\n");
	else
	{
	printf("Produce(Enter) item: \n");
	scanf("%d",&pitem);
	buffer[in]=pitem;
	in=(in+1)%size;
	}
}
void consumer()
{
	int citem;
	if(in==out)
	printf("Buffer Empty\n");
	else
	{
	     citem=buffer[out];
	     printf("\nItem consumed is %d\n", citem);
	     out=(out+1)%size;
	}
}
