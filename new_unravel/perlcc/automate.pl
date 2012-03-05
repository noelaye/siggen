$filename = $ARGV[0];
@rest = split(/\./,$filename);
$newfilename = $rest[0]."\.";
print $newfilename;
system("./run -LIF $filename");
system("./map");
system("./slink $filename");
open(SLICE,"slice.txt");
$i=0;
while ( $slice = <SLICE> ) {
	$process=0;
	if($i==0) {
#print "Initial\n";
		system("./slice_driver -t $newfilename");
	}
	else {
		open(SIG,"signature.txt");
		@no=split(/ /,$slice);
		while($sig = <SIG>) {
			@numbers = split(/ /,$sig);
			push(@Num,@numbers);
			foreach (@Num) {
				if($_ == $no[1] - 1) {
					$process=1;
					goto label1;
				}
			}#end of foreach
		}# while end
		close(SIG);
label1:
		if($process!=1){
			open(SLICE1, ">slice1.txt");
			print SLICE1 $slice;
			close(SLICE1);
			system("./slice_driver -t $newfilename");
		}
	} #end else
	$i++;

} #end while
close(SLICE);
system("rm *.H *.V *.LIF *.LINK *.S *.T *.U *.K"); 
