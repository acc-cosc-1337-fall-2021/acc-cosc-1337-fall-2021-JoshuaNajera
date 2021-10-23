#pragma once

class ticTacToe{
private:
   char square[10];
public:
   ticTacToe();
   int checkwin();
   void board();
   void play();
};