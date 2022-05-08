
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
	string big_str, small_str;
	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size())
	{
		cout << "NO\n";
		return 0;
	}
	///here no need to flags & here we check equality (as nonequality is the rare now)
	// Keep match letters (in order) from the big with the small
	int next_to_match = 0; 				///notice that { i } and { next_to_match } are increasing (which is good in subseqs) & i is faster
	for (int i = 0; i < (int)big_str.size(); ++i) 	///loop on big arr size
	{
		if (big_str[i] == small_str[next_to_match]) 	///see if (they match) ///notice that { i } is counter for the big arr... but { next_to_match } is counter for the small arr
		{
			++next_to_match;	///if those 2 elements match then count this matching case & see if the counter of matching cases reached the size of the small arr
			if (next_to_match == (int)small_str.size())
			{
				///this means we matched each element in the small arr .. with some elements in the big arr ... using increasing indexes -->( which gives us a subSeq ) 
				cout << "YES\n";///completed matching
				return 0;
			}
		}
	}
	/*if we finished looping without finding any completed matching 
	(this means {{maybe there were matching but not for every element in the smallArr}}
	{{maybe the smallArr elements were in the bigArr but not having an increasing indexes}}
	{{maybe non of the smallArr elements were in the bigArr}} 
	*/
	cout << "NO\n";

	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


