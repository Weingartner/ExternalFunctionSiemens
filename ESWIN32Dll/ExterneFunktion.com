//M(Mask/"FCT-Sample"//0,200,558,193//220,65)
DEF Real_1=(R//1.1/,"Real1:")
DEF Real_2=(R//2.2/,"Real2:")
//DEF String_1=(S//""/,"(Real1 * Real2) as String:")
DEF String_1=(S//""/,"C:\\Users\\kronbergerj\\Desktop\\Test\\301.spf*C:\\Users\\kronbergerj\\Desktop\\Test\\302.spf*C:\\Users\\kronbergerj\\Desktop\\Test\\303.spf";)
DEF Ret=(B//0/,"Return:") 

FCT FuncTest_1 = ("C:\EsWin32Dll.dll"/B/R,R/S) 

VS6=("Call FCT",,se1)
VS8=("EXIT")

PRESS(VS6)
  String_1 = "Pfad ** FileName1 ** "
  Ret = FuncTest_1(Real_1,Real_2,String_1)
END_PRESS

PRESS(VS8)
  EXIT
END_PRESS
//END
