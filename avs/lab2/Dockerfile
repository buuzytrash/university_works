FROM ubuntu:latest

COPY my_program.cpp /app/
COPY hello.txt /app/
WORKDIR /app/

RUN apt-get update && apt-get install -y g++
RUN g++ -o /app/my_program /app/my_program.cpp

CMD ["/app/my_program", "/app/hello.txt"] 