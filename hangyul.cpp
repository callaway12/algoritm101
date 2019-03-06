Make a i by j 2-d array V which has all possible SoPRK value of inputs
Vij has a SoPRK value of ai, bi

OPT(i,j)
array m[i][j]
if array m[i][j] is defined
   return m[i][j];

else
   if(ai>=ai-1 && bi>=bi-1)
      OPT(i,j) = Max(Vij+OPT(i-1,j-1) , Max(OPT(i-1,j), OPT(i,j-1)))
      m[i][j] = OPT(i,j)
   else
      find first ak<=ai(0<k<i-1), bk<=bi(0<k<i-1)
      OPT(i,j) = Max(Vij +OPT(k,j-1), OPT(i-1,j-1), OPT(i, j-1) OPT(i-1,j))
      m[i][j] = OPT(i,j)

return m[i][j]
