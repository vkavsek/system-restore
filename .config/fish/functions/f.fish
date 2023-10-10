function f
    fff $argv
    cd (cat (set -q XDG_CACHE_HOME; and echo $XDG_CACHE_HOME; or echo $HOME"/.cache")"/fff/.fff_d")
end
