set J;
set E, dimen 2;

param d{J}, >=0;
param M;

var t{i in J}, >=0;
var y{(i,j) in E}, binary; 
var max_t, >=0;

s.t. cov{(i,j) in E}:
	t[i] >= t[j] + d[j]  - y[i,j]*M;

s.t. cov2{(i,j) in E}:
	t[j] >= t[i] + d[i]  -  (1-y[i,j])*M;

s.t. maxt{i in J}:
	max_t >= t[i] + d[i];

minimize z: max_t; 
end;
