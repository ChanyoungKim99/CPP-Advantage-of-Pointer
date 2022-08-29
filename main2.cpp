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


		// Call By Reference를 사용하면
		// 4MB를 새로 생성하는 게 아니라,
		// 4Byte의 포인터 변수 생성,
		// 주소만을 전달하여, 성능이 훨씬 좋아진다.
	}
}