from sys import argv

script,inputfile,outputfile=argv

inputx=(inputfile,'w')
output=(outputfile,'w')

for line in output:
    string1=inputx.readline()
    string2=output.readline()

    if(string1==string2):
         continue
    else:
        print("expected  " + string1+"     "+string2)
