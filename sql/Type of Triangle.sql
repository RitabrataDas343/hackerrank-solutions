SELECT
    CASE 
        WHEN A = B AND B = C THEN "Equilateral" 
        WHEN ((A = B) OR (B = C) OR (A = C)) AND ((A + B > C) AND (A + C > B) AND (B + C > A)) THEN "Isosceles" 
        WHEN (A + B <= C) OR (A + C <= B) OR (B + C <= A) THEN "Not A Triangle" 
        ELSE "Scalene" 
    END 
FROM TRIANGLES;