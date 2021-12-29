#ifndef org_apache_lucene_codecs_TermVectorsFormat_H
#define org_apache_lucene_codecs_TermVectorsFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace codecs {
        class TermVectorsReader;
        class TermVectorsWriter;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
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

        class TermVectorsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_vectorsReader_e8da19a02e97f6f0,
            mid_vectorsWriter_0dc3e01ac1525114,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermVectorsFormat(const TermVectorsFormat& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::TermVectorsReader vectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::codecs::TermVectorsWriter vectorsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermVectorsFormat);
        extern PyTypeObject *PY_TYPE(TermVectorsFormat);

        class t_TermVectorsFormat {
        public:
          PyObject_HEAD
          TermVectorsFormat object;
          static PyObject *wrap_Object(const TermVectorsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
