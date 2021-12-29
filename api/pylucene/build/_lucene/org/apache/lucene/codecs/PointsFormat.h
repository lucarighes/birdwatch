#ifndef org_apache_lucene_codecs_PointsFormat_H
#define org_apache_lucene_codecs_PointsFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PointsWriter;
        class PointsReader;
        class PointsFormat;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class PointsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_fieldsReader_8abb687068409d66,
            mid_fieldsWriter_e285a7edd004a5e4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointsFormat(const PointsFormat& obj) : ::java::lang::Object(obj) {}

          static PointsFormat *EMPTY;

          ::org::apache::lucene::codecs::PointsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
          ::org::apache::lucene::codecs::PointsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
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
        extern PyType_Def PY_TYPE_DEF(PointsFormat);
        extern PyTypeObject *PY_TYPE(PointsFormat);

        class t_PointsFormat {
        public:
          PyObject_HEAD
          PointsFormat object;
          static PyObject *wrap_Object(const PointsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
