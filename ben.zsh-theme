ZSH_THEME_GIT_PROMPT_PREFIX="%{$fg_bold[blue]%}git:(%{$fg[red]%}"
ZSH_THEME_GIT_PROMPT_SUFFIX="%{$reset_color%} "
ZSH_THEME_GIT_PROMPT_DIRTY="%{$fg[blue]%}): %{$FG[196]%}%1{X%}"
ZSH_THEME_GIT_PROMPT_CLEAN="%{$fg[blue]%}): %{$FG[047]%}%1{ok%}"

base_prompt="%{${reset_color}%}%F{088}%n%F{168}@%F{176}%m%F{011}|%F{155}%c"
post_prompt="%{${reset_color}%}%F{154}=>%f"

PROMPT="${base_prompt} \$(git_prompt_info)${post_prompt}"
unset base_prompt post_prompt
