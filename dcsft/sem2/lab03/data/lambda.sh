# Построение графиков для θ при различных λ
gnuplot -e "set terminal png; set output 'theta_lambda.png'; \
set title 'Зависимость θ от λ'; \
set xlabel 'n'; set ylabel 'θ'; \
set yrange [0.95:1.20]; \
plot 'theta_lambda_0.000001_mu_1_m_1.txt' with lines title 'λ=1e-6', \
     'theta_lambda_0.0000001_mu_1_m_1.txt' with lines title 'λ=1e-7', \
     'theta_lambda_0.000010_mu_1_m_1.txt' with lines title 'λ=1e-5'"

# Построение графиков для T при различных λ
gnuplot -e "set terminal png; set output 'T_lambda.png'; \
set title 'Зависимость T от λ'; \
set xlabel 'n'; set ylabel 'T'; \
plot 'T_lambda_0.000001_mu_1_m_1.txt' with lines title 'λ=1e-6', \
     'T_lambda_0.0000001_mu_1_m_1.txt' with lines title 'λ=1e-7', \
     'T_lambda_0.000010_mu_1_m_1.txt' with lines title 'λ=1e-5'"