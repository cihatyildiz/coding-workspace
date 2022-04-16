#include <iostream>
#include <thread>
#include <vector>

using namespace std;

#include <stdio.h>
#include <Windows.h>

class TetrisGame
{
private:
	int nScreenWidth = 80;	// Console Screen Size X (columns)
	int nScreenHeight = 30; // Console Screen Size Y (rows)
	wstring tetromino[7];
	int nFieldWidth = 12;
	int nFieldHeight = 18;
	unsigned char* pField = nullptr;

	int Rotate(int px, int py, int r);
	bool DoesPieceFit(int nTetromino, int nRotation, int nPosX, int nPosY);
public:

	TetrisGame();
	~TetrisGame();
	int Run();
};