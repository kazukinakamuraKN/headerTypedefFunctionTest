/*
 * main.c
 *
 *  Created on: 2018/08/31
 *      Author: hp
 */


#include <stdio.h>
#include "header.h"
#include <string.h>

int main()
{
	p = &c;
	c.no = 1;
	c.func = add;
	printf("%d\n",p->func(1,5));
	strcpy(c.name,"car");
	printf("%d%s\n",p->no,p->name);
	c.func = sub;
	printf("%d\n",c.func(10,5));
	return(0);
}
