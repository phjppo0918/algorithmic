//struct
//class Ŭ���� = �ڷ� ���� + �ڷ� ó�� = ���� + �Լ�
//Ŭ����: Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��� �� Ʋ(������)
//��ü(object): �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸� ���� ����)

#include <iostream>

using namespace std;

//private, protected, public

class TV {
	bool powerOn;
	int channel;
	int volume;

public:
	void on() {
		powerOn = true;
		cout << "TV�� �׽��ϴ�" << endl;
	}
	void off() {
		powerOn = false;
		cout << "TV�� �����ϴ�" << endl;
	}
	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
			cout << "ä����" << cnl << "�� �ٲ���ϴ�" << endl;
		}

	}
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "�ҷ���" << vol << "�� �ٲ���ϴ�" << endl;

		}
	}
};
int main() {
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	return 0;
}
