set terminal pngcairo size 800,600 enhanced font 'Verdana,10'
set output 'T(n)_lambda.png'

set title "Зависимость среднего времени восстановления при разных λ, m = 1, mu = 1"
set xlabel "Номер количество элементарных машин в основной подсистеме"
set ylabel "Среднее время восстановления"
set grid
# set key outside  

# Логарифмическая шкала для оси Y (если нужно)
# set yscale log

plot "T_lambda_0.0000001_mu_1_m_1.txt" using 1:2 with linespoints title "λ = 0.0000001", \
     "T_lambda_0.000001_mu_1_m_1.txt" using 1:2 with linespoints title "λ = 0.000001", \
     "T_lambda_0.000010_mu_1_m_1.txt" using 1:2 with linespoints title "λ = 0.000010"
