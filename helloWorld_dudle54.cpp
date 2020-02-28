#include<iostream>

using namespace std;
//이거 쓰면 std:: 안써도 됨

int main() {

	//std:name space: 이름들이 들어갈 수 있는 공간
		//여기서는 객체 느낌
	std::cout << "Hello, World!" << std::endl;
	//                                  end line: 줄바꿈
	std::cout << "Hello, World!" << 10 << 'c' << std::endl;
	// <<: 출력할 데이터를 분리해 주는 용도

	cout << "Hello world!" << endl;
	return 0;
}