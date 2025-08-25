set terminal pngcairo size 800,600 enhanced font 'Verdana,10'
set output 'T(n)_m.png'

set title "Зависимость среднего времени восстановления при разных m, λ = 10^(-6), mu = 1"
set xlabel "Номер количество элементарных машин в основной подсистеме"
set ylabel "Среднее время восстановления"
set grid
# set key outside  

# Логарифмическая шкала для оси Y (если нужно)
# set yscale log

plot "T_lambda_0.000001_mu_1_m_1.txt" using 1:2 with linespoints title "m = 1", \
     "T_lambda_0.000001_mu_1_m_2.txt" using 1:2 with linespoints title "m = 2", \
     "T_lambda_0.000001_mu_1_m_3.txt" using 1:2 with linespoints title "m = 3"
