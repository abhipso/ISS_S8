#include <bits/stdc++.h>
#include <cstdlib>
#include <unistd.h>

int main()
{
	std::string pass = getpass("Enter Password:");
	if (pass.length() <= 6)
	{
		printf("Password too small\n");
		return 0;
	}
	int small = 0, capital = 0, num = 0, special = 0;
	for (int i = 0; i < pass.length(); ++i)
	{
		if (pass[i] >= 'a' && pass[i] <= 'z') small = 1;
		else if (pass[i] >= 'A' && pass[i] <= 'Z') capital = 1;
		else if (pass[i] >= '0' && pass[i] <= '9') num = 1;
		else special = 1;
	}
	int ans = small + capital + num + special;
	if (ans == 1) printf("Weak\n");
	if (ans == 2) printf("Moderate\n");
	if (ans == 3) printf("Strong\n");
	if (ans == 4) printf("Very Strong\n");

	return 0;
}
