# Write your MySQL query statement below
select stock_name  , 
SUM(
    case 
        when operation  = 'BUY' then -price
        when operation = 'sell' then price 
    end
) As capital_gain_loss
from stocks 
group by stock_name ; 