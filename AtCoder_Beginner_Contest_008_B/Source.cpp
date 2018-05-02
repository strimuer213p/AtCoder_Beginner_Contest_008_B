/*
問題文
とある組織で、リーダーを選ぶ選挙が行われた。
組織は N 人の構成員で構成されており、各人は最もリーダーにふさわしい人物の名前を書いた。
リーダーは、得票数が最も多い人物が選ばれることになっている。
得票数が最も多い人物の名前を出力せよ。得票数が最も多い人物が複数いる場合は、そのうちどの名前を出力してもよい。
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main() {
	int n,m=0;
	std::string str;
	std::cin >> n;
	std::vector<std::string> v(n);

	for (std::string& s : v) {
		std::cin >> s;
	}

	std::sort(v.begin(), v.end());

	for (int i = 0; i < n;) {
		int j=0;
		j = std::count(v.begin(), v.end(), v[i]);

		if (m < j) {
			str = v[i];
			m = j;
		}
		i += j;
	}

	std::cout << str << std::endl;

	return 0;
}