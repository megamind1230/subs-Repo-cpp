
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// is subArr ?
#include<iostream>
using namespace std;

int main()
{
	string big_str, small_str;
	cin >> big_str >> small_str;

	if (small_str.size() > big_str.size()) ///important to check in every case
	{
		cout << "NO\n";
		return 0;
	}
	/*
	بص السب أرراي الجاهزة هي اللي بنستقبها سترينج من الأول
	أما السب سترينح الوليدة هي اللي هنستخرجها من الأرراي الكبيرة
	الحل
	هنلف على كل ال 
	subarrs of S size اللي هي الوليدة
	واللي هي نوجودة في ال
	big str
		وهنتعامل مع ال
		subarr الوليدة
		اللي في إيدينا دلوقتي وهنفرض إنها مماثلة
		وهنلف عليها علشان نتأكد من عدم المساواة بيها وبين السب أرراي الوليدة والجاهزة
			فلو كانت مماثلة هيفضل الفلاج زي ما هو وهنطبع يس ونخلص
			إنما لو حصل فيه عدم تساوي واحد
				إذن السب ارراي الوليدة دي خصوصا ..مش وحدة غيرها.. مماثلة فمش هنطبع يس لأن لسه فيه سب أررايز وليدة تانية كتير
	فلو خلصت اللوب الكبيرة من غير ما نطبع يس .. إذن السب أرراي دي مش موجودة وبالتالي نطبع نو .. بس ده بعد ما نخلص كل السب أررايز الوليدة كلها
	*/
	/// For every possible position in big_str, try to match with the small
	for (int i = 0; i < (int)big_str.size() - (int)small_str.size() + 1; ++i) ///0 to { (int) big_str.size() - (int) small_str.size() + 1 } gives number of all subarrs of size { (int) small_str.size() }
	{
		bool is_match = true;///by default assume subarr matches
		
		//core
		for (int j = 0; j < (int)small_str.size() && is_match; ++j)///loop with size of{ (int) small_str.size() } ... go again while matching  
		{
			if (small_str[j] != big_str[i + j]) ///check nonequality ///notice the original(arr[i+j]) ... but the subarr (subArr[j])
				is_match = false;///then no matching
		}
		
		///after the loop check matching
		if (is_match)
		{
			cout << "YES\n";///if only  one  matches
			return 0;
		}
	}
	cout << "NO\n";///if (non of all subarr of size (int) small_str.size() is matching)

	return 0;
}
