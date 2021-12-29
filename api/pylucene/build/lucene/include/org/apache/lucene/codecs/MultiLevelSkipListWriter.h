#ifndef org_apache_lucene_codecs_MultiLevelSkipListWriter_H
#define org_apache_lucene_codecs_MultiLevelSkipListWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
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

        class MultiLevelSkipListWriter : public ::java::lang::Object {
         public:
          enum {
            mid_bufferSkip_040c4cd0390c5aff,
            mid_writeSkip_2d8edaf5101635c8,
            mid_resetSkip_f2cc1bce94666404,
            mid_writeSkipData_3b25f15d6988aa5d,
            mid_init_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLevelSkipListWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLevelSkipListWriter(const MultiLevelSkipListWriter& obj) : ::java::lang::Object(obj) {}

          void bufferSkip(jint) const;
          jlong writeSkip(const ::org::apache::lucene::store::IndexOutput &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiLevelSkipListWriter);
        extern PyTypeObject *PY_TYPE(MultiLevelSkipListWriter);

        class t_MultiLevelSkipListWriter {
        public:
          PyObject_HEAD
          MultiLevelSkipListWriter object;
          static PyObject *wrap_Object(const MultiLevelSkipListWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
