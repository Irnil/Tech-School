program labirint;
uses crt;
type field=array[1..10, 1..10] of char;
var  lab:field;
     x,y,kolvo,n,code:integer;
     str_n:string;

procedure printlab(lab:field);
var x,y:integer;
begin
  for x:=1 to n do
    begin
      for y:=1 to n do
        begin
          if (lab[x,y]='*') then
            begin
              textcolor(red);
              write(lab[x,y]);
            end
          else
            begin
            textcolor(white);
            write(lab[x,y]);
            end;
        end;
        writeln;
    end
end;

procedure go(lab:field; x,y:integer);
begin
  if (lab[x,y]=' ') then
    begin
      lab[x,y]:='*';
      if (x=1) or (x=n) or (y=1) or (y=n) then
        begin
          inc(Kolvo);
          textcolor(green);
          writeln('ВЫход номер ', kolvo);
          writeln;
          printlab(lab);
          readln;
        end
      else
        begin
          go(lab, x+1,y);
          go(lab, x, y+1);
          go(lab, x-1, y);
          go(lab, x, y-1);
        end;
        lab[x,y]:=' ';
        writeln;
    end;
end;

begin
repeat
  kolvo:=0;
  textbackground(black);
  clrscr;
  window(5,2,35,20);
  textbackground(black);
  clrscr;
  textcolor(white);
  repeat
    write ('ВВедите размер матрицы ');
    readln (str_n);
    val(str_n,n,code);
    if (code<>0) or (n<0) or (n>10) then
      writeln('Ошибка');
  until (code=0) and (n>0) and (n<10);
  writeln ('ВВедите лабиринт') ;
  for x:=1 to n do
    begin
      for y:=1 to n do
      read(lab[x,y]);
      readln;
    end;
  window (40,2,70,20);
  textbackground(black);
  clrscr;
  go (lab,n div 2+1, n div 2+1);
  if (kolvo=0) then
    writeln('Выхода Нет!');
  writeln('Esc-выход/Y-повтор');
  until (readkey=#27);
end.