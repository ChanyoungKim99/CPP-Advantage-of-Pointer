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


		// 고양이 하나 만드는데 1024*1024 byte = 약 4MB
		// DrawImage에 똑같이 4MB 생김
		// 없앤 후, 다시 4MB 생성 반복

		// 고양이 한장을 만드는데 4MB만 필요하지만
		// Call By Value를 사용시, 이런 반복행위가 생긴다
		// 성능저하가 오게 된다.
	}
}