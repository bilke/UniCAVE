#define GLI_INCLUDE_GL_APPLE_VERTEX_PROGRAM_EVALUATORS

enum Main {

  GL_VERTEX_ATTRIB_MAP1_APPLE              = 0x8A00,
  GL_VERTEX_ATTRIB_MAP2_APPLE              = 0x8A01,
  GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE         = 0x8A02,
  GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE        = 0x8A03,
  GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE        = 0x8A04,
  GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE       = 0x8A05,
  GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE         = 0x8A06,
  GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE        = 0x8A07,
  GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE        = 0x8A08,
  GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE       = 0x8A09,

};

void glEnableVertexAttribAPPLE(GLuint index, GLenum[Main] pname);
void glDisableVertexAttribAPPLE(GLuint index, GLenum[Main] pname);
GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum[Main] pname);
void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
