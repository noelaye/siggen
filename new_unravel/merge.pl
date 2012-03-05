open(FILE,$ARGV[0]);
open(FILE1,$ARGV[1]);
$i=1;
while($line = <FILE>){

chomp($line);

$hash{$i++}=$line;
}

close(FILE);

$i=0;
while($line = <FILE1>){
if($i==0) {
chomp($line);
@temp = split(/ /,$line);
push(@array,$temp[1]);
$filename = "slice_".$temp[0];
$i++;
}
else {
@temp = split(/ /,$line);
push(@array,@temp);
}
}
open(WRITE,">$filename");
@array = sort {$a <=> $b} @array;
foreach (@array){
#print $_."," if($_ ne "");
print WRITE $hash{$_}."\n" if($_ ne "");
}

close(WRITE);
close(FILE1);
