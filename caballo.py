def paseo_caballo(n):
    q=False
    t=[[0 for x in range(n)]for y in range(n)]
    h=[2,1,-1,-2,-2,-1,1,2]
    v=[1,2,2,1,-1,-2,-2,-1]
    s=[1,2,3,4,5,6,7,8]
    for i in range(n):
            for j in range(n):
                t[i][j]=0
    t[0][0]=1
    tenta(2,1,1,q)
    if(q):
        for i in range(n):
            for j in range(n):
                sys.stdout.write(str(t[0][0])); 
            print(" ");       
    else:
        print("No hay solucion")
######################MAIN##########################