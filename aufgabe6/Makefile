#
# Makefile
# Aufgabe6
# Daniel Rill
# 18.06.2021

PACKAGES=lib bin

CD = cd

.PHONY: all clean

all clean: 
		for p in $(PACKAGES); do \
			($(CD) $$p && $(MAKE) $@); \
		done
