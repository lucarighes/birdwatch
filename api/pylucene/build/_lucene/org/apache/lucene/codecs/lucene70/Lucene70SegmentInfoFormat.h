#ifndef org_apache_lucene_codecs_lucene70_Lucene70SegmentInfoFormat_H
#define org_apache_lucene_codecs_lucene70_Lucene70SegmentInfoFormat_H

#include "org/apache/lucene/codecs/SegmentInfoFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
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
        namespace lucene70 {

          class Lucene70SegmentInfoFormat : public ::org::apache::lucene::codecs::SegmentInfoFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_read_ca83998f161c8fae,
              mid_write_42bd8d9f441f9252,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene70SegmentInfoFormat(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene70SegmentInfoFormat(const Lucene70SegmentInfoFormat& obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {}

            static ::java::lang::String *SI_EXTENSION;

            Lucene70SegmentInfoFormat();

            ::org::apache::lucene::index::SegmentInfo read(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::store::IOContext &) const;
            void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace lucene70 {
          extern PyType_Def PY_TYPE_DEF(Lucene70SegmentInfoFormat);
          extern PyTypeObject *PY_TYPE(Lucene70SegmentInfoFormat);

          class t_Lucene70SegmentInfoFormat {
          public:
            PyObject_HEAD
            Lucene70SegmentInfoFormat object;
            static PyObject *wrap_Object(const Lucene70SegmentInfoFormat&);
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
