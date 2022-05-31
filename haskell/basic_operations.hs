module BasicMathematicalOperations (basicOp) where

basicOp :: Char -> Int -> Int -> Int
basicOp '+' x y = x + y
basicOp '-' x y = x - y
basicOp '/' x y = x `div` y
basicOp '*' x y = x * y
basicOp _ _ _ = error "Invalid operation"