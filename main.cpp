#include <iostream>

int main()
{
	struct Pixel
	{
		// 0 ~ 255

		unsigned char r;
		unsigned char g;
		unsigned char b;
		unsigned char a;
	};

	struct Image
	{
		Pixel image[1024 * 1024];
	};

	void DrawImage(Image img)
	{
		// ....
	}

	int main()
	{
		Image cat;

		DrawImage(cat);
		DrawImage(cat);
		DrawImage(cat);
		DrawImage(cat);


		// ����� �ϳ� ����µ� 1024*1024 byte = �� 4MB
		// DrawImage�� �Ȱ��� 4MB ����
		// ���� ��, �ٽ� 4MB ���� �ݺ�

		// ����� ������ ����µ� 4MB�� �ʿ�������
		// Call By Value�� ����, �̷� �ݺ������� �����
		// �������ϰ� ���� �ȴ�.
	}
}