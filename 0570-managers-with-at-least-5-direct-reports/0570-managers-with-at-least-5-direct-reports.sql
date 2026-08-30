SELECT a1.name 
FROM
Employee as a1
JOIN
Employee a2
ON
a1.id = a2.managerId
GROUP BY a2.managerId
HAVING COUNT(*) >= 5
