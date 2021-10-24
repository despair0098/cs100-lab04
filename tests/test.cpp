#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(Constructor,Default){
	Rectangle rect;
	EXPECT_EQ(1, rect.getWidth());
	EXPECT_EQ(1, rect.getHeight());
}

TEST(Constructor,WidthAndHeight){
	Rectangle rect = new Rectangle(3, 4);
	EXPECT_EQ(3, rect.getWidth());
	EXPECT_EQ(4, rect.getHeight());
}

TEST(Constructor, ){}

TEST(Area,Default){
	Rectangle rect;
	EXPECT_EQ(1, rect.area());
}

TEST(Area,Edited){
	Rectangle rect = new Rectangle(3, 4);
	EXPECT_EQ(12, rect.area());
}

TEST(Area, ){}

TEST(Perimeter,Default ){
	Rectangle rect;
	EXPECT_EQ(1, rect.perimeter());
}

TEST(Perimeter,Edited ){
	Rectangle rect = new Rectangle(3, 4);
	EXPECT_EQ(25, rect.perimeter());
}

TEST(Perimeter, ){}

