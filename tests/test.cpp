#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(Constructor,Default){
	Rectangle rect;
	EXPECT_EQ(1, rect.getWidth());
	EXPECT_EQ(1, rect.getHeight());
}

TEST(Constructor,WidthAndHeight){
	Rectangle rect;
	rect.set_width(3);
	rect.set_height(4);
	EXPECT_EQ(3, rect.getWidth());
	EXPECT_EQ(4, rect.getHeight());
}

TEST(Constructor, Zero ){
	Rectangle rect;
	rect.set_width(0);
	rect.set_height(0);
	EXPECT_EQ(0, rect.getWidth());
	EXPECT_EQ(0, rect.getHeight());
}

TEST(Area, Default){
	Rectangle rect;
	EXPECT_EQ(1, rect.area());
}

TEST(Area, Edited){
	Rectangle rect;
	rect.set_width(3);
	rect.set_height(4);
	EXPECT_EQ(12, rect.area());
}	

TEST(Area, Zero ){
	Rectangle rect;
	rect.set_width(0);
	rect.set_height(0);
	EXPECT_EQ(0, rect.area());	
}

TEST(Perimeter, Default ){
	Rectangle rect;
	EXPECT_EQ(4, rect.perimeter());
}

TEST(Perimter, Edited ){
	Rectangle rect;
	rect.set_width(3);
	rect.set_height(4);
	EXPECT_EQ(25, rect.perimeter());
}

TEST(Perimeter, zero ){
	Rectangle rect;
	rect.set_width(0);
	rect.set_height(0);
	EXPECT_EQ(0, rect.perimeter()); 
}
