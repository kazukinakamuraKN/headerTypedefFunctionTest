/*
 * header.h
 *
 *  Created on: 2018/08/31
 *      Author: hp
 */

#ifndef HEADER_H_
#define HEADER_H_

int add(int,int);
int sub(int,int);
typedef struct
{
	int no;
	char name[20];
	int(*func)(int,int);
}CAR;
CAR c;
CAR *p;

#endif /* HEADER_H_ */
