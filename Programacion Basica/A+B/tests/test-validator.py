#!/usr/bin/python
# -*- coding: utf-8 -*-

# no-self-use
# pylint: disable=R0201

import sys
import re
import unittest
import parsy as p

from omegaup.validator import validatortest
import omegaup.validator.parsing as oup

@p.generate
def inputParser():
    a = yield oup.boundedInteger(1, 1000, 'a')
    yield oup.space
    b = yield oup.boundedInteger(1, 1000, 'b')
    yield oup.eol
    return (a, b)

class Test(unittest.TestCase):

    def test(self):
        with open('data.in', 'r') as handle:
            (a, b) = inputParser.parse(handle.read())


if __name__ == '__main__':
    validatortest.main()
