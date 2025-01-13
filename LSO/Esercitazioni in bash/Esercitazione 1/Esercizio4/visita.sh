#!/bin/bash

#visita tutti i file della directory corrente
#Per ogni file determina il suo tipo

#Se il file è leggibile ed è un file ".txt", ".doc", ".sh" e ".c",
#chiede all'utente se vuole vedere il suo contenuto, mostrando solo le ultime tre righe

#Se il file è una sottodirectory,
#chiede se si vuole visitare anche la sottodirectory

#per ogni file incontrato, chiede se lo si vuole rimuovere prima di passare a gestire il prossimo file nella directory corrente

getRegularFiles () {
    dir=$1;
    ls -l $dir | grep "^-" | awk '{print $9}';
}

getSubDirectories () {
    dir=$1;
    ls -l $dir | grep "^d" | awk '{print $9}';
}

isFileEligible () {
    file=$1;
    temp=$(echo $file | egrep ".(txt|doc|sh|c)$");
    if [ "$temp" != "" ]
    then 
    	echo "false";
    else 
        echo "true";
    fi
}

askToViewFile () {
    fileName=$1;

    echo "view $fileName content?";
    read input;
    if [ $input == "y" ]
    then
        tail -n 3 "$fileName";
    fi
}

askToDeleteFile () {
    fileName=$1;

    echo "delete $fileName?";
    read input;
    if [ $input == "y" ]
    then 
        rm "$fileName";
    fi
}

askToVisit () {
    dir=$1;

    echo "view $dir content?";
    read input;
    if [ $input == "y" ]
    then 
        visit $dir;
    fi 
}

visit () {
    currentDir=$1;

    fileList=$(getRegularFiles $currentDir);
    for file in $fileList;
    do
        if [ -r "$currentDir/$file" ] && [ $(isFileEligible $file) ]
        then
            askToViewFile $currentDir/$file;
            echo "";
            askToDeleteFile $currentDir/$file;
        fi
    done

    subDirs=$(getSubDirectories $currentDir);
    for dir in $subDirs 
    do 
        askToVisit "$currentDir/$dir";
    done
}

visit ".";