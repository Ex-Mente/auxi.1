#!/usr/bin/env python3
"""
This module provides a set of physical constants that are used frequently.
"""

__version__ = '0.3.6'
__license__ = 'LGPL v3'
__copyright__ = 'Copyright 2016, Ex Mente Technologies (Pty) Ltd'
__author__ = 'Johan Zietsman'
__credits__ = ['Johan Zietsman']
__maintainer__ = 'Johan Zietsman'
__email__ = 'johan.zietsman@ex-mente.co.za'
__status__ = 'Planning'


# TODO: Add literature references to these constants.

# Universal Constants

c = 299792458
"""[m·s-1] speed of light in vacuum"""

G = 6.67408E-11
"""[m3.kg-1.s-2] Newtonian constant of gravitation"""

h = 6.626070040E-34
"""[J.s] Planck constant"""

h_bar = 1.054571800E-34
"""[J.s] reduced Planck constant (h/(2pi))"""


# Physico-chemical Constants

m_u = 1.660538921E-27
"""[kg] atomic mass constant"""

N_A = 6.02214129E23
"""[mol-1] Avogadro's number"""

k_B = 1.3806488E-23
"""[J.K-1] Boltzmann constant"""

F = 96485.3365
"""[C·mol-1] Faraday constant"""

R = 8.3144621
"""[J.K-1.mol-1] gas constant"""


# Other Constants

g = 9.80665
"""[m.s-2] standard acceleration of gravity on earth"""

T_NTP = 293.15
"""[K] Temperature under normal temperature and pressure (NTP) conditions."""

P_NTP = 101325.0
"""[Pa] Pressure under normal temperature and pressure (NTP) conditions."""

T_STP = 273.15
"""[K] Temperature under standard temperature and pressure (NTP) conditions."""

P_STP = 100000.0
"""[Pa] Pressure under standard temperature and pressure (NTP) conditions."""
