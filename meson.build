project('ext-proj-test', 'c', meson_version : '>=0.63.0')

subproject('libidn')

executable('ext-proj-test', 'main.c', dependencies: dependency('libidn'))
