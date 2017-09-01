#include "gtest/gtest.h"
#include "LinkedList.h"

#include <sstream>

using namespace std;

/* 
 * Function to get a string given a linked list
 * as in 1->2->5, the string would be "1,2,5"
 */
string LinkedList_to_string(LinkedList * ll, string separator = ",") {
    stringstream ss;
    for( Node * curr = ll->root; curr != 0; curr=curr->next) {
        ss << curr->value;
        
        if (curr->next != 0) {
            ss << separator;
        }
    }
    return ss.str();
}

/* 
 * Tests
 */
namespace tests {
    TEST(LinkedList, Empty) {
        LinkedList ll;
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("", ll_s.c_str());
    }
    TEST(LinkedList, Single) {
        LinkedList ll;
        ll.add(11);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("11", ll_s.c_str());
    }
    TEST(LinkedList, Simple) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("1,5,3", ll_s.c_str());
    }
    TEST(LinkedList, Long) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.add(100);
        ll.add(500);
        ll.add(300);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("1,5,3,1,5,3,100,500,300", ll_s.c_str());
    }
    TEST(LinkedList, Remove_to_Empty) {
        LinkedList ll;
        ll.del(1);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("", ll_s.c_str());
    }
    TEST(LinkedList, Remove_to_Single) {
        LinkedList ll;
        ll.add(11);
        ll.del(11);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("", ll_s.c_str());
    }
    TEST(LinkedList, RemoveNonExisting_to_Single) {
        LinkedList ll;
        ll.add(11);
        ll.del(21);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("11", ll_s.c_str());
    }
    TEST(LinkedList, Remove_First_to_Simple) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.del(1);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("5,3", ll_s.c_str());
    }
    TEST(LinkedList, Remove_Mid_to_Simple) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.del(5);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("1,3", ll_s.c_str());
    }
    TEST(LinkedList, Remove_Last_to_Simple) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.del(3);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("1,5", ll_s.c_str());
    }
    TEST(LinkedList, Remove_First_to_Long) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.add(100);
        ll.add(500);
        ll.add(300);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("1,5,3,1,5,3,100,500,300", ll_s.c_str());
    }
    TEST(LinkedList, Remove_Mid_to_Long) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.add(100);
        ll.add(500);
        ll.add(300);
        ll.del(100);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("1,5,3,1,5,3,500,300", ll_s.c_str());
    }
    TEST(LinkedList, Remove_Last_to_Long) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.add(100);
        ll.add(500);
        ll.add(300);
        ll.del(300);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("1,5,3,1,5,3,100,500", ll_s.c_str());
    }
    TEST(LinkedList, Simple_Add_After_Delete) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.del(5);
        ll.add(300);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("1,3,300", ll_s.c_str());
    }
    TEST(LinkedList, Simple_Add_After_AllDelete) {
        LinkedList ll;
        ll.add(1);
        ll.add(5);
        ll.add(3);
        ll.del(5);
        ll.del(3);
        ll.del(1);
        ll.add(300);
        string ll_s = LinkedList_to_string(&ll);
        EXPECT_STREQ("300", ll_s.c_str());
    }
}

/* 
 * Test runner. Entry point.
 */
int main (int argc, char** argv) {
    ::testing::InitGoogleTest (&argc, argv);
    return RUN_ALL_TESTS();
}
