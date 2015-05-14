git init 
git pull https://github.com/registercosmo/Cheatsheet.git
git remote add origin https://github.com/registercosmo/Cheatsheet.git
git add .
git status
git commit
git commit -m "comments"
git push -u origin master

// To pull changes
git pull origin master


// ABOUT CONFIGS
// Working with Config globally/locally
git config --global user.name="My username"
git config --gloabl user.email=myemail@example.com
git config --local user.name="My username"
git config --local user.email=myemail@example.com

// List all the configs
git config --list
// Remove the configs
git config --global --unset-all user.name
// Change the configs
git config --global --replace-all user.name "New User Name"


// ABOUT BRANCHING
// Create a new branch
git branch newBranchName
// Switch to a specific branch
git checkout newBranchName
// Create and switch to a new branch
git checkout -b AnotherNewBranch
// Check the corrent branch
git status
// Merge a specific branch to the current branch
git merge AnotherBranch


