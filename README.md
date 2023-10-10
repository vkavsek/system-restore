1. Run the SETUP SCRIPT
2. Install JetBrains Mono font for correct Alacritty rendering.
3. Change to FISH and add Cargo and potentially other directories
		**Must be in FISH**:
		`set -U fish_user_paths ~/.cargo/bin $fish_user_paths`
		this commands adds ^~/.cargo/bin^ to $PATH enviroment variable
4. Log out and login - this will enable Fish as default shell.
5. ^houdini_setup_fish^ should be copied to the directory where houdini is installed, 
   and changed for each edition.
