#ifndef org_apache_lucene_queryparser_surround_parser_FastCharStream_H
#define org_apache_lucene_queryparser_surround_parser_FastCharStream_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {
            class CharStream;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {

            class FastCharStream : public ::java::lang::Object {
             public:
              enum {
                mid_init$_b2f3c57f5e6eb3f2,
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

              explicit FastCharStream(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FastCharStream(const FastCharStream& obj) : ::java::lang::Object(obj) {}

              FastCharStream(const ::java::io::Reader &);

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

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {
            extern PyType_Def PY_TYPE_DEF(FastCharStream);
            extern PyTypeObject *PY_TYPE(FastCharStream);

            class t_FastCharStream {
            public:
              PyObject_HEAD
              FastCharStream object;
              static PyObject *wrap_Object(const FastCharStream&);
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

#endif
