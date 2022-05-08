
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///is suffix ? 1
#include<iostream>
using namespace std;

int main()
{
	string big_str, small_str;

	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size())
	{
		cout << "NO\n";
		return 0;///quit
	}

	
	for (int i = 0; i < (int)small_str.size(); i++)
{		/// Compare the ends
		if (big_str[(int)big_str.size() - i - 1] != small_str[(int)small_str.size() - i - 1])///check for nonequality
		{
			cout << "NO\n";///if they differ just in one element (then not a suffix)
			return 0;///quit
		}
	}
	cout << "YES\n";///if loop end peacefully then it's suffix

	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///is suffix ? 2 //almost the same
#include<iostream>
using namespace std;

// test
// aaa aaaaaaa	YES
// aa AA NO

int main()
{
	string big_str, small_str;
	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size())
	{
		cout << "NO\n";
		return 0;
	}


	int big_end = (int)big_str.size() - 1;///(index of end made in a var)
	int small_end = (int)small_str.size() - 1;


	for (int i = 0; i < (int)small_str.size(); i++)
	{
		if (big_str[big_end--] != small_str[small_end--])///check for nonequality///notice --
		{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";

	return 0;
}
