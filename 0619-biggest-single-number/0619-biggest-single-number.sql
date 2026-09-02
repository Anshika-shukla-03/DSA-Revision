select (CASE WHEN COUNT(num) = 1 THEN num ELSE NULL END) AS num

from MyNumbers
group by num

ORDER BY num desc
LIMIT 1