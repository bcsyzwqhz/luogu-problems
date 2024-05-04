from cyaron import *

for i in range(1,101):
    data=IO(file_prefix="graph",data_id=i)
    n=randint(1,10000)
    m=randint(1,500000)
    s=randint(1,n)
    data.input_writeln(n,m,s)
    g=Graph.graph(n,m,weight_limit=100)
    data.input_writeln(g)
    data.output_gen("std.exe")

