#!/bin/bash

## Installing
sudo apt-get -y update
sudo apt-get -y upgrade
sudo apt-get install fish python3 ruby python3-pip tmux flatpak python3-neovim nodejs cmake libfreetype6-dev libfontconfig1-dev libxcb-xkb-dev g++ ruby-dev coreutils xdg-utils w3m-img xdotool curl util-linux
curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh
# neovim
wget https://github.com/neovim/neovim/releases/download/stable/nvim.appimage
mv nvim.appimage /usr/bin/nvim
CUSTOM_NVIM_PATH=/usr/bin/nvim
set -u
sudo update-alternatives --install /usr/bin/ex ex "${CUSTOM_NVIM_PATH}" 110
sudo update-alternatives --install /usr/bin/vi vi "${CUSTOM_NVIM_PATH}" 110
sudo update-alternatives --install /usr/bin/view view "${CUSTOM_NVIM_PATH}" 110
sudo update-alternatives --install /usr/bin/vim vim "${CUSTOM_NVIM_PATH}" 110
sudo update-alternatives --install /usr/bin/vimdiff vimdiff "${CUSTOM_NVIM_PATH}" 11

sudo npm install -g npm
sudo npm install -g neovim
cargo install alacritty
cargo install eza
pip3 install pynvim
pip3 install tasklib
gem install neovim

## Change default shell
chsh -s $(which fish)

## Copy files and folders
cp -r .config ~/
cp -r houdini19.5 ~/
cp .bashrc ~/

## Tmux settings
cp .tmux.conf.local ~/
cd
git clone https://github.com/gpakosz/.tmux.git
ln -s -f .tmux/.tmux.conf

#nvim settings
cd ~/.config
rm -rf nvim
git clone https://github.com/vkavsek/nvim_settings.git
mv nvim_settings nvim

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
