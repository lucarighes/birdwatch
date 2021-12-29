#ifndef org_apache_lucene_codecs_lucene86_Lucene86PointsReader_H
#define org_apache_lucene_codecs_lucene86_Lucene86PointsReader_H

#include "org/apache/lucene/codecs/PointsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues;
        class SegmentReadState;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
        namespace lucene86 {

          class Lucene86PointsReader : public ::org::apache::lucene::codecs::PointsReader {
           public:
            enum {
              mid_init$_363fedc32cc1a1cf,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_getValues_72b990dbae0eea09,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene86PointsReader(jobject obj) : ::org::apache::lucene::codecs::PointsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene86PointsReader(const Lucene86PointsReader& obj) : ::org::apache::lucene::codecs::PointsReader(obj) {}

            Lucene86PointsReader(const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::PointValues getValues(const ::java::lang::String &) const;
            jlong ramBytesUsed() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene86 {
          extern PyType_Def PY_TYPE_DEF(Lucene86PointsReader);
          extern PyTypeObject *PY_TYPE(Lucene86PointsReader);

          class t_Lucene86PointsReader {
          public:
            PyObject_HEAD
            Lucene86PointsReader object;
            static PyObject *wrap_Object(const Lucene86PointsReader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
