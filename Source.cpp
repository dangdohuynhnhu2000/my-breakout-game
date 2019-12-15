#include "Header.h"

int random(int min, int max)
{
	return min + rand() % (max + 1 - min);
}

void pretendWayOfBall(RenderWindow& window, Wall wall, Ball& ball, Grid grid, float vx, float vy)
{
	float pretendVx, pretendVy;
	pretendVx = vx*40;
	vy = -fabs(vy);//dam bao bong luon huong len tren
	pretendVy = vy*40;
	Vector2f position = ball.getPos();
	int countFrame = 10; //gia dinh duong di cua bong trong 10 buoc
	vector <Ball> pretendBall;//tao ra mot vrctor nhung qua bong gia dinh
	

	while (countFrame)
	{
		Ball temp(5);
		position.x += pretendVx;
		position.y += pretendVy;
		temp.setPos(position);
		//dua vi tri da du doan vao vector ket qua
		pretendBall.push_back(temp);
		countFrame--;
	}
	
	//in duong di gia dinh len man hinh
	for (int i = 0; i < pretendBall.size(); i++)
	{
		pretendBall[i].drawTo(window);
	}
}

void turnOnPretendWayMode(RenderWindow& window, Event& event, Ball& ball, float& vx, float& vy)
{
	float v = 1;
	Vector2f position = ball.getPos();
	/*if (Keyboard::(Keyboard::L) )//dich chuyen ball sang trai
	{
		vx -= v;
		cout << vx << endl;
	} 
	if (Keyboard::isKeyPressed(Keyboard::R) )//dich chuyen ball sang phai
	{
		vx += v;
	}
	if (Keyboard::isKeyPressed(Keyboard::Space))//cho bong dich chuyen theo vx, vy
	{
		ball.setPretendMode(false);//tat che do gia dinh duong di cua ball
	}*/
	//while (window.pollEvent(event))
	{
			switch (event.key.code)
			{
				// up, down de thoat khoi che do chon
			case Keyboard::L:
				cout << vx << endl;
				break;
			case Keyboard::R:
				vx += v;
				break;
				//left, right de thay doi toc do
			case Keyboard::Space:
				ball.setPretendMode(false);//tat che do gia dinh duong di cua ball
				break;
			}
			
	}
	window.clear();
}