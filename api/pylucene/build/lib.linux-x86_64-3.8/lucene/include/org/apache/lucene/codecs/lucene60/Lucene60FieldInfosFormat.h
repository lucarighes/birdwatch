#ifndef org_apache_lucene_codecs_lucene60_Lucene60FieldInfosFormat_H
#define org_apache_lucene_codecs_lucene60_Lucene60FieldInfosFormat_H

#include "org/apache/lucene/codecs/FieldInfosFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
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
        namespace lucene60 {

          class Lucene60FieldInfosFormat : public ::org::apache::lucene::codecs::FieldInfosFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_read_1706310ddb242d67,
              mid_write_226745c1985cb50a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene60FieldInfosFormat(jobject obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene60FieldInfosFormat(const Lucene60FieldInfosFormat& obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {}

            Lucene60FieldInfosFormat();

            ::org::apache::lucene::index::FieldInfos read(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace lucene60 {
          extern PyType_Def PY_TYPE_DEF(Lucene60FieldInfosFormat);
          extern PyTypeObject *PY_TYPE(Lucene60FieldInfosFormat);

          class t_Lucene60FieldInfosFormat {
          public:
            PyObject_HEAD
            Lucene60FieldInfosFormat object;
            static PyObject *wrap_Object(const Lucene60FieldInfosFormat&);
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
