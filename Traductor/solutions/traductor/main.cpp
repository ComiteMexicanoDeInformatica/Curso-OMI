#include <iostream>
#include <stdlib.h>

int main()
{
	int d, q;
	int a1[1001];
	int a2[1001];
	std::cin >> d >> q;

	for (int i = 0; i < d; ++i)
	{
		std::cin >> a1[i]  >> a2[i];
	}

	for (int i = 0; i < q; ++i)
	{
		int x;
		std::cin >> x;
		for (int j = 0; j < d; ++j)
		{
			if (a1[j] == x) {
				std::cout << a2[j] << std::endl;
				break;
			}
			if (j == d-1) {
                std::cout << "C?" << std::endl;
            }
		}
	}
	return 0;
}
