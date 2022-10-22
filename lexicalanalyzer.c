#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void scaner();
int letter(char);
int digit(char);


char prog[80], token[8];
char ch;
int syn, p, m, n, sum;
char *rwtab[6] = {
  "begin", "if", "then", "while", "do", "end"
};

int main(int argc, char const *argv[])
{
	p = 0;
	printf("\n please input string:\n");
	do
	{
		ch = getchar();
		prog[p++] = ch;
	}while(ch!='#');
	p = 0;
	do
	{	for (n = 0; n < 8; n++)
	{
		token[n] = NULL;
	}
	ch = prog[p++];
	while(ch == ' ')
		ch = prog[p++];
	if (letter(ch))
	{
		m = 0;
		while(letter(ch) || digit(ch))
		{
			token[m] = ch;
			m++;
			ch = prog[p++];
		}
		token[m++] = '\0';
		p--;
		syn = 10;
		for (n = 0; n < 6; n++)
		{
			if (strcmp(token, rwtab[n]) == 0)
				{
					syn = n + 1;
					break;
				}	
		}
	}
	else if(digit(ch))
	{
		sum = 0;
		while(digit(ch))
		{
			sum = sum * 10 + ch - '0';
			ch = prog[p++];
		}
		p--;
		syn = 11;
	}
	else
		switch(ch)
	{
		case'<':
			m = 0;
			token[m++] = ch;
			ch = prog[p++];
			if (ch == '>')
			{
				syn = 21;
				token[m++] = ch;
			}
			else if(ch == '=')
			{
				syn = 22;
				token[m++] = ch;
			}
			else
			{
				syn = 20;
				p--;
			}
			break;

		case'>':
			m = 0;
			token[m++] = ch;
			ch = prog[p++];
			if (ch == '=')
			{
				syn = 24;
				token[m++] = ch;
			}
			else
			{
				syn = 23;
				p--;
			}
			break;
		case':':
			m = 0;
			token[m++] = ch;
			ch = prog[p++];
			if (ch == '=')
			{
				syn = 18;
				token[m++] = ch;
			}
			else
			{
				syn = 17;
				p--;
			}
			break;
		case'+': syn = 13; token[0] = ch; break;
		case'-': syn = 14; token[0] = ch; break;
		case'*': syn = 15; token[0] = ch; break;
		case'/': syn = 16; token[0] = ch; break;
		case';': syn = 26; token[0] = ch; break;
		case'(': syn = 27; token[0] = ch; break;
		case')': syn = 28; token[0] = ch; break;
		case'#': syn = 0;  token[0] = ch; break;
		default:
			syn = -1;

	}
		switch(syn)
			{
				case 11: printf("(%2d, %8d)\n", syn, sum); break;
				case -1: printf("input error\n"); break;
				default: printf("(%2d, %8s)\n", syn, token);
			}

	}while(syn != 0);
		
	system("pause");
	return 0;
}

/*
void scaner()
{
	
}
*/



int letter(char cha)
{
	if(cha >= 'a' && cha <= 'z')
		return 1;
	else
		return 0;
}

int digit(char cha)
{
	if(cha >= '0' && cha <= '9')
		return 1;
	else
		return 0;
}
