############################################################################## @ ���漱��.#############################################################################import osimport sysimport enum############################################################################## @ Ÿ�� �÷���.#############################################################################class TargetPlatform(enum.Enum):	Windows = enum.auto()	MacOSX = enum.auto()	Android = enum.auto()	iOS = enum.auto()############################################################################## @ ���� Ŭ����.#############################################################################class Builder:	def __init__(self) -> None:		pass	def Build(targetPlatform : TargetPlatform):		if targetPlatform == TargetPlatform.Windows:			pass		elif targetPlatform == TargetPlatform.MacOSX:			pass		elif targetPlatform == TargetPlatform.Android:			pass		elif targetPlatform == TargetPlatform.iOS:			pass############################################################################## @ �����Լ�.#############################################################################def OnMain(arguments : list):	pass############################################################################## @ ������.#############################################################################if __name__ == "main":	OnMain(sys.argv)