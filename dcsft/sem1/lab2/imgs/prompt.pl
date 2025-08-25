# Устанавливаем заголовок графика
set title "Elapsed time FFDH and NFDH"

# Устанавливаем подписи осей
set xlabel "Number of tasks (m)"
set ylabel "Elapsed time (s)"

# Устанавливаем диапазон осей
set xrange [1:3500]  
set yrange [0.0000:0.0015] 

# Устанавливаем сетку
set grid

# Устанавливаем формат вывода (например, PNG)
set terminal pngcairo size 800,600 enhanced font 'Verdana,10'
set output 'plot.png'

# Устанавливаем шаг для оси X
set xtics 1000

# Устанавливаем шаг для оси Y
set ytics 0.0005

# Устанавливаем формат отображения значений на оси Y
set format y "%.4f"  # Формат с четырьмя знаками после запятой

# Устанавливаем легенду слева
set key left

# Строим график с несколькими линиями и разными стилями
plot 'FFDH-1024.txt' with linespoints lw 2 lt rgb "blue" title 'FFDH (n=1024)', \
     'NFDH-1024.txt' with linespoints lw 2 lt rgb "red" title 'NFDH (n=1024)', \
     'NFDH-4096.txt' with linespoints lw 2 lt rgb "yellow" title 'NFDH (n=4096)', \
     'FFDH-4096.txt' with linespoints lw 2 lt rgb "green" title 'FFDH (n=4096)'