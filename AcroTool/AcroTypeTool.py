#############################################################################
# @ ���漱��.
#############################################################################
import os
import sys


#############################################################################
# @ ��� Ŭ����.
#############################################################################
class TypeClass:
	def __init__(self) -> None:
		pass


class VariableInfo:
	_Name : str
	_Type : str

class FunctionInfo:
	_Name : str
	_ReturnTypeNam : str # _Type
	_ParamterTypes : list # VariableInfo

class ClassInfo:
	_Name: str
	_Namespace: str
	_Parents : list # ClassInfo._Name
	_Childs : list # ClassInfo._Name
	_VariableInfos : VariableInfo
	_FunctionInfos : FunctionInfo

class EnumInfo:
	_Name : str


def Block(codeBlock : str):
	pass

def Parse(code : str):
	pass

#############################################################################
# @ �����Լ�.
#############################################################################
def OnMain(arguments : list):
	# ���ڷ� ���� ��� ���� ��� ��������� ���� �θ� ��... ����Ѵ�.
	# �׸��� ��ϵ� �����͸� �����Ѵ�.
	# 
	pass


#############################################################################
# @ ������.
#############################################################################
if __name__ == "main":
	OnMain(sys.argv)