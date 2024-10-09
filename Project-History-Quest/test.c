#include <stdio.h>
int counter = 0; // Инициализация счетчика правильных ответов
int question(const char* quest, const char* option1, const char* option2, const char* option3, const char* option4, int answer) {
    int HumanAnswer;
    printf("%s\n",quest);
    printf("%s\n",option1);
    printf("%s\n",option2);
    printf("%s\n",option3);
    printf("%s\n",option4);
    scanf("%d", &HumanAnswer);
    if (HumanAnswer == answer) {
        printf("вы правы\n");
        counter++;
    } else {
        printf("вы не правы\n");
    }
    return 0;
};


int main() {
    question("кто победил в битве при креси?", "1. Франция", "2. Англия", "3. Кастилия", "4. Шотландия",2);
    question("сколько лет длилась столетняя война?","1. 116","2. 100","3. 106","4. 94",1);
    question("в каком году была битва при Азенкуре?","1. 1346","2. 1451","3. 1356","4. 1415",4);
    question("между кем и кем был мир в Аррасе?","1. между Бургундией и Францией","2. между Англей и Францией","3. между Бретанью и Англией","4. Шотландией и Англией",1);
    question("во время осады какого города Жанну д'арк пленили?","1. Орлеан","2. Руан","3. Компьен","4. Париж",3);
    printf("ваш итоговый счет: %d\n", counter);
    return 0;
}