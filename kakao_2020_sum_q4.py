def bfs(maze, i, j, N, M):
    pre_x = 0
    pre_y = 0
    visited = [] #방문한 노드
    queue = [[i, j]] #BFS로 사용될 큐
    distance = [[0 for _ in range(M)] for _ in range(N)] #해당 지점까지의 거리를 담는 리스트
    distance[0][0] = 0 #첫 시작은 1

    while queue:
        [i, j] = queue.pop(0) #BFS 큐에 넣어줌
        visited.append([i, j]) #방문 리스트에 쌓아줌

        #상하좌우 탐색

        if i < N-1 and maze[i+1][j] == 0 and [i+1, j] not in visited and [i+1, j] not in queue:
            queue.append([i+1, j])
            distance[i+1][j] = distance[i][j] + 100

            # if pre_x != i+1 and pre_y != j:
            #     distance[i+1][j] = distance[i][j] + 500
            #     pre_x = i
            #     pre_y = j
            # else:
            #     distance[i+1][j] = distance[i][j] + 100
            #     pre_x = i
            #     pre_y = j
        if j < M-1 and maze[i][j+1] == 0 and [i, j+1] not in visited and [i, j+1] not in queue:
            queue.append([i, j+1])
            distance[i][j+1] = distance[i][j] + 500
            # if pre_x != i+1 and pre_y != j:
            #     distance[i][j+1] = distance[i][j] + 500
            #     pre_x = i
            #     pre_y = j
            # else:
            #     distance[i+1][j] = distance[i][j] + 100
            #     pre_x = i
            #     pre_y = j
        if j > 0 and maze[i][j-1] == 0 and [i, j-1] not in visited and [i, j-1] not in queue:
            queue.append([i, j-1])
            distance[i][j-1] = distance[i][j] + 500
            # if pre_x != i+1 and pre_y != j:
            #     distance[i][j-1] = distance[i][j] + 500
            #     pre_x = i
            #     pre_y = j
            # else:
            #     distance[i][j-1] = distance[i][j] + 100
            #     pre_x = i
            #     pre_y = j
        if i > 0 and maze[i-1][j] == 0 and [i-1, j] not in visited and [i-1, j] not in queue:
            queue.append([i-1, j])
            distance[i-1][j] = distance[i][j] + 500
            # if pre_x != i+1 and pre_y != j:
            #     distance[i-1][j] = distance[i][j] + 500
            #     pre_x = i
            #     pre_y = j
            # else:
            #     distance[i-1][j] = distance[i][j] + 100
            #     pre_x = i
            #     pre_y = j

    return distance[N-1][M-1] #마지막 도착지의 거리를 반환


def solution(board):

    print(bfs(board,0,0,len(board), len(board)))
    tmp1 = int(bfs(board, 0, 1, len(board), len(board)))
    tmp2 = int(bfs(board, 1, 0, len(board), len(board)))
    if tmp1 < tmp2:
        answer = tmp1
    else:
        answer = tmp2
    return answer
