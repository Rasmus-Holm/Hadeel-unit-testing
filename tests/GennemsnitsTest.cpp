#include <gtest/gtest.h>
#include <vector>
#include <optional>

std::optional<double> beregnGennemsnit(const std::vector<double>& tal) {
    if (tal.empty()) return std::nullopt;
    double sum = 0;
    for (double t : tal) sum += t;
    return sum / tal.size();
}

class GennemsnitsTest : public ::testing::Test {};

TEST_F(GennemsnitsTest, PositiveTal) {
    auto resultat = beregnGennemsnit({10, 20, 30});
    ASSERT_TRUE(resultat.has_value());
    EXPECT_DOUBLE_EQ(*resultat, 20.0);
}

TEST_F(GennemsnitsTest, NegativeTal) {
    auto resultat = beregnGennemsnit({-10, -20, -30});
    ASSERT_TRUE(resultat.has_value());
    EXPECT_DOUBLE_EQ(*resultat, -20.0);
}

TEST_F(GennemsnitsTest, TomListe) {
    auto resultat = beregnGennemsnit({});
    EXPECT_FALSE(resultat.has_value());
}