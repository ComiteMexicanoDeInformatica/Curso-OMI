#!/usr/bin/python
# -*- coding: utf-8 -*-

# no-self-use
# pylint: disable=R0201

import sys
import re
import unittest

from omegaup.validator import validatortest

MAX_N = 1000
NUM_SUBTAREAS = 3


class Test(unittest.TestCase):

    def test(self):
        with open('data.in', 'r') as handle:
            lines = handle.read().split('\n')

        #self.assertEqual(lines[-1], '')
        lines.pop()

        first_line_reg = re.compile(r'^(\d+) (\d+) (\d+)$')
        self.assertTrue(first_line_reg.match(lines[0]), "first line incorrectly formatted")
        R, C, K = map(int, lines[0].split(' '))

        return

        # Validar R, C, K
        self.assertTrue(1 <= R <= 2000, "R out of bounds")
        self.assertTrue(1 <= C <= 2000, "C out of bounds")
        self.assertTrue(0 <= K <= 10**7, "K out of bounds")

        # Validar número de lineas
        self.assertEqual(len(lines), 1 + R, "line count mismatch")

        saw_dollar = False
        map_reg = re.compile(r'^[.#$]+$')
        for line in lines[1:]:
            self.assertTrue(map_reg.match(line), "invalid character in map")
            self.assertEqual(len(line), C, "line width mismatch")
            if '$' in line:
                self.assertFalse(saw_dollar, "too many $ in map")

        self.assertFalse(saw_dollar, "no $ in map")

if __name__ == '__main__':
    validatortest.main()
