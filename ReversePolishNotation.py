class Solution(object):
    def evalRPN(self, tokens):
        """
        :type tokens: List[str]
        :rtype: int
        """
        
        if not tokens:
            return 0
        
        stack = []
        for val in tokens:
            if val == '+':
                val1 = stack.pop()
                val2 = stack.pop()
                stack.append(val1 + val2)
            elif val == '-':
                val1  = stack.pop()
                val2 = stack.pop()
                stack.append(val2-val1)
            elif val == '*':
                val1  = stack.pop()
                val2  = stack.pop()
                stack.append(val2*val1)
            elif val == '/':
                val1 = stack.pop()
                val2  = stack.pop()
                if val1*val2 < 0:
                    stack.append(-(-val2//val1))
                else:
                    stack.append(val2//val1)
            else:
                stack.append(int(val))
        return stack[0]
