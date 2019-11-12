#include <gtest/gtest.h>
#include "CSVReader.h"
#include <sstream>

TEST(CSVReader,EmptyFile){
    std::stringstream Input;
    CCSVReader Reader(Input);
    std::vector<std::string> Row;


    EXPECT_FALSE(Reader.ReadRow(Row));
    EXPECT_TRUE(Reader.End());
}

TEST(CSVReader, SingleRow){
    std::stringstream Input(" 1,2 ,  3         ,4,5\x0d\x0a");
    CCSVReader Reader(Input);
    std::vector<std::string> Row;

    EXPECT_TRUE(Reader.ReadRow(Row));
    EXPECT_EQ(Row.size(),5);
    if(5 <= Row.size()){
        EXPECT_EQ(Row[0], "1");
        EXPECT_EQ(Row[0], "2");
        EXPECT_EQ(Row[0], "3");
        EXPECT_EQ(Row[0], "4");
        EXPECT_EQ(Row[0], "5");
    }
    EXPECT_TRUE(Reader.End());
}