#include <stdio.h>
#include <locale.h> 

int main()
{

    setlocale(LC_ALL, "Russian");

    int V1 = 2;
    int t1 = 20;

    int V2 = 3;
    int t2 = 45;

    int V3 = 5;
    int t3 = 80;

    int V_obshiy;
    float t_itog;

    V_obshiy = V1 + V2 + V3;

    t_itog = (float)(V1 * t1 + V2 * t2 + V3 * t3) / V_obshiy;

    printf("==================== РЕЗУЛЬТАТЫ РАБОТЫ ====================\n\n");

    printf("Условие задачи с подставленными значениями:\n");
    printf("В первом сосуде содержится %d литров воды с температурой %d C,\n", V1, t1);
    printf("во втором — %d литров воды с температурой %d C,\n", V2, t2);
    printf("в третьем — %d литров воды с температурой %d C.\n", V3, t3);
    printf("Воду слили в один сосуд.\n\n");

    printf("Ответ:\n");
    printf("- Общий объем воды в новом сосуде: %d литров\n", V_obshiy);
    printf("- Итоговая температура смеси:     %.2f C\n\n", t_itog);

    printf("===========================================================\n");

    return 0;
}
