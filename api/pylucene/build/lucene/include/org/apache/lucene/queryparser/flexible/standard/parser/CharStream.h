#ifndef org_apache_lucene_queryparser_flexible_standard_parser_CharStream_H
#define org_apache_lucene_queryparser_flexible_standard_parser_CharStream_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {

              class CharStream : public ::java::lang::Object {
               public:
                enum {
                  mid_BeginToken_8eea1dd85c3239c3,
                  mid_Done_f2cc1bce94666404,
                  mid_GetImage_db9b55ba01e03e4b,
                  mid_GetSuffix_4a35a620830b94db,
                  mid_backup_040c4cd0390c5aff,
                  mid_getBeginColumn_9972fcc56b44e79d,
                  mid_getBeginLine_9972fcc56b44e79d,
                  mid_getColumn_9972fcc56b44e79d,
                  mid_getEndColumn_9972fcc56b44e79d,
                  mid_getEndLine_9972fcc56b44e79d,
                  mid_getLine_9972fcc56b44e79d,
                  mid_readChar_8eea1dd85c3239c3,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit CharStream(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                CharStream(const CharStream& obj) : ::java::lang::Object(obj) {}

                jchar BeginToken() const;
                void Done() const;
                ::java::lang::String GetImage() const;
                JArray< jchar > GetSuffix(jint) const;
                void backup(jint) const;
                jint getBeginColumn() const;
                jint getBeginLine() const;
                jint getColumn() const;
                jint getEndColumn() const;
                jint getEndLine() const;
                jint getLine() const;
                jchar readChar() const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              extern PyType_Def PY_TYPE_DEF(CharStream);
              extern PyTypeObject *PY_TYPE(CharStream);

              class t_CharStream {
              public:
                PyObject_HEAD
                CharStream object;
                static PyObject *wrap_Object(const CharStream&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
