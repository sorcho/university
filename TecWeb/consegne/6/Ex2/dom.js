"use strict";

function renderDOM(container, dom) {
    let root = document.getElementById(container);
    let nodeList = document.getElementById(dom);

    getNodes(root, nodeList);
}

function getNodes(root, target) {
    root.childNodes.forEach(node => {
        let newElement = checkNode(node)

        if (newElement != undefined){
            target.append(newElement);
        }

        if (node.hasChildNodes()) {
            let newList = document.createElement("ul");

            newElement.append(newList);
            getNodes(node, newList);
        }
    });
}

function checkNode(node) {
    let newElement;
    
    switch (node.nodeType) {
        case 1:
            newElement = createNode("element", node.tagName)
            break;
        case 3:
            if (node.data.trim().length > 0) {
                newElement = createNode("text", node.data)
            }
            break;
        case 8:
            newElement = createNode("comment", node.data)
            break;
    }

    return newElement;
}

function createNode(cssClass, content) {
    let newElement = document.createElement("li");

    newElement.classList.add(cssClass);
    newElement.innerHTML = content;

    return newElement;
}