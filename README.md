# `Git`ing Started!

We will follow a very simple procedure to maintain our repository. Originally the repository had only one branch: `master`. We would like to keep this branch as stable, bug-free and ready to use. That means we will develop our code on a separate branch and once the code is bug-free, tested and ready, we will merge that into `master` branch.

I created a new branch named `basics`. To see all branches, go to the project root directory (on terminal) and use:
```
git branch -a
```
The branch that starts with an `*` and is usually green in color, is your current working branch. Initially the `master` branch should be the working branch.
The `-a` displays all branches - local and remote. If you do not use `-a`, it displays only the local branches (_give it a try_). It is required as the new branch is not yet available locally on your pc.

Now, to get the new branch `basics` and files:
```
git fetch --all
git checkout basics
```
You can verify if you got a new local branch by `git branch`. You might notice that the working branch is now `basics`. You may switch to a different working branch by `git checkout <branch-name>`, eg: `git checkout master`.

Once you have a local branch, you can update it using `git pull`. You may update all local branches (instead of only the current working branch) by `git pull --all`.

After completing your code (or even midway), you may want to commit your code to git to save your progress. To see the files you modified/created, use `git status`.

Stage files to be committed.
* `git add fileName` to add a specific file to stage
* `git add .` to add file changes (new and modified) in current directory to stage
* `git add -A` to add all file changes (new, modified and deleted) to stage


You can use `git add` multiple times and check using `git status`. 
You can remove a file from stage using `git reset fileName` or clear the stage using `git reset`.

Once the files in the staging area is ready, we commit them.

```
git commit -m "a meaningful message to understand the contribution in that commit"
```
If you check `git status`, it should be clear of the files you staged.

Now, update the remote repository at github: `git push`

Check all commits using `git log`


___

# Booting Basics
This is created as a C++ project. However, it is mostly plain C for now.

There are three source files:
* `myMain.cpp` 
* `basics.h`
* `basics.cpp`

The places where you will code is marked with `// TODO`. For now there are two functions in `basics.cpp` whose definition is yet to be coded. The description of those functions are in the respective header file `basics.h` where those functions are declared. 
`myMain.cpp` can be viewed as an external file which tries to use the functions declared in `basics.h`.

We shall use [CMake](https://cmake.org/) to configure the build system.

Make sure you are on the branch `basics` and on the root directory of the project. Create a new folder `build` using command `mkdir build`. The project root directory should now contain:
```
basics.cpp  
basics.h  
build\
CMakeLists.txt  
myMain.cpp  
README.md
```

Go though the file `basics.h` and implement the required code in `basics.cpp`.

From inside build directory (`cd build`), build the program.
```
cmake ..
make
```
Run the binary executable `./SimpleCode-bin`

In case `SimpleCode-bin` is not an executable, you can make it executable by:
```
chmod +x SimpleCode-bin
```
Once you are done, commit and push to github.  :+1:
