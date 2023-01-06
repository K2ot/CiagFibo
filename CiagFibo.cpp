#include "CiagFibo.h"

int main()
{

	int ileLicz = -1;
	
	auto begin = std::chrono::high_resolution_clock::now();
	std::cout << FiboReku2(ileLicz) << std::endl;
	auto end = std::chrono::high_resolution_clock::now();
	auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
	std::cout << "Czas liczenia FiboReku2 : " << elapsed.count() * 1e-9 << " sekundy.\n";

	std::cout  << std::endl;
	begin = std::chrono::high_resolution_clock::now();
	std::cout << FiboInter(ileLicz) << std::endl;
	end = std::chrono::high_resolution_clock::now();
	elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
	std::cout << "Czas liczenia FiboInter : " << elapsed.count() * 1e-9 << " sekundy.\n";

	//std::cout << v_fibo.size() << std::endl;
	//std::cout << FiboReku(ileLicz) << std::endl;
	//std::cout << FiboReku2(ileLicz) << std::endl;



	return 0;
}

//w jaki sposób przekazywać poprzednie wartości aby to zoptymalizować
// obliczone wartości przechowywać w vector (przekazać jako wskaźnik) a obliczone wartości wyciągać z wektora

//napisać iteracyjne

