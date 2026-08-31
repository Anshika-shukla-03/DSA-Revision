select id,movie,description,rating
from Cinema 
where id%2 != 0 && description <> "boring"
ORDER BY rating DESC
