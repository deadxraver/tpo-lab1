#include "land.hpp"
#include "entity.hpp"

#include <iostream>

int main(void) {
  Whale wh;
  Earth e;
  Person zafod("Зафод", 25, true);
  Person marvin("Марвин", 75);
  wh.fall(e);
  std::cout << "Земля провалилась там, где упал кит";
  if (e.is_open()) {
    std::cout << ", обнаружив целую сеть галерей и переходов";
      std::cout << ", которые теперь были ";
    if (e.underground().is_open()) {
      std::cout << "доступны каждому желающему";
    } else {
      std::cout << "сильно завалены обломками и потрохами";
    }
  }
  std::cout << ".\n";
  std::cout << zafod.name() << " начал расчищать один из проходов";
  try {
    e.underground().clean_up(zafod);
    std::cout << " и успешно расчистил";
  } catch (std::string) {
    std::cout << ", но у " << marvin.name() << " это ";
    try {
      e.underground().clean_up(marvin);
      std::cout << "вышло гораздо быстрее";
    } catch (std::string) {
      std::cout << "тоже не вышло.\n";
      return 0;
    }
  }
  std::cout << ".\n";
  Underground& undgr = e.underground();
  std::cout << "Сырой воздух поднимался из ";
  std::cout << (undgr.is_dark() ? "темных" : "светлых") << " глубин";
  std::cout << ", и когда ";
  try {
    undgr.light_up(zafod);
    std::cout << zafod.name() << " посветил фонарем внутрь, ";
  } catch (std::string) {
    try {
      undgr.light_up(marvin);
      std::cout << marvin.name() << " посветил фонарем внутрь, ";
    } catch (std::string) {
      std::cout << "ни у кого не оказалось фонаря, они развернулись и пошли по домам.\n";
      return 0;
    }
  }
  std::cout << (undgr.visibility() >= 50 ? "много" : "мало");
  std::cout << " что было видно в ";
  if (undgr.is_dusty()) {
    std::cout << "пыльном ";
  }
  std::cout << "мраке.\n";
  return 0;
}
