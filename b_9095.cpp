#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T, n;

	vector<int>v(12, 0);
	//vectorũ�� (12, 0)�̶�� ���� ���ϸ� R.E �߻���.

	v[1] = 1;
	v[2] = 2;
	v[3] = 4;

	cin >> T;

	for (int j = 4; j < 11; j++)
	{
		v[j] = v[j - 1] + v[j - 2] + v[j - 3];
	}
	
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		cout << v[n] << '\n';

	}

	return 0;
}