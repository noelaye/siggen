$filename = $ARGV[0];
@rest = split(/\./,$filename);
$newfilename = $rest[0]."\.";
print $newfilename;
system("./run -LIF $filename");
system("./map");
system("./slink $filename");
		system("./slice_driver -t $newfilename");
system("rm *.H *.V *.LIF *.LINK *.S *.T *.U *.K"); 
