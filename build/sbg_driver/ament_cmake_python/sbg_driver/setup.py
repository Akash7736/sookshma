from setuptools import find_packages
from setuptools import setup

setup(
    name='sbg_driver',
    version='3.1.0',
    packages=find_packages(
        include=('sbg_driver', 'sbg_driver.*')),
)
