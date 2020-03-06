//배열포인터 셀프테스트

#include<iostream>

int main() {
	int array[3][4]{
			{1,2,3,4},
		{10,20,30,40},
		{100,200,300,400}
	};
	int(*arr_ptr)[4] = array; //배열 포인터 선언 후 array 넣음
	std::cout << *arr_ptr[0] << std::endl;
	std::cout << *arr_ptr[1] << std::endl;
	std::cout << *arr_ptr[2] << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << *(arr_ptr[0]+0) << std::endl;
	std::cout << *(arr_ptr[0]+1) << std::endl;
	std::cout << *(arr_ptr[0]+2) << std::endl;
	std::cout << *(arr_ptr[0]+3) << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << *(*(arr_ptr+0) + 0) << std::endl;
	std::cout << *(*(arr_ptr+0) + 1) << std::endl;
	std::cout << *(*(arr_ptr+0) + 2) << std::endl;
	std::cout << *(*(arr_ptr+0) + 3) << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << *(*(arr_ptr + 0)) << std::endl;
	std::cout << *(*(arr_ptr + 1)) << std::endl;
	std::cout << *(*(arr_ptr + 2)) << std::endl;

	std::cout << "\n" << std::endl;

	return 0;
}