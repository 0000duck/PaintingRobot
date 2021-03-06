/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HGNUPLOT
#define HCPP_HGNUPLOT

namespace HalconCpp
{

// Represents an instance of a connection to a gnuplot process.
class LIntExport HGnuplot : public HToolBase
{

public:

  // Create an uninitialized instance
  HGnuplot():HToolBase() {}

  // Copy constructor
  HGnuplot(const HGnuplot& source) : HToolBase(source) {}

  // Create HGnuplot from handle, taking ownership
  explicit HGnuplot(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Plot a function using gnuplot.
  void GnuplotPlotFunct1d(const HFunction1D& Function) const;

  // Plot control values using gnuplot.
  void GnuplotPlotCtrl(const HTuple& Values) const;

  // Visualize images using gnuplot.
  void GnuplotPlotImage(const HImage& Image, Hlong SamplesX, Hlong SamplesY, const HTuple& ViewRotX, const HTuple& ViewRotZ, const HString& Hidden3D) const;

  // Visualize images using gnuplot.
  void GnuplotPlotImage(const HImage& Image, Hlong SamplesX, Hlong SamplesY, double ViewRotX, double ViewRotZ, const HString& Hidden3D) const;

  // Visualize images using gnuplot.
  void GnuplotPlotImage(const HImage& Image, Hlong SamplesX, Hlong SamplesY, double ViewRotX, double ViewRotZ, const char* Hidden3D) const;

  // Open a gnuplot file for visualization of images and control values.
  void GnuplotOpenFile(const HString& FileName);

  // Open a gnuplot file for visualization of images and control values.
  void GnuplotOpenFile(const char* FileName);

  // Open a pipe to a gnuplot process for visualization of images and control values.
  void GnuplotOpenPipe();

};

class LIntExport HGnuplotArray : public HToolArray
{
public:
  HGnuplotArray();
  HGnuplotArray(HGnuplot* classes, Hlong length);
protected:
  virtual void CreateArray(Hlong length);
};

}

#endif
