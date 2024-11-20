#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void habla()
    {
        cout << "Xx" << endl;
    };
};

class Gato : public Animal
{
public:
    void habla() override
    {
        cout << "Miau " << endl;
    };
};

class Perro : public Animal
{
public:
    void habla() override
    {
        cout << "Guau " << endl;
    };
};

int main()
{
    Animal* gat1 = new Gato;
    Animal* perr1 = new Perro;

    gat1->habla();
    perr1->habla();

    delete gat1;
    delete perr1;
}

/*
========================================================================================================================
  MMP""MM""YMM `7MM"""Mq.  `YMM'   `MM'    `7MMF'  `7MMF'      db      `7MM"""Mq.  `7MM"""Yb.   `7MM"""YMM  `7MM"""Mq.
  P'   MM   `7   MM   `MM.   VMA   ,V        MM      MM       ;MM:       MM   `MM.   MM    `Yb.   MM    `7    MM   `MM.
	   MM        MM   ,M9     VMA ,V         MM      MM      ,V^MM.      MM   ,M9    MM     `Mb   MM   d      MM   ,M9
	   MM        MMmmdM9       VMMP          MMmmmmmmMM     ,M  `MM      MMmmdM9     MM      MM   MMmmMM      MMmmdM9
	   MM        MM  YM.        MM           MM      MM     AbmmmqMA     MM  YM.     MM     ,MP   MM   Y  ,   MM  YM.
	   MM        MM   `Mb.      MM           MM      MM    A'     VML    MM   `Mb.   MM    ,dP'   MM     ,M   MM   `Mb.
	 .JMML.    .JMML. .JMM.   .JMML.       .JMML.  .JMML..AMA.   .AMMA..JMML. .JMM..JMMmmmdP'   .JMMmmmmMMM .JMML. .JMM.
==========================================================================================================================
*/

