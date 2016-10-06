# Declare sets
set Foods;
set Nutrients;

# Declare variables
var quantity{Foods} >= 0 integer;

# Declare parameters
param cost{Foods} >= 0;
param amount{Nutrients, Foods} >= 0;
param minimum{Nutrients} >= 0;

# Objective function
minimize obj: sum{j in Foods} cost[j]*quantity[j];

# Declare constraints
s.t. minnutr{i in Nutrients}:
sum{j in Foods} amount[i,j]*quantity[j] >= minimum[i];
end;
