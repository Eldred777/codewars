import Data.List (sort)

partitionByValue :: [Int] -> [[Int]]
partitionByValue [] = []
partitionByValue xs = taken : partitionByValue ( drop (length taken) sorted )
    where
        sorted = sort xs
        taken = takeWhile (== head sorted) sorted

partitionToTuples :: [[Int]] -> [(Int, Int)]
partitionToTuples = map (\x -> (length x, head x))

findMax :: [Int] -> Int
findMax xs = snd $ foldr maxFst (-1, -1) $ (partitionToTuples . partitionByValue) xs
    where
        maxFst :: Ord a => (a, b) -> (a, b) -> (a, b)
        maxFst xs@(x, _) ys@(y, _)
          | x < y     = ys
          | x > y     = xs
          | otherwise = xs

findOdd :: [Int] -> Int
findOdd xs = snd . head $ filter (odd . fst) $ (partitionToTuples . partitionByValue) xs

-- >>> w = [1,1,1,2,3,3]
-- >>> x = partitionByValue w
-- >>> x 
-- >>> y = partitionToTuples x
-- >>> y 
-- >>> findOdd w
-- [[1,1,1],[2],[3,3]]
-- [(3,1),(1,2),(2,3)]
-- 1

-- >>> findOdd [20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5] -- 5 
-- >>> findOdd [1,1,2,-2,5,2,4,4,-1,-2,5] -- -1 
-- >>> findOdd [20,1,1,2,2,3,3,5,5,4,20,4,5] -- 5 
-- >>> findOdd [10] -- 10 
-- >>> findOdd [1,1,1,1,1,1,10,1,1,1,1] -- 10
-- 5
-- -1
-- 5
-- 10
-- 10
