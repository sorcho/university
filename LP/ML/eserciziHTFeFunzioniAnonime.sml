val lista = [1,2,3,4,5,100,7,8,9,10];

fun filter f [] = []
  | filter f (x::y) = if f(x) then (x::filter f y) else filter f y;

fun map f [] = []
  | map f (x::y) = f x :: map f y;

fun reduce f e [] = e
  | reduce f e (x::y) = f(x,reduce f e y);

let fun pari x = x mod 2 = 0 in filter pari lista end;

let
  val v = 10
  fun membro (x, acc) = x = v orelse acc;
in
  reduce membro false lista
end;

fun max (x, acc) = if x > acc then x else acc;

reduce max 0 lista;

val listaStr = ["a","b","c","d"];

fun concat (x, acc) = x ^ acc;

reduce concat "" listaStr;

(*FUNZIONI ANONIME*)

filter (fn x => (x mod 2) = 0) lista;

reduce (fn (x, acc) => x= 6 orelse acc) false lista;

reduce (fn (x,y) => x ^ y) "" listaStr;

reduce (fn (x,y) => if x > y then x else y) 0 lista;