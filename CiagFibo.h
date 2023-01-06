#pragma once
#include <iostream>
#include <chrono>
#include <vector>

std::vector<unsigned long long> v_fibo = { 1, 1 };


unsigned long long FiboReku(int ile)
{
	if (ile <= 0)
	{
		return 0;
	}

	if (ile == 1 || ile == 2)
	{
		//std::cout << 1 << std::endl;
		return 1;

	}
	unsigned long long fib = FiboReku(ile - 1) + FiboReku(ile - 2);
	//std::cout << fib << std::endl;
	return  fib;
}

unsigned long long FiboReku2(int ile)
{
	if (ile <= 0)
	{
		return 0;
	}

	unsigned long long fib;
	if (ile == 1 || ile == 2)
	{
		return v_fibo[0];
	}

	if (ile >= v_fibo.size())
	{
		fib = FiboReku2(ile - 1) + FiboReku2(ile - 2);
		v_fibo.push_back(fib);
		return  fib;
	}

	if (ile < v_fibo.size())
	{
		fib = v_fibo[ile - 2] + v_fibo[ile - 3];
		return  fib;
	}
}

unsigned long long FiboInter(int ile)
{
	if (ile <= 0)
	{
		return 0;
	}
	unsigned long long n = 0;
	unsigned long long n1 = 1;
	unsigned long long n2 = 1;
	if (ile == 1 || ile == 2)
	{
		return 1;
	}
	for (size_t i = 2; i < ile; i++)
	{
		n = n1 + n2;
		n2 = n1;
		n1 = n;
	}

	return n;
}

