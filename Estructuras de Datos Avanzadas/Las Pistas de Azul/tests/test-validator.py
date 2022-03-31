#!/usr/bin/python
# -*- coding: utf-8 -*-

# no-self-use
# pylint: disable=R0201

from distutils.command.build_scripts import first_line_re
import sys
import re
import unittest

from omegaup.validator import validatortest

MAX_N = 1000
NUM_SUBTAREAS = 3


class Test(unittest.TestCase):

    def parse_integers(self, _str, assert_size=None):
        self.assertEqual(type(_str), str)
        regex_integers = re.compile(r'^(-?\d+)( -?\d+)*$')
        self.assertTrue(regex_integers.match(_str))
        nums = list(map(int, _str.split(' ')))
        if assert_size is not None:
            self.assertEqual(len(nums), assert_size)
        return nums

    def parse_subtarea(self, case_name):
        for i in range(1, NUM_SUBTAREAS + 1):
            if "sub%d" % (i) in case_name:
                return i
        return None

    def test(self):
        with open('data.in', 'r') as handle:
            lines = handle.read().split('\n')

        self.assertEqual(lines[-1], '')
        lines.pop()

        first_line_reg = re.compile(r'^(\d+)')
        self.assertTrue(first_line_reg.match(lines[0]),
            "First line incorrectly formatted")
        N = int(lines[0])
        # Validar N
        self.assertTrue(1 <= N <= 50, "N out of bounds")

        second_line_reg = re.compile(r'^(\d+) (\d+)')
        self.assertTrue(second_line_reg.match(lines[1]),
            "First line incorrectly formatted")
        F, C = map(int, lines[1].split(' '))
        # Validar F, C
        self.assertTrue(0 <= F <= N - 1, "F out of bounds")
        self.assertTrue(0 <= C <= N - 1, "C out of bounds")

        # Validar número de lineas
        self.assertEqual(len(lines), N + 2)

if __name__ == '__main__':
    validatortest.main()
