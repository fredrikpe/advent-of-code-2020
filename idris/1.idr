import Data.String

removeMaybe : List (Maybe a) -> Either String (List a)
removeMaybe [] = Right []
removeMaybe (Nothing :: xs) = Left "error parsing input"
removeMaybe ((Just x) :: xs) = case removeMaybe xs of
                           Left s => Left s
                           Right ls => Right (x :: ls)

parseContent : String -> Either String (List Integer)
parseContent s = removeMaybe (map parseInteger (words s))

unique_pairs : Ord a => List a -> List (a, a)
unique_pairs l = [(x,y) | x <- l, y <- l, x < y]

sumPair : (Integer, Integer) -> Integer
sumPair (a, b) = a + b


solvePartOne : List Integer -> Either String Integer
solvePartOne ls = case find (\x => sumPair x == 2020) (unique_pairs ls) of
                       Nothing => Left "no solution"
                       Just (a, b) => Right (a * b)

main : IO ()
main = do file <- readFile "input/1.txt"
          case file of
               Right content => case parseContent content of
                                     Left err => printLn err
                                     Right numbers => printLn (solvePartOne numbers)
               Left err => printLn err

