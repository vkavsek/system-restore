#!/bin/bash

## Installing
sudo apt-get -y update
sudo apt-get -y upgrade
sudo apt-get -y install fish python3 ruby python3-pip tmux flatpak python3-neovim python3-pynvim nodejs cmake libfreetype6-dev libfontconfig1-dev libxcb-xkb-dev g++ ruby-dev coreutils xdg-utils w3m-img xdotool curl util-linux ninja-build gettext cmake unzip curl build-essential
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh

#nvim
sudo apt-get remove --auto-remove neovim
cd ~/Programs
git clone https://github.com/neovim/neovim
cd neovim && make CMAKE_BUILD_TYPE=Release
cd build && cpack -G DEB && sudo dpkg -i nvim-linux64.deb

npm install -g npm
npm install -g neovim
cargo install alacritty eza cargo-watch rg fd
sudo gem install neovim

## Change default shell
chsh -s $(which fish)

## Tmux settings
# cp .tmux.conf.local ~/
# cd
# git clone https://github.com/gpakosz/.tmux.git
# ln -s -f .tmux/.tmux.conf

#nvim settings
cd ~/.config
rm -rf nvim
git clone https://github.com/vkavsek/kickstart.nvim nvim


## FFF installation
cd
directory="Programs"
# Check if the directory exists
if [ -d "$directory" ]; then
	echo "Directory '$directory' already exists."
else
	# Create the directory if it doesn't exist
	echo "Directory '$directory' does not exist. Creating it..."
	mkdir "$directory"
fi
# Change to the directory
cd "$directory"
git clone https://github.com/dylanaraps/fff
cd fff
sudo make install
