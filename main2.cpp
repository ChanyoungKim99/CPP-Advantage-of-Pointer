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

	void DrawImage(Image* img)
	{
		// ....
	}

	int main()
	{
		Image cat;

		DrawImage(&cat);
		DrawImage(&cat);
		DrawImage(&cat);
		DrawImage(&cat);


		// Call By Reference�� ����ϸ�
		// 4MB�� ���� �����ϴ� �� �ƴ϶�,
		// 4Byte�� ������ ���� ����,
		// �ּҸ��� �����Ͽ�, ������ �ξ� ��������.
	}
}