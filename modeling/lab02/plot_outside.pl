# Установка выходного файла и формата
set terminal png size 800,600
set output 'points_outside2.png'

# Заголовок и подписи осей
set title "Точки на границах сегмента окружности"
set xlabel "X"
set ylabel "Y"

plot 'points_outside.dat' with points pointtype 0 title "Граничные точки"
