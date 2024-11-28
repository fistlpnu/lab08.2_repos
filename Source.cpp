#include <iostream>
#include <string>
using namespace std;

// Функція перевіряє, чи є у рядку слово, яке починається з літери 'a' (або 'A')
bool HasWordStartingWithA(const string& str) {
    size_t pos = 0; // Індекс для обходу рядка

    // Цикл для обробки кожного слова в рядку
    while (pos < str.length()) {

        // Пропускаємо всі пробіли, щоб знайти початок слова
        while (pos < str.length() && isspace(str[pos])) {
            pos++;
        }

        // Якщо дійшли до кінця рядка, виходимо з циклу
        if (pos >= str.length()) {
            break;
        }

        // Перевіряємо, чи перша літера слова — 'a' (або 'A')
        if (tolower(str[pos]) == 'a') {
            return true; // Якщо так, повертаємо true
        }

        // Пропускаємо всі символи слова, щоб перейти до наступного слова
        while (pos < str.length() && !isspace(str[pos])) {
            pos++;
        }
    }

    // Якщо жодне слово не починається на 'a', повертаємо false
    return false;
}

int main() {
    string input; // Рядок для збереження введеного тексту
    cout << "Enter a string: "; // Виводимо запит на ввід рядка
    getline(cin, input); // Зчитуємо весь рядок, включаючи пробіли

    // Викликаємо функцію і перевіряємо результат
    if (HasWordStartingWithA(input)) {
        cout << "The string contains a word starting with 'a'." << endl; // Якщо є слово на 'a'
    }
    else {
        cout << "The string does not contain a word starting with 'a'." << endl; // Якщо немає слова на 'a'
    }

    return 0;
}
