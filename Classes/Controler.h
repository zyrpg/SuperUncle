/*
时间：2017年8月12日00:31:21
作者：张天翼
功能：游戏总控
*/

#ifndef __CONTROLER_H__
#define __CONTROLER_H__
#include "cocos2d.h"

class Controler : public cocos2d::Sprite
{
public:

	static void createCloud(cocos2d::Layer *, cocos2d::Node *, cocos2d::Size visSize); //参2：角色坐标

	static void cloudPosControl(cocos2d::Layer * layer);

	static void CreateUpdateUI(cocos2d::Layer *, cocos2d::Size, unsigned long long &gameTime, unsigned long long &coin, unsigned long long &score); //创建|刷新UI：金币时间等

	static void tiledMapScroll(cocos2d::Layer *, cocos2d::Layer *, cocos2d::Layer *, cocos2d::Layer *, cocos2d::TMXTiledMap * tiledMap, cocos2d::Node * character); //地图滚动

	static void createBackGround(cocos2d::Layer *, cocos2d::Size); //BG创建
};

#endif // !__CONTROLER_H__