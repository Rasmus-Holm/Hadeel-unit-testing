# Hadeel-unit-testing

Øvelse 2: Skriv dine egne Unit Tests
Formål: At lære at skrive og køre unit tests for at sikre, at funktioner virker korrekt.
Opgavebeskrivelse
a. Skriv en funktion, der gør følgende:
1. Modtager en liste af tal.
2. Returnerer gennemsnittet af tallene.
3. Hvis listen er tom, skal funktionen returnere None.
b. Lav en testklasse med mindst 3 test cases:
1. Test med en liste af positive tal.
2. Test med en liste af negative tal.
3. Test med en tom liste.

# Eksempel på test
Running main() from /home/rasmus/Code/Hadeel/build/_deps/googletest-src/googletest/src/gtest_main.cc
[==========] Running 3 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 3 tests from GennemsnitsTest
[ RUN      ] GennemsnitsTest.PositiveTal
[       OK ] GennemsnitsTest.PositiveTal (0 ms)
[ RUN      ] GennemsnitsTest.NegativeTal
[       OK ] GennemsnitsTest.NegativeTal (0 ms)
[ RUN      ] GennemsnitsTest.TomListe
[       OK ] GennemsnitsTest.TomListe (0 ms)
[----------] 3 tests from GennemsnitsTest (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 3 tests.
