# Устанавливаем заголовок графика
 set title "Dependence of T(s) on the number of tasks"

# Устанавливаем подписи осей
 set xlabel "Size tasks (m)\"
 set ylabel "T(S)"

# Устанавливаем диапазон осей
set xrange [500:3500]  
set yrange [5:150] 

# Устанавливаем сетку
set grid

# Устанавливаем формат вывода (например, PNG)
set terminal pngcairo size 800,600 enhanced font 'Verdana,10'
set output 'plot_t.png'

# Устанавливаем шаг для оси X
set xtics 1000

# Устанавливаем шаг для оси Y
set ytics 10

# # Устанавливаем формат отображения значений на оси Y
# set format y "%.3f"  # Формат с четырьмя знаками после запятой

# Устанавливаем легенду слева
set key left

# Строим график с несколькими линиями и разными стилями
plot 'ffh_4096_ts.txt' with linespoints lw 2 lt rgb "blue" title 'FFDH', \
     'nfdh_4096_ts.txt' with linespoints lw 2 lt rgb "red" title 'NFDH'