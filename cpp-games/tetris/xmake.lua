add_rules("mode.debug", "mode.release")

target("tetris")
	set_kind("binary")
	add_files("tetris.cpp")
	add_syslinks("ncurses")
	-- add_packages("ncurses")
