# purging

This page goes through the workflow to clean up a Git repository.

# Objective

This tutorial will clean up all local branches created in 
* [Commit Changes](../commit-changes/readme.md)
* [Resolve Conflicts](../resolve-conflicts/readme.md)
* [Rebase VS Merge](../rebase-vs-merge/readme.md)

After finishing this tutorial, you will able to 

* Delete legacy/merged branches
* Reset branch `HEAD` to specific commit

# Delete Branches

1. Delete local branches.
    ```bash
    git checkout main
    git branch -d rfc-a
    git branch -d rfc-b
    git branch -d major
    git branch -d minor-a
    git branch -d minor-b
    ```
    >Git should be able to stop you if you are dropping a unmerged branch. Think twice if you are going to `force-delete` them.

1. **Reset** `main` to `origin/main`.
    ```bash
    git reset --hard a4ce8733
    # Same as git reset --hard origin/main
    ```

# Appendix - Modes of Reset

* Soft - Keep all changes, commited, staged and unstaged.
* Mixed - Keep unstaged changes in working copy but discard all commited changes.
* Hard - Discard all changes and the branch is the exact copy of the commit.

> Think thrice before resetting anything. You are probably losing commits on the branch being reset. Do backup before you familiar with **Reset**.