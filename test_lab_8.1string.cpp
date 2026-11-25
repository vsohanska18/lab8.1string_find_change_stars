
#include <gtest/gtest.h>
#include "lab_8.1string.cpp"

TEST(Lab81String, FindThreeStars) {
    string str = "Hello *** world";
    EXPECT_TRUE(Find(str));
}

TEST(Lab81String, NoThreeStars) {
    string str = "Hello ** world";
    EXPECT_FALSE(Find(str));
}

TEST(Lab81String, StarsAtEnd) {
    string str = "Hello***";
    EXPECT_TRUE(Find(str));
}

TEST(Lab81String, ChangeThreeStars) {
    string str = "Hello *** world";
    Change(str);
    EXPECT_EQ(str, "Hello !! world");
}

TEST(Lab81String, ChangeMultipleStars) {
    string str = "*** Hello ***";
    Change(str);
    EXPECT_EQ(str, "!! Hello !!");
}

TEST(Lab81String, ChangeWithoutStars) {
    string str = "Hello ** world";
    Change(str);
    EXPECT_EQ(str, "Hello ** world");
}

TEST(Lab81String, ChangeSixStars) {
    string str = "******";
    Change(str);
    EXPECT_EQ(str, "!!!!");
}