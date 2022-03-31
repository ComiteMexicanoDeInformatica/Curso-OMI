#!/usr/bin/python
# -*- coding: utf-8 -*-
import logging
import unittest
import sys

from omegaup.validator import validatortest

class MyTest(unittest.TestCase):
	def test(self):
		original_input = open("data.in", "r")
		first_line = original_input.readline().split()
		self.assertEqual(len(first_line), 1, "Mas de un número en la primera línea")

		N = int(first_line[0])

		caseName = sys.argv[1]

        # Check the limit on N
		self.assertTrue(1 <= N <= 10000, "Error en el límite de N")
		commands = 0
		cmd_line = original_input.readline()
		while cmd_line != "":
			params = cmd_line.split()
			cmd_type = params[0]
			bb = 0 < int(cmd_type) < 5
			self.assertTrue(bb, "Tipo de comando inválido")

			if cmd_type == 1:
				self.assertEqual(len(params), 2, "Tipo de comando 1 sin parámetro extra")
				cantidad = params[1]
				bb = 1 <= int(cantidad) <= 1000
				self.assertTrue(bb, "Error en la cantidad de tacos")
            
			cmd_line = original_input.readline()
			commands += 1
		
		self.assertEqual(commands, N)


if __name__ == '__main__':
	validatortest.main()