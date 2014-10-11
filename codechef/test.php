<?php
$handle = fopen ("php://stdin","r");
$t=fgets($handle);
$c = 0;
while($c < $t){
$line1 = fgets($handle);
$line2 = fgets($handle);
$line3 = fgets($handle);
$data   = preg_split('/\s+/', $line3);
$a = (int)$data[0];
$b = (int)$data[1];
$k = (int)$data[2];
$res=levenshtein($line1,$line2,$a,$b,$a);
if($res > $k) echo "-1\n";
else echo "$res\n";
$c = $c+1;
}
?>
