/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quiz.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinwoole <indibooks@naver.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:37:05 by jinwoole          #+#    #+#             */
/*   Updated: 2022/06/21 15:17:52 by jinwoole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
//정답을 보려면 make

//quiz1 : c의 값은 무엇일까?
void    quiz1(void)
{
    unsigned char a;
    unsigned char b;
    unsigned char c;

    a = 6;
    b = 13;
    c = a & b;
    printf("Quiz1 : %d\n", c);
}

//quiz2 : c의 값은 무엇일까?
void    quiz2(void)
{
    unsigned char a;
    unsigned char b;
    unsigned char c;

    a = 3;
    b = 12;
    c = a | b;
    printf("Quiz3 : %d\n", c);
}

//quiz3 : c의 값은 무엇일까?
void    quiz3(void)
{
    unsigned char a;
    unsigned char b;
    unsigned char c;

    a = 9;
    b = 5;
    c = a ^ b;
    printf("Quiz3 : %d\n", c);
}

//quiz4 : c의 값은 무엇일까?
void    quiz4(void)
{
    unsigned char a;
    unsigned char b;
    unsigned char c;

    a = 15;
    c = a << 4;
    printf("Quiz3 : %d\n", c);
}

//에 뭐
void    quiz5(void)
{
    unsigned char a;
    unsigned char c;

    a = 15;
    c = a << 6;
    printf("Quiz3 : %d\n", c);
}

//a와 b의 값은 무엇인가?
void    bonus1(void)
{
    unsigned char a;
    unsigned int b;

    a = 15;
    b = 15;
    a <<= 7;
    b <<= 7;
    printf("Bonus1 : a : %d , b = %d\n", a, b);
}

//i와 k의 값은 무엇인가? *msb
void    bonus2(void)
{
    char i;
    unsigned char k;

    i = 15;
    i <<= 4;

    k = 15;
    k <<= 4;
    printf("Bonus2 : i : %d, k : %d\n", i, k);
}

int main(void)
{
    quiz1();
    quiz2();
    quiz3();
    quiz4();
    quiz5();
    bonus1();
    bonus2();
}