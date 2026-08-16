class Solution:
    def isValid(self,board,n,i,j):
        row=len(board)
        col=len(board[0])
        for r in range(row):
            if r==i:
                continue
            if board[r][j]==n:
                return False
        for c in range(col):
            if c==j:
                continue
            if board[i][c]==n:
                return False
        startRow=i//3*3
        startCol=j//3*3
        for s in range(startRow,startRow+3):
            for t in range(startCol,startCol+3):
                if s==i and t==j:
                    continue
                if board[s][t]==n:
                    return False
        return True
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row=len(board)
        col=len(board[0])
        for i in range(row):
            for j in range(col):
                if board[i][j]!='.':
                    if self.isValid(board,board[i][j],i,j):
                        continue
                    return False
        return True