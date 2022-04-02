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
    R = yield oup.boundedInteger(1, 2000, 'R')
    yield oup.space
    C = yield oup.boundedInteger(1, 2000, 'C')
    yield oup.space
    K = yield oup.boundedInteger(1, 10**7, 'K')
    yield oup.eol

    def evalLineLength(line):
        if len(line) != C:
            return f'line length to be {C}, got {len(line)}'
        return None

    lineWithoutDollar = oup.label('line w/o $', p.regex(r'[.#]*') << oup.eol)
    lineWithDollar = oup.label('line', p.regex(r'[.#]*\$?[.#]*') << oup.eol)

    saw_dollar = False
    for r in range(R):
        parser = lineWithoutDollar if saw_dollar else lineWithDollar
        line = yield oup.guard(parser, evalLineLength)
        saw_dollar |= '$' in line

    if not saw_dollar:
        return p.fail('$ to be present in map')


class Test(unittest.TestCase):

    def test(self):
        with open('data.in', 'r') as handle:
            inputParser.parse(handle.read())


if __name__ == '__main__':
    validatortest.main()
