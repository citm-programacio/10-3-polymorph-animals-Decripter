#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void habla()
    {
    };
};

class Gato : public Animal
{
public:
    void habla()
    {
        cout << "Miau " << endl;
    };
};

class Perro : public Animal
{
public:
    void habla()
    {
        cout << "Guau " << endl;
    };
};

int main()
{
    Gato* gat1 = new Gato;
    Perro* perr1 = new Perro;

    gat1->habla();
    perr1->habla();

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

