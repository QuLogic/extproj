project('libidn', 'c', version: '1.41', meson_version : '>=0.63.0')

mod = import('unstable-external_project')

proj = mod.add_project('configure', verbose: true)

libidn_dep = proj.dependency('idn')
meson.override_dependency('libidn', libidn_dep)
