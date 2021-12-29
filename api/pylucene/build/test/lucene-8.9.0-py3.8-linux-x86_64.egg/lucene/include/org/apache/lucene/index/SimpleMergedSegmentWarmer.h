#ifndef org_apache_lucene_index_SimpleMergedSegmentWarmer_H
#define org_apache_lucene_index_SimpleMergedSegmentWarmer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter$IndexReaderWarmer;
        class LeafReader;
      }
      namespace util {
        class InfoStream;
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace index {

        class SimpleMergedSegmentWarmer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_5c75041b743adb53,
            mid_warm_947f3bbc1666c05e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleMergedSegmentWarmer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleMergedSegmentWarmer(const SimpleMergedSegmentWarmer& obj) : ::java::lang::Object(obj) {}

          SimpleMergedSegmentWarmer(const ::org::apache::lucene::util::InfoStream &);

          void warm(const ::org::apache::lucene::index::LeafReader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(SimpleMergedSegmentWarmer);
        extern PyTypeObject *PY_TYPE(SimpleMergedSegmentWarmer);

        class t_SimpleMergedSegmentWarmer {
        public:
          PyObject_HEAD
          SimpleMergedSegmentWarmer object;
          static PyObject *wrap_Object(const SimpleMergedSegmentWarmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
