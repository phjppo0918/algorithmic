/*
1. �̸��� ������ �Է¹ް�, ������ ���� ��µǴ� ���α׷��� �ۼ��Ͻÿ�

�̸��Է�: �ε鳫��
�����Է�: 80
�ε鳫�� ���� ������ 80�� �Դϴ�.
*/

#include <iostream>
#include <string>

int main() {
	std::string name;
	int score;
	std::cout << "�̸��Է�:";
	std::cin >> name;
	
	std::cout << "�����Է�:";
	std::cin >> score;

	std::cout << name << "���� ������ " << score << "�� �Դϴ�." << std::endl;

	return 0;
}