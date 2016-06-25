// !!! DONT MODIFY THIS FILE DIRECTLY OR YOU WILL LOST THE CHANGE !!!
// THE FILE WAS GENERATED BY github.com/huxingyi/libphone/tools/phonelayout

#ifndef __board_H__
#define __board_H__

typedef struct board {
  float displayWidth;
  float displayHeight;
  int searchBar;
  int tabBar;
  int topHead;
  int topTitle;
  int infoPanel;
  int firstInfoBox;
  int firstInfoNumber;
  int firstInfoDesc;
  int secondInfoBox;
  int thirdInfoBox;
  int forthInfoBox;
  int bottomHead;
  int bottomTitle;
  int registrationPanel;
} board;

board *boardCreate(void);

#endif
