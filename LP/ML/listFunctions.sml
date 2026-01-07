val L = [1,2,3,4,5,6,7,8,9,10];

fun head [] = ~1
  | head (x::_) = x;

fun tail [] = [~1]
  | tail (_ :: x) = x;

fun nth ([], _) = ~1
  | nth (x::y, n) = if n = 0 then x else nth(y, n-1);

fun last [] = ~1
  | last (v::x) = if x = nil then v else last x;

fun member (x::y, v) = if v=x then true else member (y,v)
  | member ([],v) = false;

fun inserimentoCoda ([], v) = [v]
  | inserimentoCoda (x::y, v) = x :: inserimentoCoda(y,v);

fun concat ([], x) = x
  | concat (x::y, v) = x :: concat(y,v);

fun reverse [] = []
  | reverse (x::y) = concat(reverse(y), [x]);

head L;
tail L;
nth (L,2);
nth (L,0);
nth (L,9);
nth (L,10);
last L;

member(L,2);
member(L,11);

inserimentoCoda(L,100);

val LL = [11,12,13];

concat([], LL);
concat(L,LL);

reverse [];
reverse LL;