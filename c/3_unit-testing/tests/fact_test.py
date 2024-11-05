from ctypes import CDLL

lib = CDLL("./dist/lib.so")

def test_fact():
    assert lib.fact(6) == 720
    assert lib.fact(0) == 1
    assert lib.fact(-42) ==1
