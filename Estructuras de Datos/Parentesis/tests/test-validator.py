#!/usr/bin/python
# -*- coding: utf-8 -*-

# no-self-use
# pylint: disable=R0201

import sys
import re
import unittest
import parsy as p

from omegaup.validator import validatortest


class Test(unittest.TestCase):

    def test(self):
        inputParser = p.regex("[()]").times(1, 10**6) << p.string("\n")

        with open('data.in', 'r') as handle:
            parens = inputParser.parse(handle.read())


if __name__ == '__main__':
    validatortest.main()
