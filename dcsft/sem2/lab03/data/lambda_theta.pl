set terminal pngcairo size 800,600 enhanced font 'Verdana,10'
set output 'Theta(n)_lambda.png'

set title "Зависимость среднего времени до отказа при разных λ, m = 1, mu = 1"
set xlabel "Количество элементарных машин в основной подсистеме"
set ylabel "Среднее время до отказа"
set logscale y
set grid

plot 'theta_lambda_0.000001_mu_1_m_1.txt' with lines title 'λ=1e-6', \
     'theta_lambda_0.0000001_mu_1_m_1.txt' with lines title 'λ=1e-7', \
     'theta_lambda_0.000010_mu_1_m_1.txt' with lines title 'λ=1e-5'