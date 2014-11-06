#ifndef GEOMETRYENGINE_H
#define GEOMETRYENGINE_H

#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>

class GeometryEngine : protected QOpenGLFunctions
{
public:
    GeometryEngine();
    virtual ~GeometryEngine();

    void drawCubeGeometry(QOpenGLShaderProgram *program);

private:
    void initCubeGeometry();

    QOpenGLBuffer arrayBuf;
    QOpenGLBuffer indexBuf;

    //Light parameters:
//    GLuint m_posAttr;
//    GLuint m_colAttr;
//    GLuint m_normalAttr;
//    GLuint m_mvMatrixUniform;
//    GLuint m_pMatrixUniform;
//    GLuint m_nMatrixUniform;
    GLuint m_lightPosUniform;
    GLuint m_ambientColorUniform;
    GLuint m_diffuseColorUniform;
    GLuint m_specularColorUniform;

    QVector3D lightPos = QVector3D(10.0f, 0.0f, 30.0f);
    //QVector3D ambientColor= QVector3D(0.3f, 1.0f, 1.0f);
    //QVector3D ambientColor= QVector3D(0.9f, 0.9f, 1.0f);
    //QVector3D ambientColor= QVector3D(1.0f, 1.0f, 1.0f);
    QVector3D ambientColor= QVector3D(0.0f, 0.0f, 0.0f);
    QVector3D diffuseColor = QVector3D(0.7f, 0.7f, 0.7f);
    QVector3D specularColor = QVector3D(1.0f, 1.0f, 1.0f);


};

#endif // GEOMETRYENGINE_H
