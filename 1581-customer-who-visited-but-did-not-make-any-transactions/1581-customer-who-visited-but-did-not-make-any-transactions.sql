select customer_id,count(*) as count_no_trans
from
Visits as V
LEFT join
Transactions as T
ON 
V.visit_id = T.visit_id
where T.transaction_id is null
group by customer_id
