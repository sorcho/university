datatype binaryTree = vuoto | ramo of int * binaryTree * binaryTree;

val T = ramo(1, ramo(2, ramo(4, vuoto, vuoto), vuoto), ramo(3, vuoto, vuoto));

fun size (vuoto) = 0
  | size(ramo(_,l,r)) = size l + size r + 1;

size T;