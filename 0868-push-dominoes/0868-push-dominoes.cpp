class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
           std::vector<int> arr(n, 0);
        int force=0;
        for (int i = 0; i < n; i++) {
            if (dominoes[i] == '.') force=max(force - 1, 0);
            else if (dominoes[i] == 'L') force = 0;
            else force  = n; 
            arr[i]+=force;
        }
        force =0;
  
  
        
        // Propagate forces from 'L'
        for (int i = n - 1; i >= 0; i--) {
           if (dominoes[i] == 'L') force =n;
            else if (dominoes[i] == 'R') force = 0;
            else force  = max(force - 1, 0);
            arr[i]-=force;
        }
        
        // Resolve conflicts and convert array back to string
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) dominoes[i] = 'R'; // Positive force -> 'R'
            else if (arr[i] < 0) dominoes[i] = 'L'; // Negative force -> 'L'
            else dominoes[i] = '.'; // Zero force -> '.'
        }
        
        return dominoes;
    }
};
