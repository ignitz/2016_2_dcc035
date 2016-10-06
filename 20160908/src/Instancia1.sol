Problem:    Prob9
Rows:       9
Columns:    7 (2 integer, 2 binary)
Non-zeros:  21
Status:     INTEGER OPTIMAL
Objective:  z = 7 (MINimum)

   No.   Row name        Activity     Lower bound   Upper bound
------ ------------    ------------- ------------- -------------
     1 cov[A,B]                    2             2               
     2 cov[C,D]                   12             4               
     3 cov2[A,B]                  -2           -14               
     4 cov2[C,D]                 -12           -12               
     5 maxt[A]                     5             1               
     6 maxt[B]                     7             2               
     7 maxt[C]                     7             3               
     8 maxt[D]                     4             4               
     9 z                           7                             

   No. Column name       Activity     Lower bound   Upper bound
------ ------------    ------------- ------------- -------------
     1 t[A]                        2             0               
     2 t[B]                        0             0               
     3 t[C]                        0             0               
     4 t[D]                        3             0               
     5 y[A,B]       *              0             0             1 
     6 y[C,D]       *              1             0             1 
     7 max_t                       7             0               

Integer feasibility conditions:

KKT.PE: max.abs.err = 0.00e+00 on row 0
        max.rel.err = 0.00e+00 on row 0
        High quality

KKT.PB: max.abs.err = 0.00e+00 on row 0
        max.rel.err = 0.00e+00 on row 0
        High quality

End of output
