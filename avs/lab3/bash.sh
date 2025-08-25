#!/bin/bash

docker run -d -p 3000:80 --name webserver nginx 

ab -n 30000 -c 1000 http://localhost:3000/ > ab_print.txt

docker stop webserver 
docker rm webserver 
docker network rm mynet