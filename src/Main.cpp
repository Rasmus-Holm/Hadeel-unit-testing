#include <iostream>
#include <vector>
#include <optional>

std::optional<double> beregnGennemsnit(const std::vector<double>& tal) {
    if (tal.empty()) {
        return std::nullopt;
    }

    double sum = 0;
    for (double t : tal) {
        sum += t;
    }

    return sum / tal.size();
}

int main() {
    std::vector<double> liste1 = {10, 20, 30};
    std::vector<double> liste2 = {5};
    std::vector<double> liste3 = {};

    auto resultat1 = beregnGennemsnit(liste1);
    auto resultat2 = beregnGennemsnit(liste2);
    auto resultat3 = beregnGennemsnit(liste3);

    if (resultat1) std::cout << "Gennemsnit: " << *resultat1 << std::endl; // 20
    if (resultat2) std::cout << "Gennemsnit: " << *resultat2 << std::endl; // 5
    if (!resultat3) std::cout << "Listen er tom, returnerer None" << std::endl;

    return 0;
}

