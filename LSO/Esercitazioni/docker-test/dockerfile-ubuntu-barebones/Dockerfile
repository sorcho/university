FROM ubuntu:latest

# Imposta la directory di lavoro
WORKDIR /app

# Copia il file nella directory di lavoro
COPY file.txt .

# Esegui aggiornamento e installazione in un unico comando
RUN apt update && apt upgrade -y && apt install -y nano && apt clean

# Comando predefinito per eseguire il contenitore
CMD cat file.txt && bash

