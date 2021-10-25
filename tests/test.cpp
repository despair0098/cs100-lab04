#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(Constructor,Default){
	Rectangle rect;
	EXPECT_EQ(1, rect.getWidth());
	EXPECT_EQ(1, rect.getHeight());
}

TEST(Constructor,WidthAndHeight){
	Rectangle rect = Rectangle(3, 4);
	EXPECT_EQ(3, rect.getWidth());
	EXPECT_EQ(4, rect.getHeight());
}

TEST(Constructor, Zero ){
	Rectangle rect = Rectangle(0, 0);
	EXPECT_EQ(0, rect.getWidth());
	EXPECT_EQ(0, rect.getHeight());
}

TEST(Area, Default){
	Rectangle rect;
	EXPECT_EQ(1, rect.area());
}

TEST(Area, Edited){
	Rectangle rect = Rectangle(3, 4);
	EXPECT_EQ(12, rect.area());
}	

TEST(Area, Zero ){
	Rectangle rect = Rectangle(0, 0);
	EXPECT_EQ(0, rect.area());	
}

TEST(Perimeter, Default ){
	Rectangle rect;
	EXPECT_EQ(4, rect.perimeter());
}

TEST(Perimeter, Edited ){
	Rectangle rect = Rectangle(3, 4);
	EXPECT_EQ(25, rect.perimeter());
}

TEST(Perimeter, zero ){
	Rectangle rect = Rectangle(0, 0);
	EXPECT_EQ(0, rect.perimeter()); 
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
