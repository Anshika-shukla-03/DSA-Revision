select user_id,
concat(upper(LEFT(name, 1)), lower(RIGHT(name, length(name)-1))) as name
from Users
order by user_id