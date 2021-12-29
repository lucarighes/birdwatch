#ifndef org_apache_lucene_codecs_blockterms_TermsIndexWriterBase_H
#define org_apache_lucene_codecs_blockterms_TermsIndexWriterBase_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {
          class TermsIndexWriterBase$FieldWriter;
        }
      }
      namespace index {
        class FieldInfo;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {

          class TermsIndexWriterBase : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_addField_d1b1b077f554cd9d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermsIndexWriterBase(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermsIndexWriterBase(const TermsIndexWriterBase& obj) : ::java::lang::Object(obj) {}

            TermsIndexWriterBase();

            ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase$FieldWriter addField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
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
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(TermsIndexWriterBase);
          extern PyTypeObject *PY_TYPE(TermsIndexWriterBase);

          class t_TermsIndexWriterBase {
          public:
            PyObject_HEAD
            TermsIndexWriterBase object;
            static PyObject *wrap_Object(const TermsIndexWriterBase&);
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
