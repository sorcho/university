"use strict";

let movie = {
    title: String,
    director: {
        firstName: String,
        lastName: String,
        birthYear: Number,
        deathYear: Number
    },
    year: Number,
}

movie.title = "How to Train Your Dragon";
movie.director.firstName = "Chris";
movie.director.lastName = "Sanders";
movie.director.birthYear = 1962;
movie.director.deathYear = undefined;
movie.year = 2010;
movie.isPartOfASaga = true;

movie.describe = () => {
    if (movie.isPartOfASaga)
        console.log(`${movie.title} (${movie.year}) is directed by ${movie.director.firstName + " " + movie.director.lastName} and is part of a saga`);
    else
        console.log(`${movie.title} (${movie.year}) is directed by ${movie.director.firstName + " " + movie.director.lastName} and is NOT part of a saga`);
}

movie.describe();

function Movie(title, director, year) {
    this.title = title;
    this.director = director;
    this.year = year;
}

let httyd = new Movie("How to Train Your Dragon", "Chris Sanders", 2010);
let httyd2 = new Movie("How to Train Your Dragon 2", "Chris Sanders", 2014);
let httyd3 = new Movie("How to Train Your Dragon 3", "Chris Sanders", 2019);

delete(movie.isPartOfASaga)

function Trilogy(title, movie, movie2, movie3) {
    this.title = title;
    this.movie = movie;
    this.movie2 = movie2;
    this.movie3 = movie3;
}

let httydTrilogy = new Trilogy("How to Train Your Dragon Trilogy" , httyd, httyd2, httyd3);

console.log(httydTrilogy);

