#include "open_spiel/spiel.h"
#include "open_spiel/tests/basic_tests.h"

namespace open_spiel {
namespace englishman {
namespace {

namespace testing = open_spiel::testing;

void BasicEnglishmanTests() {
  testing::LoadGameTest("englishman");
  testing::NoChanceOutcomesTest(*LoadGame("englishman"));
  testing::RandomSimTest(*LoadGame("englishman"), 100);
}

}  // namespace
}  // namespace englishman
}  // namespace open_spiel

int main(int argc, char** argv) {
  open_spiel::englishman::BasicEnglishmanTests();
}
