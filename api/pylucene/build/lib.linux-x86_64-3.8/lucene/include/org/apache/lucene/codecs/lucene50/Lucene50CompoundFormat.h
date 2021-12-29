#ifndef org_apache_lucene_codecs_lucene50_Lucene50CompoundFormat_H
#define org_apache_lucene_codecs_lucene50_Lucene50CompoundFormat_H

#include "org/apache/lucene/codecs/CompoundFormat.h"

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
        namespace lucene50 {

          class Lucene50CompoundFormat : public ::org::apache::lucene::codecs::CompoundFormat {
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

            explicit Lucene50CompoundFormat(jobject obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene50CompoundFormat(const Lucene50CompoundFormat& obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {}

            Lucene50CompoundFormat();

            ::org::apache::lucene::codecs::CompoundDirectory getCompoundReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace lucene50 {
          extern PyType_Def PY_TYPE_DEF(Lucene50CompoundFormat);
          extern PyTypeObject *PY_TYPE(Lucene50CompoundFormat);

          class t_Lucene50CompoundFormat {
          public:
            PyObject_HEAD
            Lucene50CompoundFormat object;
            static PyObject *wrap_Object(const Lucene50CompoundFormat&);
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
