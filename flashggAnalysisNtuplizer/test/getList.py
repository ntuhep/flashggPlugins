import os
import sys

sys.tracebacklimit = 0

if __name__ == '__main__':

    loc = 'root://redirector.t2.ucsd.edu//store/user/smay/ttH/MicroAOD/RunII/'

    fout = open("listMicroAOD.py","w+")

    dlist = os.popen('gfal-ls '+loc).read().splitlines()

    for i in dlist:

        ds = i
    
        ds = ds.replace('/','')
        print ds
        ds = ds.replace('-','')
        ds = ds.replace('_','')

        fout.write(ds+' = [\n')

        flist = os.popen('gfal-ls '+loc+i).read().splitlines()
    
        for j in range(len(flist)):
        
            fout.write("'"+loc+i+flist[j]+"'")
            if j != len(flist)-1:
                fout.write(',\n')
            else:
                fout.write(']\n\n')
