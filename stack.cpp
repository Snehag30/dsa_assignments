#include<iostream>
using namespace std;

class stack{

char stack[30];
char str[30];
int top=-1;
public:
void push(char c)
{
    top++;
    stack[top]=c;

}

char pop()
{

    char a;
    a=stack[top];
    top--;
    return a;

}

bool isEmpty()
{
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull()
{
    if(top==30){
        return true;
    }
    else{
        return false;
    }
}

void accept()
{
    cout<<"Enter the equation : "<<endl;
    cin>>str;

    cout<<"Your equation is : "<<str<<endl;
}

void check()
{
    int flag;
    flag  = 0;
	for(int i=0;str[i]!=' ';i++)
	{

		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			push(str[i]);
		}
		else if(str[i] == ')')
		{
			if(pop() != '(')
				flag = 1;
		}
		else if(str[i] == '}')
		{
			if(pop() != '{')
				flag = 1;
		}
		else if(str[i] == ']')
		{
			if(pop() != '[')
				flag = 1;
		}
	}
	if(isEmpty() && flag == 0)
		cout<<"Equation is well paranthesised !!! "<<endl;
	else
		cout<<"Equation is not well paranthesised !!!"<<endl;

}

};

int main()
{
stack s;

	int ch;
	do
	{
		cout<<"\n********************** MENU ***********************"<<endl;
		cout<<"1. Enter String."<<endl;
		cout<<"2. Check whether the equation is well paranthesised or not."<<endl;
		cout<<"3. Exit."<<endl;
			cout<<"\n***********************************************"<<endl;

		cout<<"Enter Choice:"<<endl;
		cin>>ch;

		switch(ch)
		{
			case 1: s.accept();
				break;

			case 2: s.check();
				break;
		}
	}while(ch<3);
}

