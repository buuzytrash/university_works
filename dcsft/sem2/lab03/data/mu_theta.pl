set terminal pngcairo size 800,600 enhanced font 'Verdana,10'
set output 'Theta(n)_mu.png'

set title "Зависимость среднего времени до отказа при разных mu,  λ = 10^(-6), m = 2"
set xlabel "Номер количество элементарных машин в основной подсистеме"
set ylabel "Среднее время до отказа"
set grid
# set key outside  

# Логарифмическая шкала для оси Y (если нужно)
set logscale y

plot "theta_lambda_0.000001_mu_1_m_2.txt" using 1:2 with linespoints title "mu = 1", \
     "theta_lambda_0.000001_mu_10_m_2.txt" using 1:2 with linespoints title "mu = 10", \
     "theta_lambda_0.000001_mu_100_m_2.txt" using 1:2 with linespoints title "mu = 100", \
     "theta_lambda_0.000001_mu_1000_m_2.txt" using 1:2 with linespoints title "mu = 1000"
