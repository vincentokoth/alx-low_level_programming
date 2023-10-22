#!/bin/bash

# Define the branch
BRANCH="main"

# Loop through each file provided as argument

for file in "$@"; do
	# Check if the file exists
	if [ -e "$file" ]; then
		# Prompt user for commit message
		read -p "Enter commit message for $file: " COMMIT_MESSAGE

		# Add the file to the staging area
		git add "$file"

		# Commit the changes with the specified message
		git commit -m "$COMMIT_MESSAGE"
	else
		echo "File '$file' not found. Skipping..."
	fi
done

# Push the commits to the remote repository
git push origin $BRANCH
