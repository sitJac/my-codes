/*
 * @lc app=leetcode.cn id=1138 lang=c
 *
 * [1138] 字母板上的路径
 */

// @lc code=start
char * alphabetBoardPath(char * target) {
    int len = strlen(target);
    char *res = (char *)malloc(sizeof(char) * 10 * len + 1);
    int pos = 0, cx = 0, cy = 0;
    for (int i = 0; i < len; i++) {
        char c = target[i];
        int nx = (c - 'a') / 5;
        int ny = (c - 'a') % 5;
        if (nx < cx) {
            for (int j = 0; j < cx - nx; j++) {
                res[pos++] = 'U';
            }
        }
        if (ny < cy) {
            for (int j = 0; j < cy - ny; j++) {
                res[pos++] = 'L';
            }
        } 
        if (nx > cx) {
            for (int j = 0; j < nx - cx; j++) {
                res[pos++] = 'D';
            }
        }
        if (ny > cy) {
            for (int j = 0; j < ny - cy; j++) {
                res[pos++] = 'R';
            }
        }  
        res[pos++] = '!';
        cx = nx;
        cy = ny;
    }
    res[pos] = '\0';
    return res;
}
// @lc code=end

