# Cheat Sheet

```bash
# Clone a remote repository
git clone https://github.com/Minhael/demo-git-tutorial
# Create new branch
git checkout -b feature main
# Switch branch
git checkout feature
# Stage files
git add .
# Commit changes
git commit -m "feat: task 1 hello world"
# Amend last commit
git commit --amend -m 'feat: task 1 hello world'
# Rewrite commit history
git rebase --interactive main
# Merge changes
git merge --no-ff feature
# Continue rebase after conflicts resolved
git rebase --continue
# Abort rebase
git rebase --abort
# Continue merge after conflicts resolved
git merge --continue
#abort rebase
git merge --abort
```