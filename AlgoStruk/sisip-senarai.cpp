#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

typedef struct nod
{
	int data;
	struct nod *next;
}NOD,*NODPTR;

void CiptaSenarai(NODPTR *s)
{
	*s=NULL;
}
NODPTR NodBaru(int m)
{
	NODPTR n;
	n=(NODPTR)malloc (sizeof(NOD));
	if(n !=NULL)
	{
		n->data=m;
		n->next =NULL;
	}
	return n;
}

void SisipSenarai(NODPTR*s,NODPTR t,NODPTR p)
{
	if(p==NULL)
	{
		t->next=*s;
		*s=t;
	}
	else
	{
		t->next=p->next;
		p->next=t;
	}
}

void CetakSenarai(NODPTR s)
{
	NODPTR ps;
	for(ps=s;ps!=NULL;ps=ps->next)
		printf("%d --> ",ps->data);
	printf("NULL\n");
}

int main()
{
	NODPTR pel;
	NODPTR n;

	CiptaSenarai(&pel);
	n=NodBaru(55);
	SisipSenarai(&pel,n,NULL);
	n=NodBaru(75);
	SisipSenarai(&pel,n,NULL);
	CetakSenarai(pel);
	_getch();
}
 
