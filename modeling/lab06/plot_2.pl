set terminal pngcairo size 1200,800 enhanced font 'Verdana,12'
set output 'clustered_histogram.png'
set style data histogram
set style histogram clustered gap 1
set style fill solid border -1
set boxwidth 0.8
set xtics rotate by -45
set key top right

set title "Вероятности выбора сегментов по шагам"
set ylabel "Вероятность"
set xlabel "Сегмент"

plot for [i=2:7] 'histogram_data2.txt' using i:xtic(1) title columnheader(i)