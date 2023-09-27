#pragma once
#include "SDL.h"

struct Vector2
{
	float x;
	float y;
};

// Game Ŭ����
class Game
{
public:
	Game();
	// ���� �ʱ�ȭ
	bool Initialize();
	// ������ ������ ������ ���� ������ ����
	void RunLoop();
	// ���� ����
	void Shutdown();
private:
	// ���� ������ ���� ���� �Լ�
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	// SDL�� ������ ������
	SDL_Window* mWindow;
	// 
	SDL_Renderer* mRenderer;
	// Number of ticks since start of game
	Uint32 mTicksCount;
	// ������ ��� ���� �Ǿ�� �ϴ��� �Ǵ�
	bool mIsRunning;

	// Pong specific
	// Direction of paddle
	int mPaddleDir;
	// Position of paddle
	Vector2 mPaddlePos;
	// Position of ball
	Vector2 mBallPos;
	// Velocity of ball
	Vector2 mBallVel;
};