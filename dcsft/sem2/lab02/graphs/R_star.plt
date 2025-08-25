# Установка параметров графика
set terminal pngcairo enhanced font 'Arial,12' size 800,600
set output 'R_star_plot.png'

# Заголовок графика
set title "Зависимость оперативной надежности R*(t) для n ∈ {8, 9, 10}"
set xlabel "Время t (часы)"
set ylabel "R*(t)"

# Включение сетки
set grid

# Форматирование оси Y для отображения малых значений
set format y "%.1e"

# Построение графиков для каждого значения n
plot "../data/R_star_8.txt" using 1:2 with linespoints title 'n=8', \
     "../data/R_star_9.txt" using 1:2 with linespoints title 'n=9', \
     "../data/R_star_10.txt" using 1:2 with linespoints title 'n=10'