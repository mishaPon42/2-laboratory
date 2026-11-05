# Лабораторная работа №2. Стандартный вывод и форматирование

## Домашнее задание (Вариант 23): Расчет смешивания воды в сосудах

### УСЛОВИЯ:
- **Сосуд 1:** объем = 2 л., температура = 20 C.
- **Сосуд 2:** объем = 3 л., температура = 45 C.
- **Сосуд 3:** объем = 5 л., температура = 80 C.
- **Действие:** воду из трех сосудов слили в один общий сосуд. Требуется определить итоговый объем и температуру получившейся смеси.

---

### АЛГОРИТМ И БЛОК-СХЕМА:
Алгоритм решения задачи спроектирован в виде блок-схемы. Вы можете открыть и интерактивно посмотреть её на сайте:

👉 **[ОТКРЫТЬ БЛОК-СХЕМУ В DRAW.IO](https://app.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000FF&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22iZiquh2mHfGLkUDH9YLt%22%3E1VhNb%2BIwEP01kdpLlcQkIcd80T3sSitx2O3RSgyJamJkTIH99TtxbGIXqgLNgV6cmbHHHs%2FzG2MclK32zxyv61%2BsItTx3WrvoNzxfW%2FiTeDTWQ69JfLj3rDkTaUGDYZ5848oo6us26YiG2ugYIyKZm0bS9a2pBSWDXPOdvawBaP2qmu8JCeGeYnpqfVPU4m6t079aLD%2FIM2y1it7odrfCuvBaiebGldsZ5hQ4aCMMyZ6abXPCO2Sp%2FPS%2B80%2B6D0GxkkrLnHwTx3UHBtx0NsFF8gsKOmubgSZr3HZ9ewAXLDVYkVB80BcNJRmjDIu%2FVDh5UERgX0jOHslRk8cRigJOw%2FWirlaydN6jzccEpT2sbxhulWxOLnrxLls3a5NokGOU9kWyolwQfbGnlQGnglbEcEPMKQ2QAoVIrsBUG%2BibGoWpFFTx1Z3Y3WclseZh4yDoJJ%2BHgB0CQBwStadCKMwpYSyJccryM6a8AZWJPx93%2B%2Bh43PM9kRT7AsYqgnQh5jJNu3bQraAbwIDW8eHLLk%2F%2B89r%2F1mNhmH0DkM3sDD0ghFAVOWMVCdl4xRVtuUlschnMq2tkq4%2BgVZSvNk0pQ0WZ9u2It2qLmhk34i%2FnfwUKO1FjevkfG8Myw9aaWFvhlOnvph9g5vUtJ%2BqspgvibBOronzpwDpZHNCsWje7GwZqI0BSnAJs%2ByEXlfeZrOZn2XnqJGHaRhcTI1EFq80kC2UM8%2BZIimnUs5k2xPHVbLvPiwow%2BIRJDmR1tvOABmSfBqHQce7Ss3iT%2B0qePT5CljhbQxC35pBwZ0zKPoYg7u4m%2FKkmM7OEjDMpkU6u%2BZuAlqlZ24ov2dcpBkKss1WSA9vWrF4eJS3GZxj5HVoe9rV0%2FQ9uvZzJ4rQ8g6UUUw0xaHNdXuMK%2BhIrmcEfWbM6BqRu49GFP71UUTG%2Bq4a03elUyXcVrCM2FPDf4j6hnIVnSlX4btyFdrlCkUjMGN6W7kKvnW5iu68XMWXlKu7e8sk6s0yvGskL5JwtF%2FAn71i4hFyr1%2Fm1zIi%2BtaMiO%2BLEaAO%2FxzIPuP%2FF1T8Bw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)**

---

### РАСЧЕТ:
- **Общий объем смеси:** 2 л + 3 л + 5 л = **10 литров**.
- **Суммарный тепловой баланс:** (2 * 20) + (3 * 45) + (5 * 80) = 40 + 135 + 400 = **575 ед.**
- **Итоговая температура:** 575 ед. теплоты / 10 л. объема = **57.50 C**.

==================================================
**РЕЗУЛЬТАТ:** В новом сосуде содержится **10 л.** воды с температурой **57.50 C**.
==================================================

---

### КОНТРОЛЬНЫЕ ПРИМЕРЫ ДЛЯ ПРОВЕРКИ ПРОГРАММЫ:

Для подтверждения корректности работы кода используются три тест-кейса:

1. **Тест №1 (Базовый из условия задачи):**
   - Входные данные: V1=2, t1=20; V2=3, t2=45; V3=5, t3=80
   - Ожидаемый результат: Объем = **10 л.**, Температура = **57.50 C**

2. **Тест №2 (Проверка равенства температур):**
   - Входные данные: V1=2, t1=25; V2=3, t2=25; V3=5, t3=25
   - Ожидаемый результат: Объем = **10 л.**, Температура = **25.00 C** (физически температура смеси не должна измениться)

3. **Тест №3 (Проверка дисбаланса объемов):**
   - Входные данные: V1=1, t1=10; V2=1, t2=10; V3=1000, t3=90
   - Ожидаемый результат: Объем = **1002 л.**, Температура = **89.84 C** (температура должна быть максимально близка к горячему баку)
