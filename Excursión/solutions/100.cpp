#include <stdlib.h>
#include <iostream>

int main()
{
	int n, q;
	int a[10000];

	std::cin >> n >> q;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < q; ++i)
	{
		int x;
		std::cin >> x;
		std::cout << a[x-1] << std::endl;
	}
}