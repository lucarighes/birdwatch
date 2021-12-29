#ifndef org_apache_lucene_codecs_MultiLevelSkipListReader_H
#define org_apache_lucene_codecs_MultiLevelSkipListReader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class MultiLevelSkipListReader : public ::java::lang::Object {
         public:
          enum {
            mid_close_f2cc1bce94666404,
            mid_getDoc_9972fcc56b44e79d,
            mid_init_7cbcb52ba5068aff,
            mid_skipTo_1e143afe1894d213,
            mid_seekChild_040c4cd0390c5aff,
            mid_setLastSkipData_040c4cd0390c5aff,
            mid_readSkipData_d92727cc8c1d9954,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLevelSkipListReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLevelSkipListReader(const MultiLevelSkipListReader& obj) : ::java::lang::Object(obj) {}

          void close() const;
          jint getDoc() const;
          void init(jlong, jint) const;
          jint skipTo(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(MultiLevelSkipListReader);
        extern PyTypeObject *PY_TYPE(MultiLevelSkipListReader);

        class t_MultiLevelSkipListReader {
        public:
          PyObject_HEAD
          MultiLevelSkipListReader object;
          static PyObject *wrap_Object(const MultiLevelSkipListReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
