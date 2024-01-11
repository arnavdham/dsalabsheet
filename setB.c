#include "set.h"
int answer_checker(char ans[])
{
	int score=0;
	char ansA[10]={B,B,B,B,B,B,B,B,B,B};
	for (int i=0;i<10;i++)
	{
		if (ans[i]==ansA[i])
		{
        score+=4;
		}
		if (ans[i]==N)
		{
        score+=0;
		}
		else
		{
        score-=1;
		}
		if (score<0)
			{return 0;}
		else
			{return score;}
	}
}