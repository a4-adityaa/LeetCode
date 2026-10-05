# Write your MySQL query statement below
SELECT user_id, email
FROM users
WHERE email REGEXP '^[a-z0-9_]+@[^@0-9]+\\.com$' 
ORDER BY user_id