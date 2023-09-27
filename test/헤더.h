#pragma once
#include "SDL.h"

struct Vector2
{
	float x;
	float y;
};

// Game 클래스
class Game
{
public:
	Game();
	// 게임 초기화
	bool Initialize();
	// 게임이 끝나기 전까지 게임 루프를 실행
	void RunLoop();
	// 게임 종료
	void Shutdown();
private:
	// 게임 루프를 위한 헬퍼 함수
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	// SDL이 생성한 윈도우
	SDL_Window* mWindow;
	// 
	SDL_Renderer* mRenderer;
	// Number of ticks since start of game
	Uint32 mTicksCount;
	// 게임이 계속 실행 되어야 하는지 판단
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