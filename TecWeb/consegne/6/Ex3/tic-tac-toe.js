"use strict";

function setupGame(id) {
    document.getElementById(id).append(createGrid());
    
    let tds = document.getElementsByTagName("td");
    showTurn();

    for (let i = 0; i < tds.length; i++) {
        changeColor(tds[i]);
    }

    checkWinner();
}

function createGrid() {
    let grid = document.createElement("table");

    for (let i = 0; i < 3; i++) {
        let tr = document.createElement("tr");
        for (let j = 0; j < 3; j++) {
            let td = document.createElement("td");
            tr.append(td);
        }
        grid.append(tr);
    }

    return grid;
}

function changeColor(td) {
    const player = document.getElementById("player")

    td.addEventListener("click", (event) => {        
        if (td.style.backgroundColor !== "") return;

        const playerColor = player.style.color;

        td.style.backgroundColor = playerColor;

        player.style.color = (playerColor === "red") ? "blue" : "red";
        
        checkWinner(event);
    })
}

function showTurn() {
    let turn = document.createElement("p");

    turn.innerHTML = `It's <em style="color:red" id="player">player</em> turn`;

    document.getElementById("tic-tac-toe").before(turn);
}

function checkWinner(event) {
    let row = event.target.parentNode;
    let column = event.target;
    let cellColor = column.style.backgroundColor;
    let rowIndex = row.rowIndex;
    let columnIndex = column.cellIndex;
    let matrix = [[],[],[]];
    let winner = -1;

    matrix[rowIndex][columnIndex] = cellColor;

    for (let i = 0; i < 3; i++) {
        for (let j = 0; j < 3; j++) {
            console.log(matrix[i][j]);
        }
    }
}