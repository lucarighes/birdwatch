#ifndef org_apache_lucene_codecs_simpletext_SimpleTextCompoundFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextCompoundFormat_H

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
        namespace simpletext {

          class SimpleTextCompoundFormat : public ::org::apache::lucene::codecs::CompoundFormat {
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

            explicit SimpleTextCompoundFormat(jobject obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextCompoundFormat(const SimpleTextCompoundFormat& obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {}

            SimpleTextCompoundFormat();

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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextCompoundFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextCompoundFormat);

          class t_SimpleTextCompoundFormat {
          public:
            PyObject_HEAD
            SimpleTextCompoundFormat object;
            static PyObject *wrap_Object(const SimpleTextCompoundFormat&);
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
