#ifndef org_apache_lucene_codecs_CompoundFormat_H
#define org_apache_lucene_codecs_CompoundFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace codecs {
        class CompoundDirectory;
      }
      namespace index {
        class SegmentInfo;
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
      namespace codecs {

        class CompoundFormat : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_getCompoundReader_8e5fdfa35a2f9c39,
            mid_write_42bd8d9f441f9252,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompoundFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompoundFormat(const CompoundFormat& obj) : ::java::lang::Object(obj) {}

          CompoundFormat();

          ::org::apache::lucene::codecs::CompoundDirectory getCompoundReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
          void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(CompoundFormat);
        extern PyTypeObject *PY_TYPE(CompoundFormat);

        class t_CompoundFormat {
        public:
          PyObject_HEAD
          CompoundFormat object;
          static PyObject *wrap_Object(const CompoundFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
