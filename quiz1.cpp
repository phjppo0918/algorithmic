/*
1. 이름과 점수를 입력받고, 다음과 같이 출력되는 프로그램을 작성하시오

이름입력: 두들낙서
점수입력: 80
두들낙서 님의 점수는 80점 입니다.
*/

#include <iostream>
#include <string>

int main() {
	std::string name;
	int score;
	std::cout << "이름입력:";
	std::cin >> name;
	
	std::cout << "점수입력:";
	std::cin >> score;

	std::cout << name << "님의 점수는 " << score << "점 입니다." << std::endl;

	return 0;
}