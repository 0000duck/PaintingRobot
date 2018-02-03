/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HINFO
#define HCPP_HINFO

namespace HalconCpp
{

// Class grouping system information related functionality.
class LIntExport HInfo
{

public:




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Query slots concerning information with relation to the operator get_operator_info.
  static HTuple QueryOperatorInfo();

  // Query slots of the online-information concerning the operator get_param_info.
  static HTuple QueryParamInfo();

  // Get operators with the given string as a substring of their name.
  static HTuple GetOperatorName(const HString& Pattern);

  // Get operators with the given string as a substring of their name.
  static HTuple GetOperatorName(const char* Pattern);

  // Get default data type for the control parameters of a HALCON-operator.
  static HTuple GetParamTypes(const HString& ProcName, HTuple* OutpCtrlParType);

  // Get default data type for the control parameters of a HALCON-operator.
  static HTuple GetParamTypes(const char* ProcName, HTuple* OutpCtrlParType);

  // Get number of the different parameter classes of a HALCON-operator.
  static HString GetParamNum(const HString& ProcName, Hlong* InpObjPar, Hlong* OutpObjPar, Hlong* InpCtrlPar, Hlong* OutpCtrlPar, HString* Type);

  // Get number of the different parameter classes of a HALCON-operator.
  static HString GetParamNum(const char* ProcName, Hlong* InpObjPar, Hlong* OutpObjPar, Hlong* InpCtrlPar, Hlong* OutpCtrlPar, HString* Type);

  // Get the names of the parameters of a HALCON-operator.
  static HTuple GetParamNames(const HString& ProcName, HTuple* OutpObjPar, HTuple* InpCtrlPar, HTuple* OutpCtrlPar);

  // Get the names of the parameters of a HALCON-operator.
  static HTuple GetParamNames(const char* ProcName, HTuple* OutpObjPar, HTuple* InpCtrlPar, HTuple* OutpCtrlPar);

  // Get information concerning a HALCON-operator.
  static HTuple GetOperatorInfo(const HString& ProcName, const HString& Slot);

  // Get information concerning a HALCON-operator.
  static HTuple GetOperatorInfo(const char* ProcName, const char* Slot);

  // Get information concerning the operator parameters.
  static HTuple GetParamInfo(const HString& ProcName, const HString& ParamName, const HString& Slot);

  // Get information concerning the operator parameters.
  static HTuple GetParamInfo(const char* ProcName, const char* ParamName, const char* Slot);

  // Search names of all operators assigned to one keyword.
  static HTuple SearchOperator(const HString& Keyword);

  // Search names of all operators assigned to one keyword.
  static HTuple SearchOperator(const char* Keyword);

  // Get keywords which are assigned to operators.
  static HTuple GetKeywords(const HString& ProcName);

  // Get keywords which are assigned to operators.
  static HTuple GetKeywords(const char* ProcName);

  // Get information concerning the chapters on operators.
  static HTuple GetChapterInfo(const HTuple& Chapter);

  // Get information concerning the chapters on operators.
  static HTuple GetChapterInfo(const HString& Chapter);

  // Get information concerning the chapters on operators.
  static HTuple GetChapterInfo(const char* Chapter);

  // Query all available window types.
  static HTuple QueryWindowType();

  // Get the output treatment of an image matrix.
  static HString GetComprise(const HWindow& WindowHandle);

  // Query the region display modes.
  static HTuple QueryShape();

  // Query the possible line widths.
  static void QueryLineWidth(Hlong* Min, Hlong* Max);

  // Query the number of colors for color output.
  static HTuple QueryColored();

  // Query information about the specified image acquisition interface.
  static HString InfoFramegrabber(const HString& Name, const HString& Query, HTuple* ValueList);

  // Query information about the specified image acquisition interface.
  static HString InfoFramegrabber(const char* Name, const char* Query, HTuple* ValueList);

};

}

#endif
