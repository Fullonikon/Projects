#include "../list.h"
#include "../gtest.h"

class t :public::testing::Test
{
};

TEST(t, can_create_empty)
{
	EXPECT_NO_THROW(list h);
}

TEST(t, can_create_koef)
{
	EXPECT_NO_THROW(koef f(1, 2, 3, 4));
}

TEST(t, can_add_start)
{
	list h;
	koef f(1, 2, 3, 4);
	EXPECT_NO_THROW(h.ins(f));
}

TEST(t, can_add_before_start)
{
	list h;
	koef f(1, 2, 3, 4), a(10, 10, 10, 10);
	h.ins(a);
	EXPECT_NO_THROW(h.ins(f));
}

TEST(t, can_add_after_start)
{
	list h;
	koef f(1, 2, 3, 4), a(10, 10, 10, 10);
	h.ins(f);
	EXPECT_NO_THROW(h.ins(a));
}

TEST(t, sum_if_eq)
{
	list f;
	koef a(1, 1, 1, 1), b(1, 1, 1, 1);
	f.ins(a);
	f.ins(b);
	link o = f.geth();
	EXPECT_EQ(o.k.geta(), 2);
}

TEST(t, can_sum)
{
	list f, g;
	koef a(1, 1, 1, 1), b(1, 1, 1, 1);
	f.ins(a); g.ins(b);
	f = f + g;
	EXPECT_EQ(f.geth().k.geta(), 2);
}

TEST(t, can_del)
{
	list f, g;
	koef a(1, 1, 1, 3), b(1, 1, 1, 1);
	f.ins(a); g.ins(b);
	f = f - g;
	EXPECT_EQ(f.geth().k.geta(), 2);
}

TEST(t, can_mul)
{
	list f, g;
	koef a(1, 2, 3, 4), b(1, 1, 1, 4);
	f.ins(a); g.ins(b);
	f = f * g;
	koef c(1, 3, 4, 16);
	EXPECT_EQ(f.geth().k.geta(), 16);
}

TEST(t, cant_add_wrong_st1)
{
	ASSERT_ANY_THROW(koef a(-1, 1, 1, 1));
}

TEST(t, cant_add_wrong_st2)
{
	ASSERT_ANY_THROW(koef a(-1, 1, 1));
}

TEST(t, cant_add_too_much)
{
	ASSERT_ANY_THROW(koef a(20, 1, 1, 1));
}

TEST(t, can_fast_in)
{
	list f;
	koef a(1, 1, 1, 1);
	EXPECT_NO_THROW(f.insf(a));
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}