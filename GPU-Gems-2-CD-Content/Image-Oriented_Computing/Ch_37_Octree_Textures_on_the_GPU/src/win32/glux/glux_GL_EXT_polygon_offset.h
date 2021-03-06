
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_EXT_polygon_offset__
#define __GLUX_GL_EXT_polygon_offset__

GLUX_NEW_PLUGIN(GL_EXT_polygon_offset);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_POLYGON_OFFSET_EXT
#  define GL_POLYGON_OFFSET_EXT 0x8037
#endif
#ifndef GL_POLYGON_OFFSET_FACTOR_EXT
#  define GL_POLYGON_OFFSET_FACTOR_EXT 0x8038
#endif
#ifndef GL_POLYGON_OFFSET_BIAS_EXT
#  define GL_POLYGON_OFFSET_BIAS_EXT 0x8039
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glPolygonOffsetEXT
typedef void (APIENTRYP PFNGLUXPOLYGONOFFSETEXTPROC) (GLfloat factor, GLfloat bias);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glPolygonOffsetEXT
extern PFNGLUXPOLYGONOFFSETEXTPROC glPolygonOffsetEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
