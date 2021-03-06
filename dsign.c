/* dsign(x) - sign of a real number.
              Argument must be a double
              -1.0 returned if x is negative
               1.0 returned if x is positive
               0.0 returned if x is zero.
*/
double dsign(x)
double x;
{
   if ( x == 0.0 )
      return(x);

   if ( x < 0.0 )
      return(-1.0);

   return(1.0);
}


