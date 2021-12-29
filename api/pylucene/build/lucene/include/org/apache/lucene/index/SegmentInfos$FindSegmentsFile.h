#ifndef org_apache_lucene_index_SegmentInfos$FindSegmentsFile_H
#define org_apache_lucene_index_SegmentInfos$FindSegmentsFile_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
      namespace store {
        class Directory;
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

        class SegmentInfos$FindSegmentsFile : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c51fd9fb1cf0392d,
            mid_run_d6bcd06f3102c4d9,
            mid_run_a78fd18a78411297,
            mid_doBody_c0a3c3394484d296,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfos$FindSegmentsFile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfos$FindSegmentsFile(const SegmentInfos$FindSegmentsFile& obj) : ::java::lang::Object(obj) {}

          SegmentInfos$FindSegmentsFile(const ::org::apache::lucene::store::Directory &);

          ::java::lang::Object run() const;
          ::java::lang::Object run(const ::org::apache::lucene::index::IndexCommit &) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentInfos$FindSegmentsFile);
        extern PyTypeObject *PY_TYPE(SegmentInfos$FindSegmentsFile);

        class t_SegmentInfos$FindSegmentsFile {
        public:
          PyObject_HEAD
          SegmentInfos$FindSegmentsFile object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SegmentInfos$FindSegmentsFile *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SegmentInfos$FindSegmentsFile&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SegmentInfos$FindSegmentsFile&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
