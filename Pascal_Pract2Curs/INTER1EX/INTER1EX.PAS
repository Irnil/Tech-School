program interpretator;
uses crt;
type PozInt=0..MaxInt;
var Line:string;
    A,B:pozint;
    znak,zznak,Znak_r:char;
    flag:Boolean;
    rezult:real;
    m:byte;
    value_a,value_b:integer;

function cifra (c:char):Boolean;
begin
  Cifra:=(c>='0') and (c<='9');
end;

function sintax(stroka:string):boolean;
  var integ:integer;
      st:string;
begin
  integ:=0;
  for integ:=1 to length(stroka) do
    begin
      if not ((stroka[integ]>='0') and (stroka[integ]<='9')
        or (stroka[integ]='+')
        or (stroka[integ]='-')
        or (stroka[integ]='*')
        or (stroka[integ]='=')
        or (cifra(stroka[integ]))) then
        begin
          writeln('����-� �� 墠⠥�');
          sintax:=false;
          exit;
        end
      else
        sintax:=true;
        exit;
    end;
    m:=m+1;
    if(stroka[m]>='0') and (stroka[m]<='9') then
      st:=st+stroka[m]
    else
      begin
        sintax:=false;
        exit;
      end;
end;

function semantika (stroka:string):boolean;
var integ:integer;
begin
  integ:=1;
  if cifra(stroka[integ]) then
    begin
      while cifra(stroka[integ]) do
      integ:=integ+1;
    end;
  begin
      if (stroka[integ]='+') or (stroka[integ]='-') or (stroka[integ]='*')  then
      begin
        integ:=integ+1;
        if cifra(stroka[integ]) then
          begin
            while cifra(stroka[integ]) do
            integ:=integ+1;
          end
        else
          begin
            semantika:=false;
            exit;
          end;
      end
      else
        begin
          semantika:=false;
          exit;
        end;
 if (stroka[integ]<>'=') then
    begin
      semantika:=false;
      exit;
    end;
    if (stroka[integ]='=') and not (integ=length(stroka)) then
    begin
      semantika:=false;
      exit;
    end;
  end;
end;

procedure operand(stroka:string; A,B:PozInt; Z:char; Flagg:Boolean);
var p,q:string;
    i,code:integer;

function error (s:string):boolean;
const lim='32767';
begin
  if length(s)>5 then
    error:=true
  else
    if length(s)<5 then
      error:=false
    else
      error:=s>lim
end;
begin
  flag:=true;
  i:=1;
  q:='';
  while cifra(stroka[i]) do
    begin
      q:=q+stroka[i];
      i:=i+1;
    end;
  if error(q) then
    begin
      flag:=false;
      exit;
    end;

    Znak_r:=stroka[i];


    i:=i+1;
    p:='';
    while cifra(stroka[i]) do
      begin
        p:=p+stroka[i];
        i:=i+1;
      end;
    if error(p) then
      begin
        flag:=false;
        exit;
      end;
    val(q,value_a,code);
    val(p,value_b,code);
end;

procedure calc(A,B:pozint; Znak:char; var Rez:real; var Flag:Boolean);
var x,y,z:real;
begin
  flag:=true;
  y:=a;
  z:=b;

  case znak of
  '+':rez:=y+z;
  '-':rez:=y-z;
  '*':rez:=y*z;
  end;
    if abs(rez)>maxint then
    begin
      flag:=false;
      exit;
    end;
  rez:=round(rez);
end;

procedure deleter(str:string);
var i:byte;
begin
  line:='';
  for i:=1 to length(str) do
    begin
      if (str[i] <> ' ') then line:=line+str[i];
    end;
end;


begin
  repeat
  clrscr;
  writeln ('������ ��ࠦ����');
  read (line);
  deleter(line);
  if not sintax(Line) then
    writeln ('�������⨬� ᨬ���')
  else
    if not semantika(Line) then
      writeln('����୮� ��ࠦ����')
    else
      begin
        operand(line,A,B,znak_r,Flag);
        if not Flag then
          writeln ('���誮� ����訥 ���࠭��')
        else
          begin
            Calc(value_A,value_B,Znak_r,rezult,Flag);
            if not flag then
              writeln('����让 �������')
            else
              writeln('=', rezult:0:0);
          end;
      end;
    readln;
    write ('y - ����� / n - ��室... ');
    znak:=readkey;
  until (znak='n');
  read;
end.