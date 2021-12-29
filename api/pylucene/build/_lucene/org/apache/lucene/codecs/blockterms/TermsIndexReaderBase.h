#ifndef org_apache_lucene_codecs_blockterms_TermsIndexReaderBase_H
#define org_apache_lucene_codecs_blockterms_TermsIndexReaderBase_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class FieldInfo;
      }
      namespace codecs {
        namespace blockterms {
          class TermsIndexReaderBase$FieldIndexEnum;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {

          class TermsIndexReaderBase : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_getFieldEnum_545426ea5d9b0f76,
              mid_supportsOrd_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermsIndexReaderBase(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermsIndexReaderBase(const TermsIndexReaderBase& obj) : ::java::lang::Object(obj) {}

            TermsIndexReaderBase();

            void close() const;
            ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase$FieldIndexEnum getFieldEnum(const ::org::apache::lucene::index::FieldInfo &) const;
            jboolean supportsOrd() const;
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
          extern PyType_Def PY_TYPE_DEF(TermsIndexReaderBase);
          extern PyTypeObject *PY_TYPE(TermsIndexReaderBase);

          class t_TermsIndexReaderBase {
          public:
            PyObject_HEAD
            TermsIndexReaderBase object;
            static PyObject *wrap_Object(const TermsIndexReaderBase&);
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
