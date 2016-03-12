git init 
git pull https://github.com/registercosmo/Cheatsheet.git
git remote add origin https://github.com/registercosmo/Cheatsheet.git
git add .
git status
git commit
git commit -m "comments"
git push -u origin master

// To pull changes to workspace (= fetch + merge)
git pull origin master 
// To fetch lastest changes from other developers to local repo
git fetch <remote_name>
// To merge the local repo and the workspace
git merge origin master

// To untrack a file
git rm --cached <file_name>

// Change URL for a remote repo
git remote set-url origin git://new.url.here
// Check remote configurations
git remote -v

// ABOUT CONFIGS
// Working with Config globally/locally
git config --global user.name My username
git config --gloabl user.email=myemail@example.com
git config --local user.name My username
git config --local user.email=myemail@example.com

// List all the configs
git config --list
// Remove the configs
git config --global --unset-all user.name
// Change the configs
git config --global --replace-all user.name "New User Name"


// ABOUT BRANCHING
// Fetch remote branches from Github
git remote add origin <ULR> // we have to set origin first
git pull // It will pull(fetch + merge) all available branches from Github
// Check info for all available branches
git branch
// Create a new branch
git branch  <new_branch_name>
// Switch to a specific branch
git checkout  <new_branch_name>
// Create and switch to a new branch
git checkout -b <new_branch_name>
// Check the current branch
git status
// Merge a specific branch to the current branch
git merge <another_branch_name>
// Delete a branch locally
git branch -d <branch_name>
// Delete a branch remotely
git push origin :<branch_name>


// About DIFF
// Inspect all the modifications between workspace and stage
git diff
// Inspect all the modifications between stage and local repo
git diff --cached

// About resolving conflicts (add it back)
git add <resolved file>




