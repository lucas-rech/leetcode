'''
    Link do desafio: https://leetcode.com/problems/zigzag-conversion/description/
    Autor da Solução: Lucas Rech
    
    Data de criação: 30/07/2025
'''
class Solution:
    def convert(self, s: str, num_rows: int) -> str:
        #retorna a própria string se a qtd de linhas for 1
        if num_rows == 1:
            return s
        
        #Cria um array com 4 string nulas (ex.: {"", "", "", ""})
        rows = [''] * num_rows
        
        #Linha que estará sendo observada dentro do loop
        current_row = 0
        
        #Responsável pela lógica de contar as linhas da matriz
        going_down = False
        
        for char in s:
            rows[current_row] += char
            
            #Se a linha atual for a primeira ou a última, muda a ordem/percurso entre ^ ou ⌄
            if current_row == 0 or current_row == num_rows - 1:
                going_down = not going_down
            if going_down:
                current_row +=1
            else:
                current_row -=1
        
        return ''.join(rows)
            

#REmover caso o código seja executado na plataforma leetcode
if __name__ == "__main__":
    print(Solution.convert(Solution, s="PAYPALISHIRING", num_rows=3))
    
    
            
            
            