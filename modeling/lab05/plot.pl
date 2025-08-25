set terminal png size 800,600
set output 'result.png'

set style data histograms
set style fill solid border -1
set autoscale y 
plot 'results.txt' using 2:xtic(1) title "Попадания"