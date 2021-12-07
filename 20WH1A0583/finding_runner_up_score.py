'''Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given  scores. Store them in a list and find the score of the runner-up.

Input Format
The first line contains . The second line contains an array   of  integers each separated by a space.

Output Format
Print the runner-up score.'''

def runner_up_score(scores : list)-> int:	
    return sorted(set(scores))[-2]


scores_list = list(map(int, input().split()))

         
print(runner_up_score(scores_list))
