Problem:    Prob9
Rows:       17
Columns:    12 (5 integer, 5 binary)
Non-zeros:  43
Status:     INTEGER OPTIMAL
Objective:  z = 12 (MINimum)

   No.   Row name        Activity     Lower bound   Upper bound
------ ------------    ------------- ------------- -------------
     1 cov[A,B]                   17             5               
     2 cov[C,F]                    6             2               
     3 cov[C,E]                    4             4               
     4 cov[E,F]                    2             2               
     5 cov[F,D]                    2             2               
     6 cov2[A,B]                 -17           -17               
     7 cov2[C,F]                  -6           -21               
     8 cov2[C,E]                  -4           -21               
     9 cov2[E,F]                  -2           -20               
    10 cov2[F,D]                  -2           -22               
    11 maxt[A]                    12             7               
    12 maxt[B]                     5             5               
    13 maxt[C]                     4             3               
    14 maxt[D]                    12             2               
    15 maxt[E]                     8             4               
    16 maxt[F]                    10             2               
    17 z                          12                             

   No. Column name       Activity     Lower bound   Upper bound
------ ------------    ------------- ------------- -------------
     1 t[A]                        0             0               
     2 t[B]                        7             0               
     3 t[C]                        8             0               
     4 t[F]                        2             0               
     5 t[E]                        4             0               
     6 t[D]                        0             0               
     7 y[A,B]       *              1             0             1 
     8 y[C,F]       *              0             0             1 
     9 y[C,E]       *              0             0             1 
    10 y[E,F]       *              0             0             1 
    11 y[F,D]       *              0             0             1 
    12 max_t                      12             0               

Integer feasibility conditions:

KKT.PE: max.abs.err = 0.00e+00 on row 0
        max.rel.err = 0.00e+00 on row 0
        High quality

KKT.PB: max.abs.err = 0.00e+00 on row 0
        max.rel.err = 0.00e+00 on row 0
        High quality

End of output
