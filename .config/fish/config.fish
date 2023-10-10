if status is-interactive
    # Commands to run in interactive sessions can go here
end

set -x DESK '/run/media/vk/H_ssd/HOUDINI/HoudiniDESKTOP/'
set -x PROGR "/run/media/vk/H_ssd/Programs/"
set -x EDITOR 'nvim'

pushd /opt/hfs19.5.716/
source houdini_setup_fish
popd
