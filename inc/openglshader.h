#ifndef OPENGLSHADER_H
#define OPENGLSHADER_H

// OpenGL 2.0

const char PASSTHROUGH_VERT_SHADER_110[] =
    "#version 110\n"
    "varying vec2 TEX0; \n"
    "\n"
    "void main()\n"
    "{\n"
    "    gl_Position = ftransform(); \n"
    "    TEX0 = gl_MultiTexCoord0.xy; \n"
    "}\n";

const char PALETTE_FRAG_SHADER_110[] =
    "#version 110\n"
    "uniform sampler2D SurfaceTex; \n"
    "uniform sampler2D PaletteTex; \n"
    "varying vec2 TEX0; \n"
    "\n"
    "void main()\n"
    "{\n"
    "   vec4 pIndex = texture2D(SurfaceTex, TEX0); \n"
    "   gl_FragColor = texture2D(PaletteTex, vec2(pIndex.r * (255.0/256.0) + (0.5/256.0), 0)); \n"
    "}\n";


const char PASSTHROUGH_FRAG_SHADER_110[] =
    "#version 110\n"
    "uniform sampler2D SurfaceTex; \n"
    "varying vec2 TEX0; \n"
    "\n"
    "void main()\n"
    "{\n"
    "   vec4 texel = texture2D(SurfaceTex, TEX0); \n"
    "   gl_FragColor = texel; \n"
    "}\n";

// OpenGL 3.0

const char PASSTHROUGH_VERT_SHADER[] =
    "#version 130\n"
    "in vec4 VertexCoord;\n"
    "in vec4 COLOR;\n"
    "in vec4 TexCoord;\n"
    "out vec4 COL0;\n"
    "out vec4 TEX0;\n"
    "uniform mat4 MVPMatrix;\n"
    "\n"
    "void main()\n"
    "{\n"
    "    gl_Position = MVPMatrix * VertexCoord;\n"
    "    COL0 = COLOR;\n"
    "    TEX0.xy = TexCoord.xy;\n"
    "}\n";


const char PALETTE_FRAG_SHADER[] =
    "#version 130\n"
    "out vec4 FragColor;\n"
    "uniform sampler2D SurfaceTex;\n"
    "uniform sampler2D PaletteTex;\n"
    "in vec4 TEX0;\n"
    "\n"
    "void main()\n"
    "{\n"
    "    vec4 pIndex = texture(SurfaceTex, TEX0.xy);\n"
    "    FragColor = texture(PaletteTex, vec2(pIndex.r * (255.0/256.0) + (0.5/256.0), 0));\n"
    "}\n";


const char PASSTHROUGH_FRAG_SHADER[] =
    "#version 130\n"
    "out vec4 FragColor;\n"
    "uniform sampler2D SurfaceTex;\n"
    "in vec4 TEX0;\n"
    "\n"
    "void main()\n"
    "{\n"
    "    vec4 texel = texture(SurfaceTex, TEX0.xy);\n"
    "    FragColor = texel;\n"
    "}\n";

// OpenGL 3.2 (Core Profile)

const char PASSTHROUGH_VERT_SHADER_CORE[] =
    "#version 150\n"
    "in vec4 VertexCoord;\n"
    "in vec4 COLOR;\n"
    "in vec4 TexCoord;\n"
    "out vec4 COL0;\n"
    "out vec4 TEX0;\n"
    "uniform mat4 MVPMatrix;\n"
    "\n"
    "void main()\n"
    "{\n"
    "    gl_Position = MVPMatrix * VertexCoord;\n"
    "    COL0 = COLOR;\n"
    "    TEX0.xy = TexCoord.xy;\n"
    "}\n";


const char PALETTE_FRAG_SHADER_CORE[] =
    "#version 150\n"
    "out vec4 FragColor;\n"
    "uniform sampler2D SurfaceTex;\n"
    "uniform sampler2D PaletteTex;\n"
    "in vec4 TEX0;\n"
    "\n"
    "void main()\n"
    "{\n"
    "    vec4 pIndex = texture(SurfaceTex, TEX0.xy);\n"
    "    FragColor = texture(PaletteTex, vec2(pIndex.r * (255.0/256.0) + (0.5/256.0), 0));\n"
    "}\n";


const char PASSTHROUGH_FRAG_SHADER_CORE[] =
    "#version 150\n"
    "out vec4 FragColor;\n"
    "uniform sampler2D SurfaceTex;\n"
    "in vec4 TEX0;\n"
    "\n"
    "void main()\n"
    "{\n"
    "    vec4 texel = texture(SurfaceTex, TEX0.xy);\n"
    "    FragColor = texel;\n"
    "}\n";

#endif
