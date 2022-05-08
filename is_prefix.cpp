///is prefix ?
#include<iostream>
using namespace std;

int main() {
	string big_str, small_str;

	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size())///if the smaller is bigger in size (that's not right)
	{
		cout << "NO\n";
		return 0;///quit
	}


	for (int i = 0; i < (int)small_str.size(); i++)///loop with the small size (form 0)
	{
		if (big_str[i] != small_str[i])///check for nonequality
		{
			cout << "NO\n";///if the differ just in one element (then not a prefix)
			return 0;///quit
		}
	}
	cout << "YES\n";///if loop end peacefully then it's prefix

	return 0;
}
