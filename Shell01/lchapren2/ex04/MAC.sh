#!/bin/sh
ifconfig -a ether | grep "ether*" | tr -d '[[:blank:]]' | cut -d "r"f2 -
