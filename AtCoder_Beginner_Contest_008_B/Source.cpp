/*
��蕶
�Ƃ���g�D�ŁA���[�_�[��I�ԑI�����s��ꂽ�B
�g�D�� N �l�̍\�����ō\������Ă���A�e�l�͍ł����[�_�[�ɂӂ��킵���l���̖��O���������B
���[�_�[�́A���[�����ł������l�����I�΂�邱�ƂɂȂ��Ă���B
���[�����ł������l���̖��O���o�͂���B���[�����ł������l������������ꍇ�́A���̂����ǂ̖��O���o�͂��Ă��悢�B
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