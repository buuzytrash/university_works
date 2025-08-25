# Установка параметров графика
set terminal pngcairo enhanced font 'Arial,12' size 800,600
set output 'U_star_plot.png'

# Заголовок графика
set title "Зависимость оперативной восстановимости U*(t) для n ∈ {10, 11, ..., 16}"
set xlabel "Время t (часы)"
set ylabel "U*(t)"

# Включение сетки
set grid

# Форматирование оси Y для отображения значений с высокой точностью
set format y "%.10f"

# Построение графиков для каждого значения n
plot "../data/U_star_10.txt" using 1:2 with linespoints title 'n=10', \
     "../data/U_star_11.txt" using 1:2 with linespoints title 'n=11', \
     "../data/U_star_12.txt" using 1:2 with linespoints title 'n=12', \
     "../data/U_star_13.txt" using 1:2 with linespoints title 'n=13', \
     "../data/U_star_14.txt" using 1:2 with linespoints title 'n=14', \
     "../data/U_star_15.txt" using 1:2 with linespoints title 'n=15', \
     "../data/U_star_16.txt" using 1:2 with linespoints title 'n=16'