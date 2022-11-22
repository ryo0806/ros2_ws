from setuptools import find_packages
from setuptools import setup

setup(
    name='person_msg',
    version='0.0.0',
    packages=find_packages(
        include=('person_msg', 'person_msg.*')),
)
