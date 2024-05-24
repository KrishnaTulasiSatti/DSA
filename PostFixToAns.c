/*1. Take a stack of integers st.
2. *take top=-1,i to run thr loop on postfix string
3. *start running a loop on given string 
   *    if(postfix[i] is a digit)
   *         push into the stack
   *     else(if postfix[i] is a operator)
   *           pop top 2 items from stack
   *          perform correspoding operation
   *           push the result back into the stack
   *input: 23*4*8/5*93/-
   *output: 12
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void convert(char *s){  //no need 
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			s[i]=s[i]-'0';
		}
	}
}
int get_priority(char ch)
{
	if(ch=='/' || ch=='*') return 3;
	else if(ch=='+' || ch=='-') return 2;
	else return 1;// or write a function to check alphabet or not
}
int func(int a, int b,char c)
{
	if (c=='/') return b/a;
	else if(c=='*') return a*b;
	else if(c=='-')  return b-a;
	else if(c=='+') return a+b;
}
void convert_postfix_to_ans(char *postfix){
	int st[101];
	int top=-1,i;
	for(i=0;i<strlen(postfix);i++)
	{
		int priority=get_priority(postfix[i]);// no need
		if(priority ==1) // or just if(isdigit(postfix[i]))
		{
			st[++top]=postfix[i];//postfix[i]-'0'
		}else{
			int a=st[top--];
			int b=st[top--];
			st[++top]=func(a,b,postfix[i]);
		}
	}
	printf("%d",st[top]);
}
int main()
{
	char postfix[101];//string will be given in infix form
	scanf("%s",postfix);
	convert(postfix);
	convert_postfix_to_ans(postfix);
	return 0;
}