from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('custom_interfaces', 'custom_interfaces.*')),
)
