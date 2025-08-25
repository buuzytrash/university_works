# Устанавливаем заголовок графика
set title "Зависимость отклонения ε от количества задач"

# Устанавливаем подписи осей
set xlabel "Количество задач (m)"
set ylabel "Отклонение ε"

set terminal pngcairo size 800,600 enhanced font 'Verdana,10'
set output 'comp.png'

# Устанавливаем диапазон значений для оси X
set xrange [0:3500]

# Устанавливаем диапазон значений для оси Y
set yrange [-100:800]

# Устанавливаем сетку
set grid

# Устанавливаем легенду
set key outside

# Устанавливаем формат данных для чтения
set datafile separator " "

# Строим графики для NFDH и FFDH
plot "data_1024.dat" using 1:4 with linespoints title "NFDH", \
     "data_1024.dat" using 1:5 with linespoints title "FFDH"